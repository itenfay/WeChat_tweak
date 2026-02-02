//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MinimizeTaskData, NSMutableArray, NSString;

@interface MinimizeTaskNewSessionInfoSmall : NSObject
{
    _Bool _isFold;
    _Bool _isPlaying;
    NSString *_smallSessionId;
    MinimizeTaskData *_taskData;
    NSMutableArray *_stateHistory;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool isFold; // @synthesize isFold=_isFold;
@property(retain, nonatomic) NSMutableArray *stateHistory; // @synthesize stateHistory=_stateHistory;
@property(retain, nonatomic) MinimizeTaskData *taskData; // @synthesize taskData=_taskData;
@property(retain, nonatomic) NSString *smallSessionId; // @synthesize smallSessionId=_smallSessionId;
- (void)recordStateChangeWithCurrentState;
- (unsigned int)currentState;
- (void)recordStateChangeWithEvent:(unsigned int)arg1 andTaskData:(id)arg2;
- (unsigned long long)calcExpandPlayTime;
- (unsigned long long)calcFoldPlayTime;
- (unsigned long long)calcStayTime;
- (id)init;

@end

