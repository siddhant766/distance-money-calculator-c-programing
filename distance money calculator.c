int main(){
    float dis,discount;
    scanf("%f",&dis);
    dis=(0<dis<=200)?dis*0.40:(200<dis<=500)?dis*0.35:(dis*0.30);
    printf("%f\n",dis);
    discount = dis *0.05;
    printf("%f",discount);
    
//    total -= discount;
//    printf("%f",total);
    return 0;
}
