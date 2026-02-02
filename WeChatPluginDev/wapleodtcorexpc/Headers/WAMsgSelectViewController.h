//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, MsgFastBrowseView, MsgImgFullScreenWindow, MsgNewImgDataLogic, NSMutableDictionary, NSMutableSet, NSString, UIButton, UILabel, UIView, ViewAppMsgController, WAAlertDialog;
@protocol WAMsgSelectViewControllerDelegate;

@interface WAMsgSelectViewController
{
    id <WAMsgSelectViewControllerDelegate> m_delegate;
    MsgFastBrowseView *m_msgFastBrowseView;
    MsgImgFullScreenWindow *m_imgFullScreenWnd;
    MsgNewImgDataLogic *m_newDataLogic;
    _Bool m_bHasLoadData;
    ViewAppMsgController *m_viewAppMsgController;
    NSMutableSet *m_arrMsgExpired;
    NSMutableDictionary *m_dicMsgSelectInfo;
    WAAlertDialog *m_alertDlg;
    _Bool m_bSelectEnableFilter;
    _Bool m_bHighlightCurrentImage;
    unsigned long long m_nSelectLimitCount;
    CMessageWrap *m_curMsgWrap;
    NSString *m_nsChatName;
    double m_scrollOffset;
    unsigned long long m_eFilterType;
    UIView *m_filterFooterView;
    UIButton *m_okButton;
    UIButton *m_filterButton;
    UILabel *m_filterLabel;
    UIButton *m_originImageCheck;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *m_originImageCheck; // @synthesize m_originImageCheck;
@property(retain, nonatomic) UILabel *m_filterLabel; // @synthesize m_filterLabel;
@property(retain, nonatomic) UIButton *m_filterButton; // @synthesize m_filterButton;
@property(retain, nonatomic) UIButton *m_okButton; // @synthesize m_okButton;
@property(retain, nonatomic) UIView *m_filterFooterView; // @synthesize m_filterFooterView;
@property(nonatomic) unsigned long long m_eFilterType; // @synthesize m_eFilterType;
@property(nonatomic) _Bool m_bHighlightCurrentImage; // @synthesize m_bHighlightCurrentImage;
@property(nonatomic) double m_scrollOffset; // @synthesize m_scrollOffset;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property(retain, nonatomic) CMessageWrap *m_curMsgWrap; // @synthesize m_curMsgWrap;
@property(nonatomic) __weak id <WAMsgSelectViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) unsigned long long m_nSelectLimitCount; // @synthesize m_nSelectLimitCount;
@property(nonatomic) _Bool m_bSelectEnableFilter; // @synthesize m_bSelectEnableFilter;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadPart:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3;
- (void)onDownloadSuccess:(id)arg1;
- (void)previewImage:(id)arg1 originFrame:(struct CGRect)arg2;
- (void)msgFastBrowseView:(id)arg1 didChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (_Bool)msgFastBrowseView:(id)arg1 willChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (void)onSquareImgCreated:(id)arg1 withInfo:(id)arg2;
- (unsigned long long)calcSelectedCount;
- (void)updateSquareImg:(id)arg1 downloadInfo:(id)arg2;
- (id)expiredMsgForMsgFastBrowseView:(id)arg1;
- (void)onMsgFastBrowseViewGetMoreMsg:(id)arg1 Last:(_Bool)arg2 Next:(_Bool)arg3;
- (id)messageWrapsForMsgFastBrowseView:(id)arg1;
- (id)getMsgFrom:(id)arg1;
- (void)onMsgNewImgDataLogicLoadOKWithLast:(id)arg1 Next:(id)arg2;
- (_Bool)onMsgNewImgLogicDataMatch:(id)arg1;
- (_Bool)messageWrapMatchVideo:(id)arg1;
- (_Bool)messageWrapMatchFile:(id)arg1;
- (_Bool)messageWrapMatchImage:(id)arg1;
- (_Bool)onMsgImgDataMatch:(id)arg1;
- (_Bool)shouldHideForwardToFinderBtn:(id)arg1;
- (void)onMsgImgPreviewDataRequired:(id)arg1;
- (void)onMsgImgWindowWillHideToMsg:(id)arg1 extraInfo:(id)arg2;
- (void)onImgMsgLocate:(id)arg1 vc:(id)arg2;
- (void)onSightViewDetail:(id)arg1 vc:(id)arg2;
- (void)onPlayAttachVideo:(id)arg1 vc:(id)arg2;
- (void)onJumpToViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onConfirm;
- (void)onCancel;
- (_Bool)tryStartDownloadMsg:(id)arg1 hd:(_Bool)arg2;
- (void)onTimeShowProgress:(id)arg1;
- (void)onClickReturn;
- (void)onClickCancel;
- (void)stopAllDownloading;
- (void)onClickFilterFile;
- (void)onClickFilterVideo;
- (void)onClickFilterImage;
- (void)onClickFilterAll;
- (void)changeFilterTypeTo:(unsigned long long)arg1;
- (void)onClickFilter;
- (void)onClickOriginImage;
- (void)onClickDownloadingAlertOk;
- (void)onClickDownloadingAlertCancel;
- (void)onClickOk;
- (id)getViewController;
- (void)viewDidTransitionToNewSize;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateFilterFooterView;
- (void)initView;
- (void)initNavBar;
- (void)initData;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithMsgWrap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

