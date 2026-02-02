//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMScrollView, MMUIButton, MMUIImageView, MMUILabel, MMUIView, NSString, UIButton;
@protocol IntelligentMsgImgStartUsingViewControllerDelegate;

@interface IntelligentMsgImgStartUsingViewController
{
    UIButton *m_makeSureButton;
    UIButton *m_makeRejectButton;
    MMUIButton *m_backgroundButton;
    MMScrollView *m_contentView;
    MMUILabel *m_titleView;
    MMUILabel *m_descContentView;
    MMUIImageView *m_imageView;
    MMUIView *m_operateView;
    MMUIButton *m_protectButton;
    MMUIButton *m_explainButton;
    MMUIView *m_operateViewIntervalView;
    double m_contentViewTop;
    _Bool _m_isDarkMode;
    id <IntelligentMsgImgStartUsingViewControllerDelegate> _m_delegate;
    NSString *_m_sessionId;
    NSString *_m_nsChatName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_isDarkMode; // @synthesize m_isDarkMode=_m_isDarkMode;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName=_m_nsChatName;
@property(retain, nonatomic) NSString *m_sessionId; // @synthesize m_sessionId=_m_sessionId;
@property(nonatomic) __weak id <IntelligentMsgImgStartUsingViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)traitCollectionDidChange:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)OnIntelligentMsgImgCloseButtionClick;
- (void)onClickClose:(id)arg1;
- (void)showImgTipViewController;
- (void)OnExplainButtionClick;
- (void)OnProtectButtionClick;
- (void)OnMakeSureButtionClick;
- (void)OnMakeRejectButtionClick;
- (id)genOperateViewButton:(id)arg1;
- (void)layoutOperateView;
- (void)layoutMakeSureButton;
- (void)layoutMakeRejectButton;
- (void)layoutImageView;
- (void)layoutDescContentView;
- (void)layoutTitleView;
- (void)layoutContentView;
- (void)layoutView;
- (long long)overrideUserInterfaceStyle;
- (void)initData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

