//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSObject, NSString, WCLanTransferSSSQueue;
@protocol OS_dispatch_queue;

@interface WCLanTransferServerService
{
    WCLanTransferSSSQueue *_sssQueue;
    NSObject<OS_dispatch_queue> *_lanTransferServerQueue;
    NSMutableDictionary *_serverTaskInfo;
}

+ (_Bool)canUseLanTransfer:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *serverTaskInfo; // @synthesize serverTaskInfo=_serverTaskInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lanTransferServerQueue; // @synthesize lanTransferServerQueue=_lanTransferServerQueue;
@property(retain, nonatomic) WCLanTransferSSSQueue *sssQueue; // @synthesize sssQueue=_sssQueue;
- (void)onLanTransferSSS:(id)arg1 sendSuccess:(_Bool)arg2;
- (id)addMessageWrap:(id)arg1;
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

