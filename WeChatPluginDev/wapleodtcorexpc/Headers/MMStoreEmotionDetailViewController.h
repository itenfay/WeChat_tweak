//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmojiInfo, EmoticonStoreDetailCoverImageView, EmoticonStoreDetailRewardEntranceView, EmoticonStoreGridView, EmoticonStoreItem, EmoticonStoreReportInfo, EmotionLinkInfo, EmotionRewardResponseInfo, EmotionStoreDetailDesignerContainerView, MMBorderView, MMEmoticonStoreDownloadLogic, MMUIScrollView, MMWebImageView, NSString, RichTextView, StoreEmotionPageShareLogic, UIButton, UIImageView, UILabel, UIView, WCDataItem;

@interface MMStoreEmotionDetailViewController
{
    long long _type;
    long long m_downloadExtrance;
    EmojiInfo *m_currentEmoji;
    _Bool _needScrollToBottom;
    _Bool _fastManagement;
    _Bool _m_isGettingRewardInfo;
    _Bool _hasUninstallAction;
    _Bool _hasInstallAction;
    _Bool _needUpdateForLink;
    unsigned int m_clickFlag;
    EmoticonStoreItem *m_storeItem;
    MMUIScrollView *m_tableView;
    EmoticonStoreDetailCoverImageView *m_coverImageView;
    UILabel *m_nameLabel;
    UILabel *m_copyrightLabel;
    UIButton *m_statementButton;
    EmoticonStoreGridView *m_thumbGridView;
    UIView *m_previewTipsLabel;
    UILabel *m_descLabel;
    UIImageView *m_animationView;
    MMBorderView *m_animationBorderView;
    UIView *m_packDescContainView;
    NSString *m_clickRegionDesc;
    UILabel *m_serverDescLabel;
    unsigned long long m_scence;
    WCDataItem *_m_dataItem;
    EmoticonStoreReportInfo *_reportInfo;
    CDUnknownBlockType _finishInstallBlock;
    CDUnknownBlockType _finishUninstallBlock;
    MMEmoticonStoreDownloadLogic *_downloadLogic;
    UIButton *_m_complainButton;
    UILabel *_m_animationLabel;
    EmoticonStoreDetailRewardEntranceView *_rewardView;
    EmotionRewardResponseInfo *_m_rewardInfo;
    EmotionStoreDetailDesignerContainerView *_designerContainerView;
    UIView *_statementContainerView;
    StoreEmotionPageShareLogic *_shareLogic;
    MMWebImageView *_linkIconView;
    RichTextView *_linkDetailView;
    EmotionLinkInfo *_linkInfoForReport;
}

+ (id)genProductIdFromTimelineUserData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) EmotionLinkInfo *linkInfoForReport; // @synthesize linkInfoForReport=_linkInfoForReport;
@property(nonatomic) _Bool needUpdateForLink; // @synthesize needUpdateForLink=_needUpdateForLink;
@property(retain, nonatomic) RichTextView *linkDetailView; // @synthesize linkDetailView=_linkDetailView;
@property(retain, nonatomic) MMWebImageView *linkIconView; // @synthesize linkIconView=_linkIconView;
@property(nonatomic) _Bool hasInstallAction; // @synthesize hasInstallAction=_hasInstallAction;
@property(nonatomic) _Bool hasUninstallAction; // @synthesize hasUninstallAction=_hasUninstallAction;
@property(retain, nonatomic) StoreEmotionPageShareLogic *shareLogic; // @synthesize shareLogic=_shareLogic;
@property(retain, nonatomic) UIView *statementContainerView; // @synthesize statementContainerView=_statementContainerView;
@property(retain, nonatomic) EmotionStoreDetailDesignerContainerView *designerContainerView; // @synthesize designerContainerView=_designerContainerView;
@property(nonatomic) _Bool m_isGettingRewardInfo; // @synthesize m_isGettingRewardInfo=_m_isGettingRewardInfo;
@property(retain, nonatomic) EmotionRewardResponseInfo *m_rewardInfo; // @synthesize m_rewardInfo=_m_rewardInfo;
@property(retain, nonatomic) EmoticonStoreDetailRewardEntranceView *rewardView; // @synthesize rewardView=_rewardView;
@property(retain, nonatomic) UILabel *m_animationLabel; // @synthesize m_animationLabel=_m_animationLabel;
@property(retain, nonatomic) UIButton *m_complainButton; // @synthesize m_complainButton=_m_complainButton;
@property(retain, nonatomic) MMEmoticonStoreDownloadLogic *downloadLogic; // @synthesize downloadLogic=_downloadLogic;
@property(copy, nonatomic) CDUnknownBlockType finishUninstallBlock; // @synthesize finishUninstallBlock=_finishUninstallBlock;
@property(copy, nonatomic) CDUnknownBlockType finishInstallBlock; // @synthesize finishInstallBlock=_finishInstallBlock;
@property(nonatomic) _Bool fastManagement; // @synthesize fastManagement=_fastManagement;
@property(retain, nonatomic) EmoticonStoreReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(retain, nonatomic) WCDataItem *m_dataItem; // @synthesize m_dataItem=_m_dataItem;
@property(nonatomic) _Bool needScrollToBottom; // @synthesize needScrollToBottom=_needScrollToBottom;
@property(nonatomic) unsigned int m_clickFlag; // @synthesize m_clickFlag;
@property(nonatomic) unsigned long long m_scence; // @synthesize m_scence;
@property(retain, nonatomic) UILabel *m_serverDescLabel; // @synthesize m_serverDescLabel;
@property(retain, nonatomic) NSString *m_clickRegionDesc; // @synthesize m_clickRegionDesc;
@property(retain, nonatomic) UIView *m_packDescContainView; // @synthesize m_packDescContainView;
@property(retain, nonatomic) MMBorderView *m_animationBorderView; // @synthesize m_animationBorderView;
@property(retain, nonatomic) UIImageView *m_animationView; // @synthesize m_animationView;
@property(retain, nonatomic) UILabel *m_descLabel; // @synthesize m_descLabel;
@property(retain, nonatomic) UIView *m_previewTipsLabel; // @synthesize m_previewTipsLabel;
@property(retain, nonatomic) EmoticonStoreGridView *m_thumbGridView; // @synthesize m_thumbGridView;
@property(retain, nonatomic) UIButton *m_statementButton; // @synthesize m_statementButton;
@property(retain, nonatomic) UILabel *m_copyrightLabel; // @synthesize m_copyrightLabel;
@property(retain, nonatomic) UILabel *m_nameLabel; // @synthesize m_nameLabel;
@property(retain, nonatomic) EmoticonStoreDetailCoverImageView *m_coverImageView; // @synthesize m_coverImageView;
@property(retain, nonatomic) MMUIScrollView *m_tableView; // @synthesize m_tableView;
@property(retain, nonatomic) EmoticonStoreItem *m_storeItem; // @synthesize m_storeItem;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)openWeAppWithUsrName:(id)arg1 AndPath:(id)arg2;
- (void)openFinderWithUsrName:(id)arg1;
- (void)openBizWithUsrName:(id)arg1;
- (void)openH5WithURL:(id)arg1;
- (void)reportEmoticonStoreActionIfNeeded:(unsigned long long)arg1;
- (void)didSelectEmojiAtIndex:(long long)arg1;
- (void)onStoreEmotionRewardCompleteOkWithPid:(id)arg1 RewardInfo:(id)arg2;
- (void)onGetEmotionRewardFinishedWithPid:(id)arg1 RewardInfo:(id)arg2;
- (void)onShowAllDonorsButtonClick;
- (void)onRewardButtonClick;
- (void)viewDidLayoutSubviews;
- (void)onGetEmoticonDownloadFlag:(unsigned int)arg1 andButtonDesc:(id)arg2;
- (_Bool)needJudgeClickFlag;
- (_Bool)showServerDescLabel;
- (void)OnUpdateEmoticonPackageState:(id)arg1 toState:(long long)arg2;
- (id)downloadLogicReportInfo;
- (void)onTapBackBarItem;
- (void)onDownloadFinished;
- (void)onStoreDownloadLogicDisplayViewChanged;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)arg1;
- (void)onUninstall;
- (void)onDownloadCancel;
- (void)handleUse;
- (_Bool)shouldShowWeCoinLongType;
- (void)requestDeleteWithLoadingText:(id)arg1;
- (void)onLawBtnClick;
- (void)reportDownload;
- (void)onClickComplainButton;
- (void)callbackOnDismiss;
- (void)OnCancelModalView:(id)arg1;
- (struct CGPoint)makeStatementCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)makeCopyRightCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (void)clickDesignerCell;
- (struct CGPoint)updateDesignerView:(struct CGPoint)arg1;
- (struct CGPoint)makeDesignerCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (void)tryGetRewardInfo;
- (struct CGPoint)updateRewardViewWithMarginPoint:(struct CGPoint)arg1;
- (struct CGPoint)makeRewardCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)makeEmoticonsCell:(id)arg1 emojiInfos:(id)arg2 marginPoint:(struct CGPoint)arg3;
- (struct CGPoint)updateGridView:(id)arg1 withEmojiInfos:(id)arg2;
- (struct CGPoint)updateStatementMarginPoint:(struct CGPoint)arg1;
- (struct CGPoint)updateCopyRight:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)updatePreviewTipCell:(struct CGPoint)arg1;
- (struct CGPoint)makePreviewTipCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)updateDescCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)makeDescCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (void)makeBuyButton:(id)arg1 item:(id)arg2;
- (struct CGPoint)updateCoverImageView:(struct CGPoint)arg1;
- (struct CGPoint)makeCoverImageCell:(id)arg1;
- (void)makePackTypeLabel:(id)arg1 item:(id)arg2;
- (void)makeJumpLinkView:(id)arg1 item:(id)arg2;
- (void)makeServerDescLabel:(id)arg1 item:(id)arg2;
- (void)makePackNameLabel:(id)arg1 item:(id)arg2;
- (struct CGPoint)makeContainerView:(id)arg1 item:(id)arg2;
- (struct CGPoint)updateJumpLink:(struct CGPoint)arg1;
- (struct CGPoint)updateBuyButton;
- (struct CGPoint)updateServerDescLabel:(struct CGPoint)arg1;
- (void)updateTypeLabelWithNameLabelMargin:(struct CGPoint)arg1;
- (struct CGPoint)updateTypeLabel:(struct CGPoint)arg1;
- (struct CGPoint)updateNameLabel:(struct CGPoint)arg1;
- (struct CGPoint)updateContainerView:(struct CGPoint)arg1;
- (struct CGPoint)updateDescView:(struct CGPoint)arg1;
- (struct CGPoint)updatePreviewTipsView:(struct CGPoint)arg1;
- (struct CGPoint)updatePreviewGridView:(struct CGPoint)arg1;
- (struct CGPoint)makeCoverImage:(id)arg1 item:(id)arg2;
- (void)updateScrollView;
- (_Bool)recurisiveCheckMsgControllerToRootFrom:(id)arg1;
- (_Bool)checkMsgControllerFrom:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (_Bool)hasNecessaryShareInfo;
- (void)onOperate:(id)arg1;
- (void)updateReportButton;
- (void)updateRightBarButton;
- (_Bool)useTransparentNavibar;
- (_Bool)useBlackStatusbar;
- (void)initScrollView;
- (void)initView;
- (void)initData;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPid:(id)arg1 Scence:(unsigned long long)arg2 extrance:(long long)arg3;
- (id)initWithStoreItem:(id)arg1 Scence:(unsigned long long)arg2 extrance:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

