//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface POPAnimation : NSObject
{
    struct _POPAnimationState *_state;
    void *_solver;
    id _currentValue;
    NSArray *_progressMarkers;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *progressMarkers; // @synthesize progressMarkers=_progressMarkers;
@property(readonly, copy, nonatomic) id currentValue; // @synthesize currentValue=_currentValue;
@property(nonatomic) void *solver; // @synthesize solver=_solver;
- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;
- (_Bool)_advance:(id)arg1 currentTime:(double)arg2 elapsedTime:(double)arg3;
- (id)debugDescription;
- (id)description;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
@property(nonatomic) _Bool repeatForever;
@property(nonatomic) _Bool removedOnCompletion;
@property(nonatomic) double beginTime;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) CDUnknownBlockType animationDidApplyBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock;
@property(copy, nonatomic) CDUnknownBlockType animationDidReachToValueBlock;
@property(copy, nonatomic) CDUnknownBlockType animationDidStartBlock;
@property(readonly, nonatomic) int type;
@property(nonatomic) _Bool autoreverses;
@property(nonatomic) long long repeatCount;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(nonatomic) __weak id delegate;
- (void)dealloc;
- (void)_initState;
- (id)_init;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

