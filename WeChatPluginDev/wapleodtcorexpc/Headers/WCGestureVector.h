//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WCGestureVector
{
    NSMutableArray *_doubleValueArray;
}

+ (id)vector;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *doubleValueArray; // @synthesize doubleValueArray=_doubleValueArray;
- (void)setDouble:(double)arg1 atIndex:(long long)arg2;
- (double)doubleAtIndex:(long long)arg1;
- (void)addDouble:(double)arg1;
- (long long)getGSVectorSize;
- (void)clear;

@end

