//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppFileCircleProgressView, AppFileMessageViewModel, MMLoadingIndicatorView, NSString, UIImageView, UILabel;

@interface AppFileMessageCellView
{
    int m_uiStatus;
    UILabel *m_titleLabel;
    UILabel *m_detailLabel;
    UILabel *m_stateLabel;
    UIImageView *m_thumbImageView;
    UIImageView *m_thumbEmptyImageView;
    UIImageView *m_blankMaskImageView;
    AppFileCircleProgressView *m_fileProgressView;
    MMLoadingIndicatorView *m_loadingView;
}

- (void).cxx_destruct;
- (void)onCheckMsgStatus;
- (void)onTouchUpInside;
- (void)appFileProgressViewPauseButtonClick;
- (_Bool)appFileProgressViewPlayButtonClick;
- (_Bool)canContinueUpload;
- (void)onContinueUpload:(id)arg1;
- (void)onForward:(id)arg1;
- (id)operationMenuItems;
- (_Bool)canShowFavoriteMenu;
- (_Bool)canShowForwardMenu;
- (void)onSendFailButtonClicked:(id)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (void)StopIndicatorView;
- (void)ShowIndicatorView;
- (void)initBlankMaskImageView;
- (void)initThumbEmptyImageView;
- (void)initThumbImageView;
- (void)updateStateLabel:(id)arg1;
- (void)initStateLabel;
- (void)initDetailLabel;
- (void)initTitleLabel;
- (void)updateStatus;
- (id)displayViewForImageBrowser;
- (void)onAppear;
- (void)layoutContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) AppFileMessageViewModel *viewModel; // @dynamic viewModel;

@end

