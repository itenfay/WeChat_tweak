//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIButton, WCRedesignButtonItem;
@protocol WCAccountVoiceVerifyViewControllerDelegate;

@interface WCAccountVoiceVerifyViewController
{
    id <WCAccountVoiceVerifyViewControllerDelegate> _delegate;
    NSString *_code;
    MMUILabel *_titleLabel;
    MMUILabel *_contentLabel;
    WCRedesignButtonItem *_changeLanguageButtonItem;
    UIButton *_voiceButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *voiceButton; // @synthesize voiceButton=_voiceButton;
@property(retain, nonatomic) WCRedesignButtonItem *changeLanguageButtonItem; // @synthesize changeLanguageButtonItem=_changeLanguageButtonItem;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) __weak id <WCAccountVoiceVerifyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSelectLanguage:(id)arg1 Code:(id)arg2;
- (void)onTapVoiceButton;
- (void)onTapChangeLanguageButton;
- (void)initView;
- (void)initData;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
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

