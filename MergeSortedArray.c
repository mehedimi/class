/*
    Author: Mehedi hasan
    Program: Merge Sorted Algorithm
*/
#include <stdio.h>

int main()
{   
    // প্রথমে প্রয়োজনীয় ভেরিয়েবল ডিফাইন করে নিলাম । 
    int a_array[1000],
        a_index = 0,
        a_count,
        b_array[1000],
        b_index = 0,
        b_count,
        c_array[1000],
        c_index = 0,
        c_count = 0;
        // a array ইনপুট নেওয়ার জন্য । শুরু 
        printf("Enter array size of A: ");
        scanf("%d", &a_count);
        printf("\nPlease enter sorted array elements of A: \n");
        while(a_index < a_count){
            scanf("%d", &a_array[a_index]);
            a_index++;
        }
        a_index = 0;
        // a array ইনপুট নেওয়ার জন্য । শেষ 

        // b array ইনপুট নেওয়ার জন্য । শুরু  
        printf("\nEnter array size of B: ");
        scanf("%d", &b_count);
        printf("\nPlease enter sorted array elements of B: \n");
        while(b_index < b_count){
            scanf("%d", &b_array[b_index]);
            b_index++;
        }
        b_index = 0;
        // b array ইনপুট নেওয়ার জন্য । শেষ

        // এখানে আমরা একটি লুপ চালিয়েছি
        // এবং কন্ডিশন হিসেবে আছে 
        // যদি a array এর ইনডেক্স a array ইলিমেন্ট সংখ্যা এর থেকে ছোট এবং
        // b array এর ইনডেক্স  b array ইলিমেন্ট সংখ্যা এর থেকে ছোট
        while((a_index < a_count) && (b_index < b_count)){
            if(a_array[a_index] > b_array[b_index]){
                c_array[c_index] = b_array[b_index];
                b_index++;
            }else{
                c_array[c_index] = a_array[a_index];
                a_index++;
            }
            c_index++;
        }
        // এখানে আমরা চেক করছি যে a array তে আরও অবশিষ্ট কোন এলিমেন্ট আছে কিনা 
        // থাকলে সেটি c array তে মারজ করে দিব 
        if(a_count >= a_index){
            while(a_index < a_count){
                c_array[c_index] = a_array[a_index];
                c_index++;
                a_index++;
            }
        }
        // এখানে আমরা চেক করছি যে b array তে আরও অবশিষ্ট কোন এলিমেন্ট আছে কিনা 
        // থাকলে সেটি c array তে মারজ করে দিব
        if(b_count >= b_index){
            while(b_index < b_count){
                c_array[c_index] = b_array[b_index];
                c_index++;
                b_index++;
            }
        }
        // অবশেষে আমরা সাজানো মারজ করা array টি একে একে প্রিন্ট করবো 
        printf("\nMerge sorted array output: \n");
        c_count = (a_count + b_count);
        for(c_index = 0; c_index < c_count; c_index++){
            if(c_index < c_count - 1){
                printf("%d, ", c_array[c_index]);
            }else{
                printf("%d \n", c_array[c_index]);
            }
        }
        // ব্যস হয়ে গেলু এক্কেবারে সো .............................. জা 
    return 0;
}
