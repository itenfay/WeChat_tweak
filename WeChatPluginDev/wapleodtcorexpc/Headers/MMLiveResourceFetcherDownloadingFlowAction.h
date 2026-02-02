//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveFlowActionInvocationContext, MMLiveFlowInvocationContext, MMLiveResourceFetcherTask, NSString;

@interface MMLiveResourceFetcherDownloadingFlowAction
{
    _Bool _cdnCalledBack;
    MMLiveResourceFetcherTask *_task;
    MMLiveFlowInvocationContext *_flowInvocationContext;
    MMLiveFlowActionInvocationContext *_actionInvocationContext;
    NSString *_internalTaskId;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool cdnCalledBack; // @synthesize cdnCalledBack=_cdnCalledBack;
@property(retain, nonatomic) NSString *internalTaskId; // @synthesize internalTaskId=_internalTaskId;
@property(retain, nonatomic) MMLiveFlowActionInvocationContext *actionInvocationContext; // @synthesize actionInvocationContext=_actionInvocationContext;
@property(retain, nonatomic) MMLiveFlowInvocationContext *flowInvocationContext; // @synthesize flowInvocationContext=_flowInvocationContext;
@property(retain, nonatomic) MMLiveResourceFetcherTask *task; // @synthesize task=_task;
- (void)OnCdnDownload:(id)arg1;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

