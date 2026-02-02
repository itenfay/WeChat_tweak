//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ContactsDataLogic, NSString, SharePreConfirmSheetView, SharePreConfirmView, WCPayNetImageResource, WCPayRealnameAuthenResp, WCPayRealnameVerifyGuardianCgi, WCPayRealnameVerifyParentCgi;
@protocol WCPayRealnameSelectGuardianViewControllerDelegate;

@interface WCPayRealnameSelectGuardianViewController
{
    _Bool _fromLiteApp;
    WCPayRealnameAuthenResp *_authenResp;
    id <WCPayRealnameSelectGuardianViewControllerDelegate> _delegate;
    ContactsDataLogic *_contactsDataLogic;
    CContact *_selectedContact;
    SharePreConfirmView *_confirmView;
    SharePreConfirmSheetView *_confirmSheetView;
    WCPayRealnameVerifyGuardianCgi *_verifyGuardianCgi;
    WCPayNetImageResource *_imageLoader;
    WCPayRealnameVerifyParentCgi *_liteappVerifyParentCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayRealnameVerifyParentCgi *liteappVerifyParentCgi; // @synthesize liteappVerifyParentCgi=_liteappVerifyParentCgi;
@property(retain, nonatomic) WCPayNetImageResource *imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) WCPayRealnameVerifyGuardianCgi *verifyGuardianCgi; // @synthesize verifyGuardianCgi=_verifyGuardianCgi;
@property(retain, nonatomic) SharePreConfirmSheetView *confirmSheetView; // @synthesize confirmSheetView=_confirmSheetView;
@property(retain, nonatomic) SharePreConfirmView *confirmView; // @synthesize confirmView=_confirmView;
@property(retain, nonatomic) CContact *selectedContact; // @synthesize selectedContact=_selectedContact;
@property(retain, nonatomic) ContactsDataLogic *contactsDataLogic; // @synthesize contactsDataLogic=_contactsDataLogic;
@property(nonatomic) _Bool fromLiteApp; // @synthesize fromLiteApp=_fromLiteApp;
@property(nonatomic) __weak id <WCPayRealnameSelectGuardianViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCPayRealnameAuthenResp *authenResp; // @synthesize authenResp=_authenResp;
- (void)handleError:(id)arg1;
- (void)sendTextMessage:(id)arg1;
- (void)sendLiteAppMessage:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)sendAppMessage:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)onWCPayRealnameVerifyParentCgiResp:(id)arg1;
- (void)onWCPayRealnameVerifyGuardianCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayRealnameVerifyGuardianCgiResp:(id)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)sendVerifyParentRequest:(id)arg1;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)onSelectedOrCancelContact:(id)arg1 isSelected:(_Bool)arg2;
- (id)getChatroomContact;
- (id)getReloadContactDataList;
- (void)onClickCancel;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

