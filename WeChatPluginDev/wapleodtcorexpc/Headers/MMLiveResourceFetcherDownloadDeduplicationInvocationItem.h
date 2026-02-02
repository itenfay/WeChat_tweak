//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveFlowActionInvocationContext, MMLiveFlowInvocationContext, MMLiveResourceFetcherTask;

@interface MMLiveResourceFetcherDownloadDeduplicationInvocationItem : NSObject
{
    MMLiveResourceFetcherTask *_task;
    MMLiveFlowInvocationContext *_flowInvocationContext;
    MMLiveFlowActionInvocationContext *_actionInvocationContext;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) MMLiveFlowActionInvocationContext *actionInvocationContext; // @synthesize actionInvocationContext=_actionInvocationContext;
@property(retain, nonatomic) MMLiveFlowInvocationContext *flowInvocationContext; // @synthesize flowInvocationContext=_flowInvocationContext;
@property(retain, nonatomic) MMLiveResourceFetcherTask *task; // @synthesize task=_task;

@end

