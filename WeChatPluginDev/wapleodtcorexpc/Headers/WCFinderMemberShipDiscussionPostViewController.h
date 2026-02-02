//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonBoardView, ImageSelectorController, MMGrowTextView, MMUIButton, MMUILabel, NSString, RichTextView, SightDraft, UIButton, UIImageView, UILabel, UIView, WCDragableSelectorView, WCFinderDataItem, WCFinderDynamicRichTextView, WCFinderHeadImageView, WCFinderMaskButton, WCInputController, WCTableViewManager;
@protocol WCFinderMemberShipDiscussionPostViewControllerDelegate;

@interface WCFinderMemberShipDiscussionPostViewController
{
    _Bool _isAuthor;
    WCTableViewManager *_tableViewManager;
    MMGrowTextView *_textView;
    UIView *_headView;
    UIView *_mediaContainerView;
    WCDragableSelectorView *_withImageView;
    ImageSelectorController *_imageSelectorController;
    unsigned long long _type;
    SightDraft *_sightDraft;
    WCInputController *_inputController;
    UIImageView *_inputView;
    UIButton *_expressionButton;
    MMUILabel *_remainWordCountLabel;
    long long _lastRemainWordCount;
    UIView *_backgroundView;
    EmoticonBoardView *_emoticonBoardView;
    unsigned long long _pageStyle;
    WCFinderDynamicRichTextView *_titleIconView;
    MMUIButton *_cancelButton;
    WCFinderMaskButton *_postButton;
    WCFinderDataItem *_refQuestionObject;
    RichTextView *_refQuestionContentLabel;
    WCFinderHeadImageView *_refQuestionHeadImageView;
    RichTextView *_refQuestionUsernameLabel;
    WCFinderHeadImageView *_postAvatarImageView;
    UILabel *_postNickNameLabel;
    MMUIButton *_postSwitchButton;
    unsigned long long _postIdentifierType;
    NSString *_memberAQProviderUsername;
    UIImageView *_finderIconImageView;
}

+ (double)heightForRefQuestionObject:(id)arg1 pageStyle:(unsigned long long)arg2 isAuthor:(_Bool)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *finderIconImageView; // @synthesize finderIconImageView=_finderIconImageView;
@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
@property(copy, nonatomic) NSString *memberAQProviderUsername; // @synthesize memberAQProviderUsername=_memberAQProviderUsername;
@property(nonatomic) unsigned long long postIdentifierType; // @synthesize postIdentifierType=_postIdentifierType;
@property(retain, nonatomic) MMUIButton *postSwitchButton; // @synthesize postSwitchButton=_postSwitchButton;
@property(retain, nonatomic) UILabel *postNickNameLabel; // @synthesize postNickNameLabel=_postNickNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *postAvatarImageView; // @synthesize postAvatarImageView=_postAvatarImageView;
@property(retain, nonatomic) RichTextView *refQuestionUsernameLabel; // @synthesize refQuestionUsernameLabel=_refQuestionUsernameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *refQuestionHeadImageView; // @synthesize refQuestionHeadImageView=_refQuestionHeadImageView;
@property(retain, nonatomic) RichTextView *refQuestionContentLabel; // @synthesize refQuestionContentLabel=_refQuestionContentLabel;
@property(retain, nonatomic) WCFinderDataItem *refQuestionObject; // @synthesize refQuestionObject=_refQuestionObject;
@property(retain, nonatomic) WCFinderMaskButton *postButton; // @synthesize postButton=_postButton;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) WCFinderDynamicRichTextView *titleIconView; // @synthesize titleIconView=_titleIconView;
@property(nonatomic) unsigned long long pageStyle; // @synthesize pageStyle=_pageStyle;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long lastRemainWordCount; // @synthesize lastRemainWordCount=_lastRemainWordCount;
@property(retain, nonatomic) MMUILabel *remainWordCountLabel; // @synthesize remainWordCountLabel=_remainWordCountLabel;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) UIImageView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) SightDraft *sightDraft; // @synthesize sightDraft=_sightDraft;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) ImageSelectorController *imageSelectorController; // @synthesize imageSelectorController=_imageSelectorController;
@property(retain, nonatomic) WCDragableSelectorView *withImageView; // @synthesize withImageView=_withImageView;
@property(retain, nonatomic) UIView *mediaContainerView; // @synthesize mediaContainerView=_mediaContainerView;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) MMGrowTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
- (id)processWithImages:(id)arg1 postUsername:(id)arg2;
- (id)processWithSightDraft:(id)arg1 postUsername:(id)arg2;
- (_Bool)checkImageState;
- (void)afterProcessSingleImage;
- (_Bool)processImage;
- (void)imagesUpdated;
- (void)updateSelectorView;
- (_Bool)shouldJustReturnMMAsset;
- (void)ImageSelectorController:(id)arg1 didSelectSightDraft:(id)arg2;
- (void)ImageSelectorController:(id)arg1 willSelectAssetOfType:(unsigned long long)arg2;
- (void)onDragableSelectorViewHeightChanged;
- (void)onCollectionViewCellMoved:(struct CGPoint)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)touchesBegan_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewTextDidChange;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)didCommitText:(id)arg1;
- (void)performLightFeedBackIfNeededWithRemain:(long long)arg1;
- (void)updateRemainWordCountLabelWithRemain:(long long)arg1;
- (id)stringByTrimmingWhitespaceNewlineAttachment:(id)arg1;
- (void)updateContentOffset;
- (void)asyncUpdateContentOffset;
- (void)resignInput;
- (void)becomeInput;
- (void)reloadType;
- (struct CGSize)thumbnailSizeForType:(unsigned long long)arg1;
- (struct CGSize)thumbnailSize;
- (double)thumbnailSettingMargin;
- (void)reloadHeadViewSubviewsY;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)OnDone;
- (void)OnReturn;
- (void)OnClickSwitchAccount;
- (void)updatePostIdentifier;
- (id)genHeadImageView;
- (id)genRichTextView;
- (void)initEmoticonView;
- (void)initBackgroundView;
- (void)initRemainWordCountLabel;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)initInputToolView;
- (void)initInputController;
- (double)getMaxHalfScreenHeight;
- (void)reloadData;
- (void)setPostButtonEnabled:(_Bool)arg1;
- (void)addMediaView;
- (void)createSubviews;
- (void)initView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPageStyle:(unsigned long long)arg1 refQuestionObject:(id)arg2 scrollViewPaddingTop:(double)arg3 memberAQProviderUsername:(id)arg4 isAuthor:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <WCFinderMemberShipDiscussionPostViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

