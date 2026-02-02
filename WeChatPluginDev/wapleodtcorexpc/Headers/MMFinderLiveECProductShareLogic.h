//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, MMFinderLiveProductShareTask, NSString, WCLiveProductShareScrollActionSheet;

@interface MMFinderLiveECProductShareLogic
{
    WCLiveProductShareScrollActionSheet *_shareActionSheet;
    MMFinderLiveProductShareTask *_task;
    ForwardMessageLogicController *_forwardLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) MMFinderLiveProductShareTask *task; // @synthesize task=_task;
@property(retain, nonatomic) WCLiveProductShareScrollActionSheet *shareActionSheet; // @synthesize shareActionSheet=_shareActionSheet;
- (void)onShareButtonTapped;
- (void)realSendToShare:(id)arg1;
- (void)shareToChat:(id)arg1;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)buildProductShareItemWithProduct:(unsigned long long)arg1 withLive:(id)arg2 promoterKey:(id)arg3 lastGMsgID:(id)arg4 ecSource:(id)arg5 scene:(int)arg6 completion:(CDUnknownBlockType)arg7;
- (id)finderDataItemTryCurrentLiveWithAnchor:(id)arg1;
- (void)shareProductLoadProductWithShareTask:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (_Bool)OnForwardMessageNeedCancelConfirm:(id)arg1;
- (id)buildMessageWrapWithItem:(id)arg1;
- (void)directShareItem:(id)arg1 toContact:(id)arg2;
- (void)shareItem:(id)arg1 toContact:(id)arg2;
- (void)shareActionSheeterWithShareTask:(id)arg1;
- (void)shareProductShowWithShareTask:(id)arg1;
- (void)onLiveECShareWithShareTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

