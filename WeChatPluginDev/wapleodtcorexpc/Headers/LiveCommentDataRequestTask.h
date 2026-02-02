//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId;

@interface LiveCommentDataRequestTask : NSObject
{
    _Bool _isStartGetLiveComment;
    _Bool _isLongPulling;
    MMLiveTaskId *_taskId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLongPulling; // @synthesize isLongPulling=_isLongPulling;
@property(nonatomic) _Bool isStartGetLiveComment; // @synthesize isStartGetLiveComment=_isStartGetLiveComment;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;

@end

