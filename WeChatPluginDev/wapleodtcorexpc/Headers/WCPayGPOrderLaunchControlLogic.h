//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSMutableArray, NSString, WCPayGPLaunchControlLogic;
@protocol WCPayGPOrderLaunchControlLogicDelegate;

@interface WCPayGPOrderLaunchControlLogic
{
    _Bool _bHasSelectMemberFinish;
    id <WCPayGPOrderLaunchControlLogicDelegate> _orderLaunchDelegate;
    WCPayGPLaunchControlLogic *_launchLogic;
    NSMutableArray *_recentGroupPayContactList;
    CContact *_currentContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *currentContact; // @synthesize currentContact=_currentContact;
@property(retain, nonatomic) NSMutableArray *recentGroupPayContactList; // @synthesize recentGroupPayContactList=_recentGroupPayContactList;
@property(nonatomic) _Bool bHasSelectMemberFinish; // @synthesize bHasSelectMemberFinish=_bHasSelectMemberFinish;
@property(retain, nonatomic) WCPayGPLaunchControlLogic *launchLogic; // @synthesize launchLogic=_launchLogic;
@property(nonatomic) __weak id <WCPayGPOrderLaunchControlLogicDelegate> orderLaunchDelegate; // @synthesize orderLaunchDelegate=_orderLaunchDelegate;
- (void)onLaunchControlLogicStop;
- (void)contactInBizChatDidSelect:(id)arg1;
- (id)contactInBizChatSessionAtRow:(unsigned long long)arg1;
- (long long)numberOfRowInBizChatSession;
- (id)sectionTitleForBizChatSession;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)stopLogic;
- (void)startLogic;
- (void)setGroupPayOrderLaunchDelegate:(id)arg1;
- (void)setupData;
- (id)initWithData:(id)arg1 orderContact:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

