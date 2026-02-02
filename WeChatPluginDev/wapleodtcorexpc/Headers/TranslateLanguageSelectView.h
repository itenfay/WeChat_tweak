//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView;
@protocol TranslateLanguageSelectViewDelegate;

@interface TranslateLanguageSelectView
{
    _Bool _bShowCloseBtn;
    id <TranslateLanguageSelectViewDelegate> _delegate;
    NSString *_selectedLanguageType;
    UIView *_selectedPanelView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bShowCloseBtn; // @synthesize bShowCloseBtn=_bShowCloseBtn;
@property(retain, nonatomic) UIView *selectedPanelView; // @synthesize selectedPanelView=_selectedPanelView;
@property(retain, nonatomic) NSString *selectedLanguageType; // @synthesize selectedLanguageType=_selectedLanguageType;
@property(nonatomic) __weak id <TranslateLanguageSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)onTapSelectLanguageButton:(id)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (id)getChatName;
- (void)setChatName:(id)arg1;
- (void)configSelectedPanelView;
- (void)configPageSheet;
- (id)initWithFrame:(struct CGRect)arg1 bShowCloseBtn:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

