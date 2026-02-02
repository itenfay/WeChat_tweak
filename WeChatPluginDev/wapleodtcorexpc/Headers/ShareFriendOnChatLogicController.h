//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, CMessageWrap, ForwardMessageLogicController, NSString, SelectContactsViewController;
@protocol ShareFriendOnChatDelegate;

@interface ShareFriendOnChatLogicController
{
    id <ShareFriendOnChatDelegate> m_delegate;
    CContact *m_contactToShare;
    CContact *m_contactShareToWho;
    SelectContactsViewController *m_selectContactViewController;
    _Bool m_bIsShareToChatRoom;
    ForwardMessageLogicController *m_forwardMsgLogic;
    CMessageWrap *m_msg;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bIsShareToChatRoom; // @synthesize m_bIsShareToChatRoom;
@property(retain, nonatomic) CContact *m_contactShareToWho; // @synthesize m_contactShareToWho;
@property(retain, nonatomic) CContact *m_contactToShare; // @synthesize m_contactToShare;
@property(retain, nonatomic) SelectContactsViewController *selectContactViewController; // @synthesize selectContactViewController=m_selectContactViewController;
- (_Bool)onFilterSendReceiver:(id)arg1;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)reset;
- (void)start;
- (void)onDismiss:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (id)contactShareMsgFromUser:(id)arg1 toUser:(id)arg2 sharedContact:(id)arg3;
- (void)showConfirmShareView;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

