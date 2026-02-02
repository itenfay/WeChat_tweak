//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SequenceAnimationObject : NSObject
{
    _Bool _m_isAnimating;
    unsigned long long _maxCount;
    NSMutableArray *_m_animations;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_animations; // @synthesize m_animations=_m_animations;
@property(nonatomic) _Bool m_isAnimating; // @synthesize m_isAnimating=_m_isAnimating;
@property unsigned long long maxCount; // @synthesize maxCount=_maxCount;
- (void)doNextAnimation;
- (void)checkMaxCount;
- (void)addAnimationWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)init;

@end

