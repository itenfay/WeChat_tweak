//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveFlowActionInvocationContext, MMLiveFlowInvocationContext;

@interface MMLiveFlowConcurrencyControlActionTask : NSObject
{
    id _input;
    MMLiveFlowInvocationContext *_flowInvocationContext;
    MMLiveFlowActionInvocationContext *_actionInvocationContext;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) MMLiveFlowActionInvocationContext *actionInvocationContext; // @synthesize actionInvocationContext=_actionInvocationContext;
@property(retain, nonatomic) MMLiveFlowInvocationContext *flowInvocationContext; // @synthesize flowInvocationContext=_flowInvocationContext;
@property(retain, nonatomic) id input; // @synthesize input=_input;

@end

