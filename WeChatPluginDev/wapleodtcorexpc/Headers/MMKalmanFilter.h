//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMKalmanFilter : NSObject
{
    shared_ptr_8d48a68a F;
    shared_ptr_8d48a68a FTransposed;
    shared_ptr_8d48a68a H;
    shared_ptr_8d48a68a HTransposed;
    shared_ptr_8d48a68a B;
    shared_ptr_8d48a68a Q;
    shared_ptr_8d48a68a R;
    shared_ptr_8d48a68a PInit;
    shared_ptr_8d48a68a xInit;
    shared_ptr_8d48a68a x;
    shared_ptr_8d48a68a P;
}

+ (void)printMat:(struct Mat)arg1;
+ (shared_ptr_8d48a68a)genCVMatWithMatArray:(id)arg1;
+ (shared_ptr_8d48a68a)getTranspose:(shared_ptr_8d48a68a)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_8d48a68a)filterWithMeasurement:(shared_ptr_8d48a68a)arg1;
- (void)resetData;
- (id)initWithF:(shared_ptr_8d48a68a)arg1 H:(shared_ptr_8d48a68a)arg2 B:(shared_ptr_8d48a68a)arg3 Q:(shared_ptr_8d48a68a)arg4 R:(shared_ptr_8d48a68a)arg5 PInit:(shared_ptr_8d48a68a)arg6 XInit:(shared_ptr_8d48a68a)arg7;

@end

