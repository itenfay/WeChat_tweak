//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface EcsGiftMessageMgr
{
    ForwardMessageLogicController *_forwardLogicController;
    NSObject<OS_dispatch_queue> *_handleMsgQueue;
    NSString *_sendGiftTicket;
    NSString *_sendGiftRecipientUsername;
    NSString *_sendGiftMsgXml;
    NSMutableArray *_giftMsgIdList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *giftMsgIdList; // @synthesize giftMsgIdList=_giftMsgIdList;
@property(copy, nonatomic) NSString *sendGiftMsgXml; // @synthesize sendGiftMsgXml=_sendGiftMsgXml;
@property(copy, nonatomic) NSString *sendGiftRecipientUsername; // @synthesize sendGiftRecipientUsername=_sendGiftRecipientUsername;
@property(copy, nonatomic) NSString *sendGiftTicket; // @synthesize sendGiftTicket=_sendGiftTicket;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handleMsgQueue; // @synthesize handleMsgQueue=_handleMsgQueue;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogicController; // @synthesize forwardLogicController=_forwardLogicController;
- (_Bool)checkValidWithSendGiftTicket:(id)arg1;
- (id)getSendGiftSessionRecipientMsgXmlByTicket:(id)arg1;
- (void)updateSendGiftSessionRecipientMsgXml:(id)arg1 ticket:(id)arg2;
- (id)getSendGiftSessionRecipientUsernameByTicket:(id)arg1;
- (void)updateSendGiftSessionRecipientUsername:(id)arg1 ticket:(id)arg2;
- (void)endSendGiftSession;
- (id)genSendGiftTicket;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (_Bool)isGiftMsgIdHandled:(id)arg1;
- (void)openEcsGiftWithParams:(id)arg1 params:(id)arg2;
- (void)openEcsGiftWithSystemMsg:(id)arg1 linkUrl:(id)arg2 fromVC:(id)arg3;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (_Bool)isEcsGiftMsgExist:(id)arg1;
- (void)sendEcsLocalGiftMsg:(id)arg1 toUserName:(id)arg2;
- (void)openEcsGift:(id)arg1 messageWrap:(id)arg2;
- (void)startEcsGiftLogic:(id)arg1 messageWrap:(id)arg2;
- (id)createFlutterInstance:(id)arg1 arguments:(id)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

