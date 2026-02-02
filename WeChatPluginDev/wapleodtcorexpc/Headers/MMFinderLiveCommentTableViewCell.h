//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveContact, MMFinderLiveCommentTableViewCellFrame, MMLiveCommentPubbleCell, MMLiveLongPressRecognizer, MMLiveTaskId, MMUIButton, NSString, PAGView, UIColor, UITapGestureRecognizer, UIView, WCFinderAnimationLoadingView;

@interface MMFinderLiveCommentTableViewCell
{
    _Bool _isShowMenu;
    _Bool _isInGetContactProcess;
    _Bool _hasStartCustomAppend;
    _Bool _isCustomAppending;
    double _minimumPressDuration;
    MMLiveTaskId *_taskId;
    CDUnknownBlockType _cellActionInvokeBlock;
    CDUnknownBlockType _cellDidTapBlock;
    CDUnknownBlockType _cellDidLongPressedBlock;
    CDUnknownBlockType _cellLongPressTouchChangedBlock;
    CDUnknownBlockType _needStopTableAutoScrollBlock;
    CDUnknownBlockType _getSingleEnableCommentBlock;
    CDUnknownBlockType _cellDidDoubleTapBlock;
    CDUnknownBlockType _retryPostBlock;
    MMLiveCommentPubbleCell *_pubbleCell;
    UIColor *_initialPubbleBackColor;
    UITapGestureRecognizer *_tapGesture;
    MMLiveLongPressRecognizer *_longPressGesture;
    UITapGestureRecognizer *_doubleTapGesture;
    unsigned long long _lastGetContactTime;
    UIView *_rightEmptyAreaView;
    MMUIButton *_likeButton;
    UITapGestureRecognizer *_rightEmptyAreaTapGesture;
    PAGView *_likeAnimationView;
    PAGView *_likeAnimationViewForMenu;
    WCFinderAnimationLoadingView *_statusLoadingView;
    MMUIButton *_statusFailButton;
    CDUnknownBlockType _customAppendCompletion;
    FinderLiveContact *_peerContact;
}

+ (long long)getPubbleCellTapActionType:(id)arg1 taskId:(id)arg2;
+ (_Bool)isSupportDoubleTap:(id)arg1;
+ (_Bool)isSupportLongPress:(id)arg1;
+ (_Bool)isSupportTap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveContact *peerContact; // @synthesize peerContact=_peerContact;
@property(copy, nonatomic) CDUnknownBlockType customAppendCompletion; // @synthesize customAppendCompletion=_customAppendCompletion;
@property(nonatomic) _Bool isCustomAppending; // @synthesize isCustomAppending=_isCustomAppending;
@property(nonatomic) _Bool hasStartCustomAppend; // @synthesize hasStartCustomAppend=_hasStartCustomAppend;
@property(retain, nonatomic) MMUIButton *statusFailButton; // @synthesize statusFailButton=_statusFailButton;
@property(retain, nonatomic) WCFinderAnimationLoadingView *statusLoadingView; // @synthesize statusLoadingView=_statusLoadingView;
@property(retain, nonatomic) PAGView *likeAnimationViewForMenu; // @synthesize likeAnimationViewForMenu=_likeAnimationViewForMenu;
@property(retain, nonatomic) PAGView *likeAnimationView; // @synthesize likeAnimationView=_likeAnimationView;
@property(retain, nonatomic) UITapGestureRecognizer *rightEmptyAreaTapGesture; // @synthesize rightEmptyAreaTapGesture=_rightEmptyAreaTapGesture;
@property(retain, nonatomic) MMUIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIView *rightEmptyAreaView; // @synthesize rightEmptyAreaView=_rightEmptyAreaView;
@property(nonatomic) _Bool isInGetContactProcess; // @synthesize isInGetContactProcess=_isInGetContactProcess;
@property(nonatomic) unsigned long long lastGetContactTime; // @synthesize lastGetContactTime=_lastGetContactTime;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGesture; // @synthesize doubleTapGesture=_doubleTapGesture;
@property(retain, nonatomic) MMLiveLongPressRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIColor *initialPubbleBackColor; // @synthesize initialPubbleBackColor=_initialPubbleBackColor;
@property(nonatomic) _Bool isShowMenu; // @synthesize isShowMenu=_isShowMenu;
@property(retain, nonatomic) MMLiveCommentPubbleCell *pubbleCell; // @synthesize pubbleCell=_pubbleCell;
@property(copy, nonatomic) CDUnknownBlockType retryPostBlock; // @synthesize retryPostBlock=_retryPostBlock;
@property(copy, nonatomic) CDUnknownBlockType cellDidDoubleTapBlock; // @synthesize cellDidDoubleTapBlock=_cellDidDoubleTapBlock;
@property(copy, nonatomic) CDUnknownBlockType getSingleEnableCommentBlock; // @synthesize getSingleEnableCommentBlock=_getSingleEnableCommentBlock;
@property(copy, nonatomic) CDUnknownBlockType needStopTableAutoScrollBlock; // @synthesize needStopTableAutoScrollBlock=_needStopTableAutoScrollBlock;
@property(copy, nonatomic) CDUnknownBlockType cellLongPressTouchChangedBlock; // @synthesize cellLongPressTouchChangedBlock=_cellLongPressTouchChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType cellDidLongPressedBlock; // @synthesize cellDidLongPressedBlock=_cellDidLongPressedBlock;
@property(copy, nonatomic) CDUnknownBlockType cellDidTapBlock; // @synthesize cellDidTapBlock=_cellDidTapBlock;
@property(copy, nonatomic) CDUnknownBlockType cellActionInvokeBlock; // @synthesize cellActionInvokeBlock=_cellActionInvokeBlock;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) double minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
- (void)checkSelfHasConsumeTouch:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)createLikeAnimationView;
- (void)playLikeAnimationInMenuItemView:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationStart:(id)arg1;
- (void)playLikeAnimation;
- (void)onSelfMMLiveCommentDataStatusUpdated:(id)arg1 forTaskId:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (unsigned long long)getCommentSenderSingleDisableCommentDef;
- (void)updateNotShowMenu;
- (void)updateNotShowMenuDelayed;
- (void)onMenuControllerDidShowFailed:(id)arg1;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)reportCommentLike:(long long)arg1 comment:(id)arg2;
- (void)onCommentActionUnLike;
- (void)onCommentActionLikeFromMenu:(id)arg1;
- (void)onCommentActionUnLike:(id)arg1;
- (void)onCommentActionLike:(id)arg1;
- (void)onCommentActionCopy:(id)arg1;
- (void)onCommentActionReply:(id)arg1;
- (void)onCommentActionKickOut:(id)arg1;
- (void)onCommentActionSendFlashSale:(id)arg1;
- (void)onCommentActionExpose:(id)arg1;
- (void)onCommentActionAllowComment:(id)arg1;
- (void)onCommentActionAllowNoSenseComment:(id)arg1;
- (void)onCommentActionBanNoSenseComment:(id)arg1;
- (void)onCommentActionBanComment:(id)arg1;
- (void)onCommentActionClap:(id)arg1;
- (void)onCommentActionRoleFinder:(id)arg1;
- (void)onCommentActionRoleWXProfile:(id)arg1;
- (void)onCommentActionRoleProfile:(id)arg1;
- (void)onCommentActionTop:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)onTouchesCancel:(id)arg1 withEvent:(id)arg2;
- (void)onTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)onTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onPubbleDoubleTapGestureRecognizer:(id)arg1;
- (void)onPubbleLongPressGestureRecognizer:(id)arg1;
- (id)finderLiveTask;
- (_Bool)isCommentSenderRoleTypeValid;
- (unsigned int)commentSenderRoleType;
- (double)calculateMenuControllerY;
- (double)getCustomAppendPubbleCellInitTop;
- (double)getCustomAppendAnimationDuration;
- (void)handleEndCustomAppend:(_Bool)arg1;
- (void)endCustomAppend:(id)arg1;
- (void)cancelCustomAppend;
- (void)delayEndCustomAppend;
- (_Bool)enableCustomAppend;
- (void)invokeCustomAppend;
- (double)getCustomAppendDelayEndDuration;
- (void)startCustomAppend:(CDUnknownBlockType)arg1;
- (void)showMenuItemsForAudience;
- (void)showMenuItemsForAnchorOrAssistantSelf;
- (void)realShowMenuItemsForAnchorOrAssistantWithCommentBannedFlag:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)getMenuItem:(unsigned long long)arg1 isNoSense:(_Bool)arg2;
- (void)showMenuItemsForAnchorOrAssistant;
- (void)realShowMenuItemsForCommentAssistantWithCommentBannedFlag:(unsigned long long)arg1;
- (void)showMenuItemsForCommentAssistant;
- (void)showMenuItemsForCommentAssistantSelf;
- (_Bool)showMenuForAnchorIfNeeded;
- (void)operateManagementEvent:(CDUnknownBlockType)arg1;
- (_Bool)selfIsCommentAssistant;
- (void)onRightEmptyAreaTapGestureRecognizer:(id)arg1;
- (void)onPubbleTapGestureRecognizer:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveCommentTableViewCellFrame *finderLiveCellFrame;
- (void)refreshUIForCommentStatus;
- (void)layoutRightEmptyAreaView;
- (void)setCellFrame:(id)arg1;
- (void)doubleTapLikeButton:(id)arg1;
- (void)likeButtonClick:(id)arg1;
- (void)layoutLikeButton;
- (void)updateLikeWidgetsVisible;
- (_Bool)isStatusWidgetsVisible;
- (void)statusButtonClick:(id)arg1;
- (void)layoutStatusFailButton;
- (void)createStatusFailButton;
- (void)layoutStatusLoadingView;
- (void)createStatusLoadingView;
- (void)updatePubbleCellOrigin;
- (void)layoutPubbleCell;
- (void)layoutSubviews;
- (void)addGestureForPubbleFrame:(id)arg1;
- (id)getRightEmptyAreaTapGesture;
- (void)registerExtensions;
- (void)initNotifications;
- (void)willDisplay;
- (void)reloadLikeInfo;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

