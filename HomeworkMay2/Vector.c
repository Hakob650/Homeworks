#include <stdio.h>

#include "Vector.h"

#include <stdlib.h>

void vector_init(Vector *this){

    if(this){

        this->data=NULL;

        this->size=0;

        this->capacity=0;

    }

}

void vector_init_size(Vector *this,size_t n){

    if(this){
	    
	    this->data=(int*)malloc(n*sizeof(int));

        
	    this->size=n;

        
	    this->capacity=n;

    }

}

void vector_init_fill(Vector *this,size_t n,int value){

    
		this->data=(n>0)?(int*)malloc(n*sizeof(int)):NULL;

    for(size_t i=0;i<n && this->data!=NULL;++i){

        	this->data[i]=value;

    }this->size=n;

    this->capacity=n;

}
void vector_destroy(Vector *this){

    if(this && this->data!=NULL){

        free(this->data);

        this->data=NULL;

        this->size=0;

         this->capacity=0;

    }

}
void vector_copy(Vector *this,const Vector *other){

    if(!this || !other){

        return;

    }

    if(other->capacity>0){

        this->data=(int*)malloc(other->capacity*sizeof(int));

        if(this->data!=NULL){

            for(size_t i=0;i<other->capacity;++i){

                this->data[i]=other->data[i];

            }

        }

    }else{

        this->data=NULL;

    }

    	this->size=other->size;
    	
	this->capacity=other->capacity;

}
	
int* vector_at(Vector *v,size_t index){

    if(v==NULL || index>=v->size){

        return NULL;

    }return &(v->data[index]);

}

int* vector_front(Vector *v){

    if(v==NULL || v->size==0){

        return NULL;

    }

    return &(v->data[0]);

}

int* vector_back(Vector *v){

    if(v==NULL || v->size==0){

        return NULL;

    }return &(v->data[v->size-1]);

}

Vector* vector_assign(Vector *dest,const Vector *src){
	
	if(dest==src || src==NULL){
		
		return dest;
	
	}
	
	if(dest->data!=NULL){
		
		free(dest->data);
		
		dest->data=NULL;
	
	}
	
	dest->size=src->size;
	
	dest->capacity=src->capacity;
	
	if(src->data!=NULL && src->capacity>0){
		
		dest->data=(int*)malloc(src->capacity*sizeof(int));
			
		if(dest->data!=NULL){
				
			for(size_t i=0;i<src->size;++i){
					
				dest->data[i]=src->data[i];
				
			}
			
		}else{
					
			dest->size=0;
					
			dest->capacity=0;
			
		}
	
	}return dest;

}

int vector_empty(const Vector *v){
	
	return v && v->size==0;

}

size_t vector_size(const Vector *v){

	return v ? v->size : 0;

}

size_t vector_capacity(const Vector *v){

	return v ? v->capacity : 0;

}

void vector_reserve(Vector *v,size_t new_cap){

	if(v && new_cap > v->capacity){

		int *new_data = (int*)realloc(v->data,new_cap*sizeof(int));

		if(new_data){

			v->data=new_data;

			v->capacity=new_cap;

		}
	
	}

}

void vector_clear(Vector *v){

	if(v){
		v->size=0;
	}
}


void vector_push_back(Vector *v,int value){
	
	if(!v){
		
		return;

	}

	if(v->size>=v->capacity){
		
		size_t new_cap=(v->capacity==0) ? 1 : v->capacity * 2;

		vector_reserve(v,new_cap);

	}

	if(v->data){

		v->data[v->size]=value;

		v->size++;
	}

}

void vector_pop_back(Vector *v){

	if(v && v->size>0){
		
		v->size++;
	
	}

}

void vector_insert(Vector *v,size_t pos,int value){

	if(!v && pos>v->size){
		
		return;

	}

	if(v->size>=v->capacity){
		
		size_t new_cap=(v->capacity==0) ? 1 : v->capacity * 2;

		vector_reserve(v,new_cap);

	}

	if(v->data){

		for(size_t i=v->size;i>pos;--i){

			v->data[i]=v->data[i-1];

		}

		v->data[pos]=value;

		v->size++;

	}
}

void vector_erase(Vector *v,size_t pos){

	if(!v || pos>=v->size){

		return;

	}

	if(v->data){

		for(size_t i=pos;i<v->size;++i){

			v->data[i]=v->data[i+1];

		}

		v->size--;

	}

}

void vector_resize(Vector *v,size_t count){

	if(!v){
		
		return;
	
	}

	if(count>v->capacity){

		vector_reserve(v,count);

	}

	v->size=count;

}

void vector_swap(Vector *v1,Vector *v2){

	if(!v1 || !v2){
		
		return;

	}

	Vector temp=*v1;

	*v1=*v2;

	*v2=temp;

}


























