//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_group;

@interface MMLiveGiftResourceEnsuranceTask : NSObject
{
    NSObject<OS_dispatch_group> *_workItemGroup;
    NSString *_correlationId;
    NSMutableDictionary *_invocationCounters;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *invocationCounters; // @synthesize invocationCounters=_invocationCounters;
@property(retain, nonatomic) NSString *correlationId; // @synthesize correlationId=_correlationId;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *workItemGroup; // @synthesize workItemGroup=_workItemGroup;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (void)invokeResourceDownloadWorkItem:(id)arg1;
- (id)initWithCorrelationId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

