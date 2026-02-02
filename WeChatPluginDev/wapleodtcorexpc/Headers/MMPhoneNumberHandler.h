//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBaseContact, NSDictionary, NSString, UIViewController;

@interface MMPhoneNumberHandler
{
    NSString *_phoneNumber;
    UIViewController *_viewController;
    CBaseContact *m_oContact;
    NSDictionary *_userInfo;
}

+ (void)addToContact:(id)arg1;
+ (_Bool)canMakePhoneCall;
+ (void)makePhoneCall:(id)arg1;
+ (void)handlePhoneNumber:(id)arg1 contact:(id)arg2;
+ (void)handleBankCardNumber:(id)arg1;
+ (void)handleWechatProfilePhoneNumber:(id)arg1;
+ (void)handlePhoneNumber:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)CreateNewContact:(id)arg1 viewController:(id)arg2;
- (void)AddPhoneNumberToExistContact:(id)arg1 viewController:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)showNewPersonViewController;
- (void)showPeoplePickerController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleWechatOutActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleContactActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleTotalActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handlePhoneNumber:(id)arg1 contact:(id)arg2;
- (void)handleWechatProfilePhone:(id)arg1;
- (void)handleBankCardNumber:(id)arg1;
- (void)handlePhoneNumber:(id)arg1;
- (void)showWechatProfilePhoneNumberActionSheet;
- (void)showTotalActionSheet:(id)arg1;
- (void)showContactActionSheet:(id)arg1;
- (id)getViewController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

