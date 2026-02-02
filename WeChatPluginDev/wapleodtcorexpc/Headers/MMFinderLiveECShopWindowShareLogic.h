//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, MMFinderLiveECShopWindowShareTask, NSString, WCLiveProductShareScrollActionSheet;

@interface MMFinderLiveECShopWindowShareLogic
{
    WCLiveProductShareScrollActionSheet *_shareActionSheet;
    MMFinderLiveECShopWindowShareTask *_task;
    ForwardMessageLogicController *_forwardLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) MMFinderLiveECShopWindowShareTask *task; // @synthesize task=_task;
@property(retain, nonatomic) WCLiveProductShareScrollActionSheet *shareActionSheet; // @synthesize shareActionSheet=_shareActionSheet;
- (void)realSendToShare:(id)arg1;
- (void)shareToChat:(id)arg1;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)loadShareItemWithShareTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)OnForwardMessageNeedCancelConfirm:(id)arg1;
- (void)shareItemWithInstaller:(CDUnknownBlockType)arg1 contact:(id)arg2;
- (void)shareItem:(id)arg1 WithContact:(id)arg2;
- (void)onShareButtonTapped;
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

