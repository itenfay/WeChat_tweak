//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId;

@interface MMLiveStateDataInfoSession : NSObject
{
    _Bool _isPaused;
    _Bool _isFloat;
    unsigned long long _countedFloatPauseStartTs;
    MMLiveTaskId *_taskId;
    unsigned long long _floatStatePauseTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long floatStatePauseTime; // @synthesize floatStatePauseTime=_floatStatePauseTime;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) unsigned long long countedFloatPauseStartTs; // @synthesize countedFloatPauseStartTs=_countedFloatPauseStartTs;
@property(nonatomic) _Bool isFloat; // @synthesize isFloat=_isFloat;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
- (void)calculateFloatStatePauseTime;
- (void)onAction:(unsigned long long)arg1;
- (unsigned long long)floatStatePauseDuration;
- (id)initWithTaskId:(id)arg1;

@end

