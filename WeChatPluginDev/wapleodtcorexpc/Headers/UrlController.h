//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetA8KeyLogic, MMPhoneNumberHandler, MMURLHandler, NSString;
@protocol UrlControllerDelegate;

@interface UrlController
{
    MMURLHandler *m_urlHandler;
    MMPhoneNumberHandler *m_phoneNumberHandler;
    id <UrlControllerDelegate> m_delegate;
    GetA8KeyLogic *_getA8KeyLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GetA8KeyLogic *getA8KeyLogic; // @synthesize getA8KeyLogic=_getA8KeyLogic;
@property(nonatomic) __weak id <UrlControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)dealloc;
- (void)CreateNewContact:(id)arg1;
- (void)AddPhoneNumberToExistContact:(id)arg1;
- (_Bool)handleOpenIMKefuUrl:(id)arg1;
- (id)handlePreviewUrl:(id)arg1 withExtraInfo:(id)arg2;
- (void)handleUrl:(id)arg1 withExtraInfo:(id)arg2;
- (void)onDone:(id)arg1;
- (void)jumpToProfile:(id)arg1;
- (void)jumpToBindPhone;
- (void)contactsReturn:(_Bool)arg1 contact:(id)arg2;
- (void)webViewReturn:(id)arg1;
- (void)Reset;
- (void)UnRegister;
- (void)Register;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

