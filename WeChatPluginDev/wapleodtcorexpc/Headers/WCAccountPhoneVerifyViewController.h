//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIButton, WCRedesignButtonItem, WCRedesignVerifyCodeTextItem;
@protocol WCAccountPhoneVerifyViewControllerDelegate;

@interface WCAccountPhoneVerifyViewController
{
    id <WCAccountPhoneVerifyViewControllerDelegate> _delegate;
    MMUILabel *_titleLabel;
    WCRedesignButtonItem *_phoneNumberButtonItem;
    WCRedesignVerifyCodeTextItem *_verifyCodeTextItem;
    UIButton *_submitButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) WCRedesignVerifyCodeTextItem *verifyCodeTextItem; // @synthesize verifyCodeTextItem=_verifyCodeTextItem;
@property(retain, nonatomic) WCRedesignButtonItem *phoneNumberButtonItem; // @synthesize phoneNumberButtonItem=_phoneNumberButtonItem;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WCAccountPhoneVerifyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnHandleOpenAutoVerifySMS:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)reportTime:(id)arg1;
- (void)startTimer;
- (void)checkNext;
- (void)onTapVoiceVerifyCodeButton;
- (void)onPhoneVerifyAgain;
- (void)onPhoneVerifyBack;
- (void)onNext;
- (void)initView;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)useRedesignStyle;
- (_Bool)useSheetView;
- (_Bool)autoHandleKeyboardEvent;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

