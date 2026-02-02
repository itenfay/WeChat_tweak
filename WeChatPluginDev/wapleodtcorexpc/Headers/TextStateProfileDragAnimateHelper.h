//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMTimer, MMUIButton, MultipleTextStateCardView, NSHashTable, NSString, TextStateFullScreenCardContentView, TextStateMediaContainerView, TextStateMusicPlayerCoordinator, TextStateProfileCardContentView, UIButton, UIView;
@protocol TextStateProfileDragAnimateHelperDelegate;

@interface TextStateProfileDragAnimateHelper
{
    _Bool _shouldAutoPlayMedia;
    _Bool _showSameFriendDescription;
    _Bool _showGeneralIconButton;
    _Bool _showAddButton;
    _Bool _enableDragDownMoreButton;
    _Bool _enableFriendSquareRedDot;
    _Bool _disableJumpSquare;
    _Bool _isFromMyTab;
    _Bool _showStatusOperateButton;
    _Bool _needShowDoubleTapFavoriteGuide;
    unsigned int _notifyCount;
    id <TextStateProfileDragAnimateHelperDelegate> _delegate;
    CDUnknownBlockType _alphaAnimation;
    double _mediaViewMinHeight;
    TextStateMusicPlayerCoordinator *_musicPlayerCoordinator;
    NSHashTable *_alphaAnimateViews;
    MultipleTextStateCardView *_multipleCardView;
    UIButton *_bottomCloseButton;
    MMUIButton *_addButton;
    CContact *_contact;
    double _profileHeight;
    double _profileFittingHeight;
    TextStateProfileCardContentView *_profileContentView;
    MMTimer *_playMediaTimer;
    double _startPlayTime;
}

+ (struct CGSize)standardTextStateMediaSizeForWidth:(double)arg1;
+ (double)profileBottomPaddingWithSingle:(_Bool)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool needShowDoubleTapFavoriteGuide; // @synthesize needShowDoubleTapFavoriteGuide=_needShowDoubleTapFavoriteGuide;
@property(nonatomic) double startPlayTime; // @synthesize startPlayTime=_startPlayTime;
@property(retain, nonatomic) MMTimer *playMediaTimer; // @synthesize playMediaTimer=_playMediaTimer;
@property(nonatomic) __weak TextStateProfileCardContentView *profileContentView; // @synthesize profileContentView=_profileContentView;
@property(nonatomic) double profileFittingHeight; // @synthesize profileFittingHeight=_profileFittingHeight;
@property(nonatomic) double profileHeight; // @synthesize profileHeight=_profileHeight;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) MMUIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UIButton *bottomCloseButton; // @synthesize bottomCloseButton=_bottomCloseButton;
@property(retain, nonatomic) MultipleTextStateCardView *multipleCardView; // @synthesize multipleCardView=_multipleCardView;
@property(retain, nonatomic) NSHashTable *alphaAnimateViews; // @synthesize alphaAnimateViews=_alphaAnimateViews;
@property(retain, nonatomic) TextStateMusicPlayerCoordinator *musicPlayerCoordinator; // @synthesize musicPlayerCoordinator=_musicPlayerCoordinator;
@property(nonatomic) double mediaViewMinHeight; // @synthesize mediaViewMinHeight=_mediaViewMinHeight;
@property(copy, nonatomic) CDUnknownBlockType alphaAnimation; // @synthesize alphaAnimation=_alphaAnimation;
@property(nonatomic) _Bool showStatusOperateButton; // @synthesize showStatusOperateButton=_showStatusOperateButton;
@property(nonatomic) _Bool isFromMyTab; // @synthesize isFromMyTab=_isFromMyTab;
@property(nonatomic) _Bool disableJumpSquare; // @synthesize disableJumpSquare=_disableJumpSquare;
@property(nonatomic) _Bool enableFriendSquareRedDot; // @synthesize enableFriendSquareRedDot=_enableFriendSquareRedDot;
@property(nonatomic) _Bool enableDragDownMoreButton; // @synthesize enableDragDownMoreButton=_enableDragDownMoreButton;
@property(nonatomic) _Bool showAddButton; // @synthesize showAddButton=_showAddButton;
@property(nonatomic) _Bool showGeneralIconButton; // @synthesize showGeneralIconButton=_showGeneralIconButton;
@property(nonatomic) _Bool showSameFriendDescription; // @synthesize showSameFriendDescription=_showSameFriendDescription;
@property(nonatomic) unsigned int notifyCount; // @synthesize notifyCount=_notifyCount;
@property(nonatomic) _Bool shouldAutoPlayMedia; // @synthesize shouldAutoPlayMedia=_shouldAutoPlayMedia;
@property(nonatomic) __weak id <TextStateProfileDragAnimateHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onMultipleTextStateCard:(id)arg1 didMoveFromCard:(id)arg2 toCard:(id)arg3;
- (void)onMultipleTextStateCard:(id)arg1 willDisplayCard:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)configureSingleCardView:(id)arg1 forMultipleCardView:(id)arg2;
- (_Bool)shouldShowDragDownInfoView;
- (double)calMediaViewHeight;
- (_Bool)canAutoPlayMedia;
- (void)onTextStateDragMaskButtonClick:(id)arg1;
- (void)onLongPress:(id)arg1 isDown:(_Bool)arg2;
- (void)onTapRedEnvelopeButton:(id)arg1;
- (void)onTapIconButton:(id)arg1;
- (void)onTapCommentButton:(id)arg1;
- (void)onTapMoreButton:(id)arg1;
- (void)onTapSelfFavoriteButton:(id)arg1;
- (void)onTapFavoriteButton:(id)arg1 isSelected:(_Bool)arg2;
- (void)doHeadImageAction:(id)arg1;
- (void)doSourceAction:(id)arg1;
- (void)requestUpdateDataSource;
- (void)onMediaFinishPlaying;
- (void)stopMedia;
- (void)startMedia;
- (void)setupMediaViewMinHeight:(double)arg1;
- (_Bool)isPlayingRecent;
- (void)updateMediaWithContact:(id)arg1;
- (_Bool)shouldUpdateMediaWithContact:(id)arg1;
- (void)updateDragMaskView:(double)arg1;
- (void)onDragDownProgressChange:(double)arg1;
- (void)setupAnimateDetailView:(id)arg1 fittingHeight:(double)arg2 normalHeight:(double)arg3;
- (void)addAlphaAnimateView:(id)arg1;
- (void)onTapAddButton;
- (void)onDidExitDragDownState;
- (void)onWillExitDragDownState;
- (void)onWillEnterDragDownState;
- (void)onDidEnterDragDownState;
- (void)onBeginDragging;
- (struct CGSize)textStateMediaSizeForWidth:(double)arg1;
- (void)updateSameFriendDescription;
- (void)expandContentCardIfNeeded;
- (void)disableDoubleTapFavoriteGuide;
- (_Bool)isShowingFriendSquareRedDot;
- (void)setSmallRedDotForMoreButton:(_Bool)arg1;
- (void)showProfileDragDownView:(_Bool)arg1;
- (void)onInitUI;
@property(readonly, nonatomic) UIView *mediaMaskView;
@property(readonly, nonatomic) TextStateFullScreenCardContentView *activeContentView;
@property(readonly, nonatomic) TextStateMediaContainerView *mediaView;
- (id)pullDownCardReporter;
- (void)updateState;
- (void)setDragAnimationProgress:(CDUnknownBlockType)arg1;
- (id)initWithFrontContainerView:(id)arg1 frontInitialTop:(double)arg2 frontTableView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

