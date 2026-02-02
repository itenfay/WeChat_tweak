//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, CContactVerifyLogic, CContactVerifyPreCheckBusinessLogic, CMessageWrap, MMUIViewController, NSString, SendVerifyMsgViewController;
@protocol SendVerifyMsgViewControllerDelegate, contactVerifyLogicDelegate;

@interface SendVerifyMsgLogicController : NSObject
{
    MMUIViewController *m_parentVC;
    _Bool canOnCancel;
    CContactVerifyPreCheckBusinessLogic *m_verifyPreCheckBusinessLogic;
    SendVerifyMsgViewController *m_vc;
    CContactVerifyLogic *m_oContactVerifyLogic;
    _Bool _m_bVerifyToMe;
    _Bool _m_needAnimationPopAfterOK;
    _Bool _m_needVerifyPreCheck;
    unsigned int _m_uiOpCode;
    CContact *_m_oVerifyContact;
    id <SendVerifyMsgViewControllerDelegate> _m_delegate;
    id <contactVerifyLogicDelegate> _m_sendRequestDelegate;
    CContact *_m_oChatContact;
    CMessageWrap *_m_oSourceMsg;
    unsigned long long _m_qrCodeAddFriendScene;
    NSString *_verifyContent;
    long long _contactInfoViewSource;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_needVerifyPreCheck; // @synthesize m_needVerifyPreCheck=_m_needVerifyPreCheck;
@property(nonatomic) long long contactInfoViewSource; // @synthesize contactInfoViewSource=_contactInfoViewSource;
@property(nonatomic) unsigned int m_uiOpCode; // @synthesize m_uiOpCode=_m_uiOpCode;
@property(retain, nonatomic) NSString *verifyContent; // @synthesize verifyContent=_verifyContent;
@property(nonatomic) _Bool m_needAnimationPopAfterOK; // @synthesize m_needAnimationPopAfterOK=_m_needAnimationPopAfterOK;
@property(nonatomic) unsigned long long m_qrCodeAddFriendScene; // @synthesize m_qrCodeAddFriendScene=_m_qrCodeAddFriendScene;
@property(retain, nonatomic) CMessageWrap *m_oSourceMsg; // @synthesize m_oSourceMsg=_m_oSourceMsg;
@property(retain, nonatomic) CContact *m_oChatContact; // @synthesize m_oChatContact=_m_oChatContact;
@property(nonatomic) _Bool m_bVerifyToMe; // @synthesize m_bVerifyToMe=_m_bVerifyToMe;
@property(nonatomic) __weak id <contactVerifyLogicDelegate> m_sendRequestDelegate; // @synthesize m_sendRequestDelegate=_m_sendRequestDelegate;
@property(nonatomic) __weak id <SendVerifyMsgViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) CContact *m_oVerifyContact; // @synthesize m_oVerifyContact=_m_oVerifyContact;
- (id)getViewController;
- (id)getVerifyPreCheckBusinessLogic;
- (void)onContactVerifyPreCheckBusinessSuccess:(id)arg1 opcode:(unsigned int)arg2;
- (void)disableUserPop;
- (void)contactAddContactOk:(id)arg1;
- (void)contactSendRequestOk:(id)arg1;
- (void)onContactVerifyFail;
- (void)onContactVerifyLimitFail:(id)arg1;
- (void)onDismiss;
- (void)onCancel;
- (void)doStartLogic;
- (void)startLogic;
- (id)initWithParentVC:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

