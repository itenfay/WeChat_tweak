//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, MMUIView, NSString;
@protocol IntelligentMsgImgTipViewControllerDelegate;

@interface IntelligentMsgImgTipViewController
{
    MMUIButton *m_backgroundButton;
    MMUIView *m_contentView;
    MMUILabel *m_titleView;
    MMUILabel *m_descContentView;
    _Bool _m_isDarkMode;
    MMUIButton *_closeButton;
    id <IntelligentMsgImgTipViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_isDarkMode; // @synthesize m_isDarkMode=_m_isDarkMode;
@property(nonatomic) __weak id <IntelligentMsgImgTipViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)setCloseButton:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)onClickClose:(id)arg1;
- (void)layoutDescContentView;
- (void)layoutTitleView;
- (void)layoutContentView;
- (void)layoutView;
- (id)closeButton;
- (long long)overrideUserInterfaceStyle;
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

