//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTFeedbackPanelCoordinateParams, BTFeedbackPanelInitParams, MMUIImageView, MMUILabel, MMUIView, NSMutableArray, NSString, UIButton;
@protocol BTFeedbackPanelDelegate;

@interface BTFeedbackPanel
{
    BTFeedbackPanelInitParams *m_initParams;
    BTFeedbackPanelCoordinateParams *m_coordinateParams;
    MMUIView *m_backgroundView;
    MMUIImageView *m_indicatorView;
    MMUIView *m_pannelView;
    MMUIView *m_reasonBtnContainerView;
    MMUILabel *m_titleView;
    UIButton *m_confirmBtn;
    NSMutableArray *m_reasonBtnArr;
    NSMutableArray *m_selectedBtnArr;
    id <BTFeedbackPanelDelegate> _panelDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <BTFeedbackPanelDelegate> panelDelegate; // @synthesize panelDelegate=_panelDelegate;
- (_Bool)accessibilityPerformEscape;
- (void)hide;
- (void)show;
- (void)didClose;
- (void)onClickConfirmBtn;
- (void)onClickReasonBtn:(id)arg1;
- (void)onTapBackground;
- (void)layoutPanelView;
- (void)layoutSubviews;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (id)genReasonBtnWithReason:(id)arg1;
- (void)initReasonBtns;
- (void)addCornersToPannelView;
- (void)initView;
- (void)checkAndSetCoordinateParams:(id)arg1;
- (void)checkAndSetInitParams:(id)arg1;
- (id)initWithInitParams:(id)arg1 coordinateParams:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

