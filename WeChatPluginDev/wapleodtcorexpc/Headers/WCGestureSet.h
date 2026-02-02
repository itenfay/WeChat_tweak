//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, WCGestureVector;

@interface WCGestureSet
{
    _Bool _isStandardized;
    WCGestureVector *_vector;
    NSMutableArray *_pointArray;
}

+ (id)gestureSet;
+ (id)gestureSetWithPoints:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pointArray; // @synthesize pointArray=_pointArray;
@property(retain, nonatomic) WCGestureVector *vector; // @synthesize vector=_vector;
@property(readonly, nonatomic) _Bool isStandardized; // @synthesize isStandardized=_isStandardized;
- (id)getVector;
- (id)getPoints;
- (void)setPoint:(id)arg1 atIndex:(long long)arg2;
- (id)pointAtIndex:(long long)arg1;
- (long long)countPoints;
- (void)removeAllGesturePoints;
- (void)addGesturePoint:(id)arg1;
- (id)init;

@end

