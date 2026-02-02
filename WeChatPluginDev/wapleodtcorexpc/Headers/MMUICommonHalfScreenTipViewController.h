//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCommonHalfScreenTipViewConfigParam, MMUIButton, MMUILabel, MMUIView, UIButton;
@protocol MMUICommonHalfScreenTipViewControllerDelegate;

@interface MMUICommonHalfScreenTipViewController
{
    MMUIButton *m_backgroundButton;
    MMUIView *m_contentView;
    MMUILabel *m_titleView;
    MMUILabel *m_descContentView;
    UIButton *m_operateButton;
    UIButton *m_cancelButton;
    MMUIView *m_descContentSegmenView;
    MMCommonHalfScreenTipViewConfigParam *m_viewConfigParam;
    _Bool _m_isDarkMode;
    unsigned int _m_viewConfigFlag;
    MMUIButton *_closeButton;
    id <MMUICommonHalfScreenTipViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_viewConfigFlag; // @synthesize m_viewConfigFlag=_m_viewConfigFlag;
@property(nonatomic) _Bool m_isDarkMode; // @synthesize m_isDarkMode=_m_isDarkMode;
@property(nonatomic) __weak id <MMUICommonHalfScreenTipViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)setCloseButton:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)onClickCancelButtonButton:(id)arg1;
- (void)onClickOperateButton:(id)arg1;
- (void)onClickClose:(id)arg1;
- (double)getCommonHalfScreenTipViewHeight;
- (double)getOperateButtonBottom;
- (double)getDescContentViewBottom;
- (double)getDescContentViewTop;
- (double)getTitleViewTop;
- (void)appendDescContentSegmenView:(id)arg1 contentSegmenView:(id)arg2 isLastSegmen:(_Bool)arg3;
- (void)layoutCancelButton;
- (void)layoutOperateButton;
- (void)layoutDescContentSegmenView;
- (void)layoutDescContentView;
- (void)layoutTitleView;
- (void)layoutContentView;
- (void)layoutView;
- (id)closeButton;
- (long long)overrideUserInterfaceStyle;
- (void)dealloc;
- (void)initData;
- (id)getViewConfigParam;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewConfigParam:(id)arg1;

@end

