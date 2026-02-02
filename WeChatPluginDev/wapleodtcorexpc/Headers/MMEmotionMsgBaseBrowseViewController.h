//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CEmoticonWrap, EmoticonCustomAddLogicController, EmoticonMixedPreviewGridView, EmoticonStoreItem, EmoticonStoreLensDesignerView, EmoticonWeAppCellView, EmotionActivity, EmotionLink, EmotionStoreDetailDesignerContainerView, MMImageBrowseView, MMScrollActionSheet, MMStoreEmoticonPreviewCell, MMUIActivityIndicatorView, MMUIButton, MMUILabel, NSString, RelatedEmoticonActivityCell, RichTextView, UIButton, UIImageView, UIView;

@interface MMEmotionMsgBaseBrowseViewController
{
    struct LinkReportData _linkReportData;
    _Bool _isFullScreen;
    _Bool _onlyReqLinkInfo;
    _Bool _shouldUpdateDescAfterInteraction;
    long long _emotionScene;
    EmoticonStoreItem *_item;
    NSString *_sessionID;
    EmotionActivity *_activityInfo;
    MMUIButton *_emoticonLinkButton;
    UIImageView *_arrowImageView;
    RichTextView *_emoticonLinkTextView;
    EmoticonMixedPreviewGridView *_previewGridView;
    RelatedEmoticonActivityCell *_relatedEmoticonActivityCell;
    UIView *_containerView;
    MMUILabel *_descLabel;
    UIButton *_fromSourceButton;
    MMStoreEmoticonPreviewCell *_emotionCell;
    UIView *_lineView;
    EmotionStoreDetailDesignerContainerView *_designerContainerView;
    EmoticonStoreLensDesignerView *_lensDesignerView;
    EmoticonWeAppCellView *_weappView;
    CEmoticonWrap *_wrapEmoticon;
    MMUIActivityIndicatorView *_smallLoadingView;
    MMImageBrowseView *_imageView;
    EmoticonCustomAddLogicController *_emoticonAddLogicController;
    EmotionLink *_linkInfo;
    MMScrollActionSheet *_scrollActionSheet;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) MMScrollActionSheet *scrollActionSheet; // @synthesize scrollActionSheet=_scrollActionSheet;
@property(retain, nonatomic) EmotionLink *linkInfo; // @synthesize linkInfo=_linkInfo;
@property(retain, nonatomic) EmoticonCustomAddLogicController *emoticonAddLogicController; // @synthesize emoticonAddLogicController=_emoticonAddLogicController;
@property(retain, nonatomic) MMImageBrowseView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MMUIActivityIndicatorView *smallLoadingView; // @synthesize smallLoadingView=_smallLoadingView;
@property(retain, nonatomic) CEmoticonWrap *wrapEmoticon; // @synthesize wrapEmoticon=_wrapEmoticon;
@property(nonatomic) _Bool shouldUpdateDescAfterInteraction; // @synthesize shouldUpdateDescAfterInteraction=_shouldUpdateDescAfterInteraction;
@property(retain, nonatomic) EmoticonWeAppCellView *weappView; // @synthesize weappView=_weappView;
@property(retain, nonatomic) EmoticonStoreLensDesignerView *lensDesignerView; // @synthesize lensDesignerView=_lensDesignerView;
@property(retain, nonatomic) EmotionStoreDetailDesignerContainerView *designerContainerView; // @synthesize designerContainerView=_designerContainerView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) MMStoreEmoticonPreviewCell *emotionCell; // @synthesize emotionCell=_emotionCell;
@property(retain, nonatomic) UIButton *fromSourceButton; // @synthesize fromSourceButton=_fromSourceButton;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) RelatedEmoticonActivityCell *relatedEmoticonActivityCell; // @synthesize relatedEmoticonActivityCell=_relatedEmoticonActivityCell;
@property(retain, nonatomic) EmoticonMixedPreviewGridView *previewGridView; // @synthesize previewGridView=_previewGridView;
@property(retain, nonatomic) RichTextView *emoticonLinkTextView; // @synthesize emoticonLinkTextView=_emoticonLinkTextView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUIButton *emoticonLinkButton; // @synthesize emoticonLinkButton=_emoticonLinkButton;
@property(retain, nonatomic) EmotionActivity *activityInfo; // @synthesize activityInfo=_activityInfo;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) EmoticonStoreItem *item; // @synthesize item=_item;
@property(nonatomic) _Bool onlyReqLinkInfo; // @synthesize onlyReqLinkInfo=_onlyReqLinkInfo;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) long long emotionScene; // @synthesize emotionScene=_emotionScene;
- (void)onTouchEmotionLink:(id)arg1;
- (_Bool)isInChatroom;
- (void)askForLinkInfo;
- (_Bool)isValidFinderLink:(id)arg1;
- (_Bool)isFinderLink;
- (id)formatLinkInfo:(id)arg1;
- (id)getViewController;
- (id)currentBrowseEmoticon;
- (void)onTapPreviewMore;
- (long long)emoticonScene;
- (void)onImageBrowseViewDidZoom;
- (void)onSingleTapImageBrowseView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onFollowEmoticonLensId:(id)arg1;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)onGetEmoticonDescLink:(id)arg1 pid:(id)arg2;
- (void)onGetEmoticonClickFlag:(unsigned int)arg1 downloadFlag:(unsigned int)arg2 pid:(id)arg3;
- (void)onEmoticonLensRequestSuccess:(id)arg1 forLensId:(id)arg2;
- (void)layoutLink:(id)arg1;
- (void)layoutWeappViewWithActivity:(id)arg1 link:(id)arg2;
- (void)layoutActivity:(id)arg1 waitAsync:(_Bool)arg2;
- (void)layoutActivity:(id)arg1;
- (void)onGetEmotionActivityForActivityId:(id)arg1 md5:(id)arg2 linkId:(id)arg3 activity:(id)arg4 link:(id)arg5;
- (void)onDesignerInfoUpdated:(id)arg1;
- (void)onGetDesignerPreviewForDesignerId:(id)arg1 andPreviewEmotions:(id)arg2 previewEmojis:(id)arg3;
- (void)onGetDesignerForDesignerId:(id)arg1 AndDesigner:(id)arg2;
- (void)onTapWeAppCell;
- (void)showDesignerProfile:(id)arg1 isFromPreview:(_Bool)arg2;
- (void)onTapRelatedEmoticonActivityCell:(id)arg1;
- (void)onClickLensDesignerButton;
- (void)openDesignerProfile:(_Bool)arg1;
- (void)onClickEmojiDesignerButton;
- (id)msgWrapForOperation;
- (id)emoticonWrapForAdd;
- (void)onLongPressRightNavigationButton:(id)arg1;
- (void)onSwipeRightNavigationButton:(id)arg1;
- (_Bool)isMixedEmojiDisabled;
- (_Bool)isCurrentActivityDegraded;
- (_Bool)shouldGetDescFromMsgWrap;
- (_Bool)isMixedEmoji;
- (_Bool)isWeAppEmoji;
- (_Bool)shouldShowRelatedEmoticonCell;
- (_Bool)isRelatedEmoticonActivity;
- (_Bool)isValidActivity;
- (void)updateLayoutForPreview:(_Bool)arg1;
- (void)checkPreviewFor:(unsigned long long)arg1;
- (void)initPreviewGridWithConfig:(id)arg1;
- (void)reportEmoticonBrowsePageExposure;
- (void)onOperate:(id)arg1;
- (id)getChatName;
- (id)getReportFromUsr;
- (void)reportBottomCellAction:(unsigned long long)arg1;
- (void)onClickEmotionCell:(id)arg1;
- (void)initWeappButton;
- (void)initFromSourceButton;
- (void)updateEmoticonDescLabel;
- (id)getDesc;
- (void)setupEmotionCell;
- (void)setupStoreEmotionView;
- (void)updateRelatedEmoticonActivityCell;
- (void)initRelatedEmoticonActivityCell;
- (void)initLensDesignerView;
- (void)initDesignerContainerView;
- (void)setupImageView;
- (void)initImageViewWithFrame:(struct CGRect)arg1;
- (void)initRightBarButtonItem;
- (void)setFullScreen:(_Bool)arg1;
- (id)activityAndLinkExtensionKey;
- (void)viewWillBeInteractivePoped;
- (_Bool)useTransparentNavibar;
- (_Bool)useBlackStatusbar;
- (void)viewWillPresent:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (id)initWithEmoticonWrap:(id)arg1;
- (void)dealloc;
- (id)extraDataForExpose;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onFollowEmoticonCamera;
- (void)onSaveEmoticon;
- (void)handleClickActionSheetItemShareFriend:(id)arg1;
- (void)addActionSheetItem:(unsigned long long)arg1 iconImage:(id)arg2 title:(id)arg3 toArray:(id)arg4;
- (void)configRowItems;
- (void)openScrollableActionSheet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

