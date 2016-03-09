class Student{
  private:
  int s1, s2, s3, s4, s5;
  int total_score=0;

  public:
  void input(){
     //read 5 scores and save them to scores
     cin>>s1>>s2>>s3>>s4>>s5;
  }
  
  int calculateTotalScore(){
     total_score=s1+s2+s3+s4+s5;
     
     return total_score;
  }
  
  
};

int main(){
   int n;
   cin>>n;
   Student *s = new Student[n];  //an array of n students;
   
   for(int i=0; i<n; i++){
    s[i].input(); 
   }
   
   //calculate the score
   int kristen_score=s[0].calculateTotalScore();
   
   //determine how many students scores higher than kristen
   int count =0;
   for(int i=1; i<n;i++){
     int total=s[i].calculateTotalScore();
     if(total >kristen_score){
       count++;
     }
   }
   
   //print result
   cout<<count;
   return 0;
}
