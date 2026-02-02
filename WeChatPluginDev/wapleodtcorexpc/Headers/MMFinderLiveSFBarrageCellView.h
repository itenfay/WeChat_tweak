//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiveContact, MMFinderLiveSFBarrageCellUIParam, MMFinderLiveTableStyleCommentPubbleUserCell, MMLiveCommentDataItem, MMLiveCommentPubbleCell, MMUIButton, NSString, PAGView;

@interface MMFinderLiveSFBarrageCellView : UIView
{
    _Bool _isInTappedState;
    _Bool _isShowingMenu;
    _Bool _forceAlignLeftForPaidBarrage;
    _Bool _disablePAGAnimation;
    _Bool _isInGetContactProcess;
    CDUnknownBlockType _cellDidTapBlock;
    CDUnknownBlockType _cellActionInvokeBlock;
    CDUnknownBlockType _autoRecoverUnTappedBlock;
    CDUnknownBlockType _getSingleEnableCommentBlock;
    MMLiveCommentDataItem *_dataItem;
    MMLiveCommentPubbleCell *_pubbleCell;
    MMUIButton *_likeButton;
    PAGView *_likeAnimationViewForMenu;
    FinderLiveContact *_peerContact;
    unsigned long long _lastGetContactTime;
    MMFinderLiveSFBarrageCellUIParam *_uiParam;
}

+ (_Bool)isCellFrameSupportReuse:(id)arg1;
+ (id)createPubbleCellFrame:(id)arg1 taskId:(id)arg2 maxWidth:(double)arg3;
+ (id)createPubbleCellFrame:(id)arg1 taskId:(id)arg2;
+ (double)estimateBarrageCellLineHeight:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveSFBarrageCellUIParam *uiParam; // @synthesize uiParam=_uiParam;
@property(nonatomic) _Bool isInGetContactProcess; // @synthesize isInGetContactProcess=_isInGetContactProcess;
@property(nonatomic) unsigned long long lastGetContactTime; // @synthesize lastGetContactTime=_lastGetContactTime;
@property(retain, nonatomic) FinderLiveContact *peerContact; // @synthesize peerContact=_peerContact;
@property(retain, nonatomic) PAGView *likeAnimationViewForMenu; // @synthesize likeAnimationViewForMenu=_likeAnimationViewForMenu;
@property(retain, nonatomic) MMUIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) MMLiveCommentPubbleCell *pubbleCell; // @synthesize pubbleCell=_pubbleCell;
@property(nonatomic) _Bool disablePAGAnimation; // @synthesize disablePAGAnimation=_disablePAGAnimation;
@property(nonatomic) _Bool forceAlignLeftForPaidBarrage; // @synthesize forceAlignLeftForPaidBarrage=_forceAlignLeftForPaidBarrage;
@property(nonatomic) _Bool isShowingMenu; // @synthesize isShowingMenu=_isShowingMenu;
@property(nonatomic) _Bool isInTappedState; // @synthesize isInTappedState=_isInTappedState;
@property(retain, nonatomic) MMLiveCommentDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(copy, nonatomic) CDUnknownBlockType getSingleEnableCommentBlock; // @synthesize getSingleEnableCommentBlock=_getSingleEnableCommentBlock;
@property(copy, nonatomic) CDUnknownBlockType autoRecoverUnTappedBlock; // @synthesize autoRecoverUnTappedBlock=_autoRecoverUnTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType cellActionInvokeBlock; // @synthesize cellActionInvokeBlock=_cellActionInvokeBlock;
@property(copy, nonatomic) CDUnknownBlockType cellDidTapBlock; // @synthesize cellDidTapBlock=_cellDidTapBlock;
- (void)onAnimationEnd:(id)arg1;
- (void)onMenuControllerDidShowFailedWithExtraInfo:(id)arg1;
- (void)onMenuControllerDidHideWithExtraInfo:(id)arg1;
- (void)onMenuControllerWillHideWithExtraInfo:(id)arg1;
- (void)reportCommentLike:(long long)arg1 comment:(id)arg2;
- (id)createLikeAnimationView;
- (void)playLikeAnimationInMenuItemView:(id)arg1;
- (void)clearlikeAnimationViewForMenu;
- (unsigned long long)getCommentSenderSingleDisableCommentDef;
- (void)getLiveContactForCommentSenderWithCompletion:(CDUnknownBlockType)arg1;
- (void)operateManagementEvent:(CDUnknownBlockType)arg1;
- (_Bool)selfIsCommentAssistant;
- (_Bool)isCommentSenderRoleTypeValid;
- (_Bool)isCommentSelfCommit;
- (unsigned int)commentSenderRoleType;
- (struct CGRect)getSelfPresentationFrame;
- (void)onCommentActionKickOut:(id)arg1;
- (void)onCommentActionAllowComment:(id)arg1;
- (void)onCommentActionAllowNoSenseComment:(id)arg1;
- (void)onCommentActionBanNoSenseComment:(id)arg1;
- (void)onCommentActionBanComment:(id)arg1;
- (void)onCommentActionTop:(id)arg1;
- (void)onCommentActionRoleProfile:(id)arg1;
- (void)onCommentActionRoleFinder:(id)arg1;
- (void)onCommentActionUnLike:(id)arg1;
- (void)onCommentActionLike:(id)arg1;
- (void)onCommentActionLikeFromMenu:(id)arg1;
- (void)onCommentActionExpose:(id)arg1;
- (void)onCommentActionCopy:(id)arg1;
- (void)onCommentActionReply:(id)arg1;
- (id)createKickOutMenuItem;
- (id)createRoleMenuItem;
- (id)createDisableCommentMenuItem:(unsigned long long)arg1 isNoSense:(_Bool)arg2;
- (id)createTopMenuItem;
- (id)createExposeMenuItem;
- (id)createFinderRoleMenuItemView;
- (id)createCopyMenuItem;
- (id)createReplyMenuItem;
- (id)createLikeMenuItem;
- (void)setMenuVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showMenuItemsForAnchorOrAssistantSelfInRect:(struct CGRect)arg1;
- (void)realShowMenuItemsForAnchorOrAssistantWithCommentBannedFlag:(unsigned long long)arg1 animated:(_Bool)arg2 inRect:(struct CGRect)arg3;
- (void)showMenuItemsForAnchorOrAssistantInRect:(struct CGRect)arg1;
- (void)realShowMenuItemsForCommentAssistantWithCommentBannedFlag:(unsigned long long)arg1 inRect:(struct CGRect)arg2;
- (void)showMenuItemsForCommentAssistantInRect:(struct CGRect)arg1;
- (void)showMenuItemsForCommentAssistantSelfInRect:(struct CGRect)arg1;
- (void)showMenuItemsForAudienceInRect:(struct CGRect)arg1;
@property(readonly, nonatomic) MMFinderLiveTableStyleCommentPubbleUserCell *convertedPubbleUserCell;
- (_Bool)isFanGroupBarrage;
- (_Bool)isPaidBarrage;
@property(readonly, nonatomic) _Bool isFloatBarrage;
@property(readonly, nonatomic) _Bool isMenuShow;
- (void)updateUIUnTappedForFloatBarrage;
- (void)updateUITappedForFloatBarrage;
- (void)updateUIForTapStateChanged;
- (struct CGRect)getCurrentVisibleRect;
- (id)currentFinderLiveTask;
- (void)hideMenuItems;
- (_Bool)showMenuItems;
- (void)recoverUnTappedState;
- (void)onLikeBtnTap;
- (void)onPubbleTap:(struct CGPoint)arg1;
- (double)getDisplayAreaLeft;
- (double)getDisplayAreaWidth;
- (struct CGRect)getLikeBtnTapHitAreaFrame;
- (struct CGRect)getPubbleTapHitAreaFrame;
- (_Bool)isSupportReuse;
- (void)refreshLikeButton;
- (unsigned long long)getPubbleStyle:(id)arg1;
- (double)getPubbleCellContentRight;
- (double)getPubbleCellContentLeft;
- (id)getSuperfanTextGradientColorToWithLevel:(unsigned int)arg1;
- (id)getSuperfanTextGradientColorFromWithLevel:(unsigned int)arg1;
- (void)createPubbleCellIfNeeded:(id)arg1;
- (void)refreshPubbleCell:(id)arg1;
- (void)reloadLikeInfo;
- (void)updateWithCellFrame:(id)arg1 needInteritemMargin:(_Bool)arg2;
- (void)updateWithCellFrame:(id)arg1;
- (void)releaseHeavyResources;
- (void)prepareForReuseWithUIParam:(id)arg1;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithUIParam:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

