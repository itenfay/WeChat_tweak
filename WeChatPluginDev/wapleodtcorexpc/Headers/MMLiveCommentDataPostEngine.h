//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId, NSMutableDictionary, NSString;

@interface MMLiveCommentDataPostEngine : NSObject
{
    MMLiveTaskId *_taskId;
    NSMutableDictionary *_postQueueDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *postQueueDict; // @synthesize postQueueDict=_postQueueDict;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)handleOnPostLiveMessageResult:(id)arg1 taskId:(id)arg2 postTaskID:(unsigned long long)arg3 boxType:(unsigned int)arg4;
- (_Bool)applyPostLiveMessageWithPostTask:(id)arg1;
- (id)getPostQueueWithBoxType:(unsigned int)arg1;
- (id)tryExtractPostingTaskWithPostTaskID:(unsigned long long)arg1 boxType:(unsigned int)arg2;
- (void)postNextTaskForBox:(unsigned int)arg1;
- (void)postLiveCommentWithContent:(id)arg1 localSeq:(double)arg2 clientMsgId:(id)arg3 taskId:(id)arg4 msgType:(unsigned int)arg5 nickName:(id)arg6 externInfo:(id)arg7;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

