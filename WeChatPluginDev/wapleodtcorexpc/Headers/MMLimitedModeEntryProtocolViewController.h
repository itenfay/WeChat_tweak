//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, MMUIView, NSString, RichTextView, UIButton;
@protocol MMLimitedModeEntryProtocolViewControllerDelegate;

@interface MMLimitedModeEntryProtocolViewController
{
    MMUIView *m_contentView;
    MMUILabel *m_titleView;
    RichTextView *m_descContentView;
    UIButton *m_agreeButton;
    UIButton *m_disagreeButton;
    MMUIButton *_closeButton;
    long long _scene;
    id <MMLimitedModeEntryProtocolViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLimitedModeEntryProtocolViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (void)setCloseButton:(id)arg1;
- (id)closeButton;
- (long long)preferredStatusBarStyle;
- (id)navigationBarBackgroundColor;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickDisagreeButton:(id)arg1;
- (void)onClickAgreeButton:(id)arg1;
- (void)layoutAgreeButton;
- (void)layoutDisagreeButton;
- (void)layoutDescContentView;
- (void)layoutTitleView;
- (void)layoutContentView;
- (void)layoutView;
- (void)viewDidTransitionToNewSize;
- (void)initData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

