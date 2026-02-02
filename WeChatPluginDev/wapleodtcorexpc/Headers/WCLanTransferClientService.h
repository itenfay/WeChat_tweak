//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSObject, NSString, WCLanTransferSSCQueue;
@protocol OS_dispatch_queue;

@interface WCLanTransferClientService
{
    WCLanTransferSSCQueue *_sscQueue;
    NSObject<OS_dispatch_queue> *_lanTransferClientQueue;
    NSMutableDictionary *_clientTaskInfo;
}

+ (_Bool)canMsgWrapUseLanTransfer:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *clientTaskInfo; // @synthesize clientTaskInfo=_clientTaskInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lanTransferClientQueue; // @synthesize lanTransferClientQueue=_lanTransferClientQueue;
@property(retain, nonatomic) WCLanTransferSSCQueue *sscQueue; // @synthesize sscQueue=_sscQueue;
- (void)onLanTransferSSC:(id)arg1 downloadSuccess:(_Bool)arg2;
- (void)stopMessageWrap:(id)arg1;
- (void)addMessageWrap:(id)arg1;
- (void)checkOldTaskInfo;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

