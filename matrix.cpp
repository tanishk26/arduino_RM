#include<iostream>
#include<math.h>

using namespace std;

int determinant(int mat[][20], int n) ;
void getCofactor(int A[][20], int temp[][20], int p, int q, int n);
void adjoint(int A[][20],int adj[][20],int N);


int main()
{
	int a[20][20],b[20][20],c[20][20],m,n,p,q;

	cout<<"Enter the dimensions of A:"<<endl;         	//dimensions of a and b
	cin>>m>>n;
	cout<<"Enter the dimensions of B:"<<endl;
	cin>>p>>q;
		
		if(n!=p)
		{
			cout<<"MULTIPLICATION NOT POSSIBLE!!!";
			exit(0);
		}

	cout<<"Enter elements of A:"<<endl;					//entering elements
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	cout<<"Enter elements of B:"<<endl;
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
			cin>>b[i][j];
	}

	for(int i=0;i<m;i++)							//matrix multiplication
	{
		for(int j=0;j<q;j++)
		{
		c[i][j]=0;
			for(int k=0;k<n;k++)
				c[i][j] = c[i][j] + a[i][k]*b[k][j];
		}
	}

	cout<<"PRODUCT OF A AND B IS:"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
			cout<<c[i][j]<<"\t";
		cout<<endl;
	}

	int norm,sum=0;										//norm of matrix
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		sum = sum + c[i][j]*c[i][j];
	}
	norm = sqrt(sum);
	cout<<"NORM:"<<norm<<endl;

	int d[20][20],temp;								//transpose matrix
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
			d[j][i]=c[i][j];
		}
	}
		cout<<"TRANSPOSED MATRIX IS:"<<endl;
		for(int i=0;i<q;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<d[i][j]<<"\t";
			}
			cout<<endl;
		}

		if(m!=q)											//DETERMINANT
		{
			cout<<"DETERMINENT NOT POSSIBLE!!"<<endl;
			exit(0);
		}
		int det = determinant(c,m);
		cout<<"DETERMINENT:"<<det<<endl;
		
		if(det == 0)										//INVERSE
		{
			cout<<"INVERSE NOT POSSIBLE!!!"<<endl;
			exit(0);
		}

		int e[20][20];
			adjoint(c,e,m);




	return 0;
}
void adjoint(int A[][20],int adj[][20],int N) 
{ 
    if (N == 1) 
    { 
        adj[0][0] = 1; 
        return; 
    } 
  
    int sign = 1, temp[20][20]; 
  
    for (int i=0; i<N; i++) 
    { 
        for (int j=0; j<N; j++) 
        {
            getCofactor(A, temp, i, j, N); 
            sign = ((i+j)%2==0)? 1: -1; 
            adj[j][i] = (sign)*(determinant(temp, N-1)); 
        } 
    } 
    cout<<"ADJOINING FACTOR :"<<endl;
    for(int i=0;i<N;i++)
    {
    	for(int j=0;j<N;j++)
    		cout<<adj[i][j]<<"\t";
    	cout<<endl;
    }
    float f[20][20];
    int d = determinant(A,N);
    cout<<"INVERSE MATRIX:"<<endl;
    for(int i=0;i<N;i++)
    {
    	for(int j=0;j<N;j++)
    		cout<<f[i][j]/d<<"\t";
    cout<<endl;
    }
} 
void getCofactor(int A[][20], int temp[][20], int p, int q, int n) 
{ 
    int i = 0, j = 0; 
  
    for (int row = 0; row < n; row++) 
    { 
        for (int col = 0; col < n; col++) 
        { 
            if (row != p && col != q) 
            { 
                temp[i][j++] = A[row][col]; 
                if (j == n - 1) 
                { 
                    j = 0; 
                    i++; 
                } 
            } 
        } 
    } 
} 


int determinant(int mat[][20], int n)   
{   
    int num1,num2,det = 1,index,total = 1;    
         
    int temp[n + 1];   
          
    for(int i = 0; i < n; i++)    
    {  
        index = i;  
         
        while(mat[index][i] == 0 && index < n) {   
            index++;       
                
        }   
        if(index == n)    
        {     
            continue;      
        }   
        if(index != i)   
        {     
            for(int j = 0; j < n; j++)   
            {   
                swap(mat[index][j],mat[i][j]);      
            }   
                
                det = det*pow(-1,index-i);     
       }   
              
       for(int j = 0; j < n; j++)   
       {   
           temp[j] = mat[i][j];   
               
       }      
       for(int j = i+1; j < n; j++)   
       {   
           num1 = temp[i];    
           num2 = mat[j][i];   
              
           for(int k = 0; k < n; k++)   
           {      
               mat[j][k] = (num1 * mat[j][k]) - (num2 * temp[k]);   
                   
           }   
           total = total * num1;   
           }   
            
    }      
    for(int i = 0; i < n; i++)   
    {   
        det = det * mat[i][i];   
            
    }  
    return (det/total);    
    }   