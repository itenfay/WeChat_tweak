//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSDictionary, NSString, UIButton, WCRedesignInfoItem;
@protocol WCAccountPhoneVerifyUpViewControllerDelegate;

@interface WCAccountPhoneVerifyUpViewController
{
    id <WCAccountPhoneVerifyUpViewControllerDelegate> m_delegate;
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
    WCRedesignInfoItem *_editSmsInfoItem;
    WCRedesignInfoItem *_sendToInfoItem;
    UIButton *_sendSmsButton;
    UIButton *_sentAndNextButton;
    NSDictionary *_storedTitleTextAttributes;
    long long _storedBarStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long storedBarStyle; // @synthesize storedBarStyle=_storedBarStyle;
@property(retain, nonatomic) NSDictionary *storedTitleTextAttributes; // @synthesize storedTitleTextAttributes=_storedTitleTextAttributes;
@property(retain, nonatomic) UIButton *sentAndNextButton; // @synthesize sentAndNextButton=_sentAndNextButton;
@property(retain, nonatomic) UIButton *sendSmsButton; // @synthesize sendSmsButton=_sendSmsButton;
@property(retain, nonatomic) WCRedesignInfoItem *sendToInfoItem; // @synthesize sendToInfoItem=_sendToInfoItem;
@property(retain, nonatomic) WCRedesignInfoItem *editSmsInfoItem; // @synthesize editSmsInfoItem=_editSmsInfoItem;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setDelegate:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)onSend;
- (void)recoverNavigationSetting;
- (void)saveNavigationSetting;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)initNavigationBar;
- (_Bool)useRedesignStyle;
- (_Bool)useSheetView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

