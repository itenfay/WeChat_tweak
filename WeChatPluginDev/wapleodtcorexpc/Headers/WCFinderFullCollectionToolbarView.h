//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSString, PAGView, UIImageView, UILabel, WCFinderFeedContentVM, WCFinderFullCollectionToolbarItemButton;
@protocol WCFinderFeedToolbarActionDelegate;

@interface WCFinderFullCollectionToolbarView : UIView
{
    _Bool _hideFav;
    _Bool _allowFav;
    _Bool _isFav;
    _Bool _isDisableActionExceptLikes;
    _Bool _isCommentClose;
    _Bool _isPrivateAccount;
    _Bool _allowForward;
    _Bool _hideLikeAction;
    _Bool _disableLikeAction;
    _Bool _disableCommentAction;
    unsigned char _thumbHeartEduShowing;
    int _likeFlag;
    int _feedObjectType;
    id <WCFinderFeedToolbarActionDelegate> _delegate;
    WCFinderFullCollectionToolbarItemButton *_collectionBtn;
    WCFinderFullCollectionToolbarItemButton *_shareBtn;
    WCFinderFullCollectionToolbarItemButton *_likeBtn;
    WCFinderFullCollectionToolbarItemButton *_commentBtn;
    UILabel *_collectionTipsLabel;
    unsigned long long _collectionCount;
    unsigned long long _likeNums;
    unsigned long long _commentNums;
    UIView *_likeDoubleIdentityShadowView;
    MMUILabel *_likeDoubleIdentityLabel;
    UIView *_triangleBViewShadowView;
    UIImageView *_triangleBView;
    unsigned long long _forwardCount;
    unsigned long long _wxStatusRefCount;
    UIView *_allDisableGesView;
    PAGView *_likeExplosionView;
    WCFinderFeedContentVM *_contentVM;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) PAGView *likeExplosionView; // @synthesize likeExplosionView=_likeExplosionView;
@property(nonatomic) unsigned char thumbHeartEduShowing; // @synthesize thumbHeartEduShowing=_thumbHeartEduShowing;
@property(retain, nonatomic) UIView *allDisableGesView; // @synthesize allDisableGesView=_allDisableGesView;
@property(nonatomic) _Bool disableCommentAction; // @synthesize disableCommentAction=_disableCommentAction;
@property(nonatomic) _Bool disableLikeAction; // @synthesize disableLikeAction=_disableLikeAction;
@property(nonatomic) _Bool hideLikeAction; // @synthesize hideLikeAction=_hideLikeAction;
@property(nonatomic) unsigned long long wxStatusRefCount; // @synthesize wxStatusRefCount=_wxStatusRefCount;
@property(nonatomic) unsigned long long forwardCount; // @synthesize forwardCount=_forwardCount;
@property(nonatomic) _Bool allowForward; // @synthesize allowForward=_allowForward;
@property(nonatomic) _Bool isPrivateAccount; // @synthesize isPrivateAccount=_isPrivateAccount;
@property(retain, nonatomic) UIImageView *triangleBView; // @synthesize triangleBView=_triangleBView;
@property(retain, nonatomic) UIView *triangleBViewShadowView; // @synthesize triangleBViewShadowView=_triangleBViewShadowView;
@property(retain, nonatomic) MMUILabel *likeDoubleIdentityLabel; // @synthesize likeDoubleIdentityLabel=_likeDoubleIdentityLabel;
@property(retain, nonatomic) UIView *likeDoubleIdentityShadowView; // @synthesize likeDoubleIdentityShadowView=_likeDoubleIdentityShadowView;
@property(nonatomic) unsigned long long commentNums; // @synthesize commentNums=_commentNums;
@property(nonatomic) int feedObjectType; // @synthesize feedObjectType=_feedObjectType;
@property(nonatomic) _Bool isCommentClose; // @synthesize isCommentClose=_isCommentClose;
@property(nonatomic) _Bool isDisableActionExceptLikes; // @synthesize isDisableActionExceptLikes=_isDisableActionExceptLikes;
@property(nonatomic) unsigned long long likeNums; // @synthesize likeNums=_likeNums;
@property(nonatomic) int likeFlag; // @synthesize likeFlag=_likeFlag;
@property(nonatomic) _Bool isFav; // @synthesize isFav=_isFav;
@property(nonatomic) _Bool allowFav; // @synthesize allowFav=_allowFav;
@property(nonatomic) _Bool hideFav; // @synthesize hideFav=_hideFav;
@property(nonatomic) unsigned long long collectionCount; // @synthesize collectionCount=_collectionCount;
@property(retain, nonatomic) UILabel *collectionTipsLabel; // @synthesize collectionTipsLabel=_collectionTipsLabel;
@property(retain, nonatomic) WCFinderFullCollectionToolbarItemButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(retain, nonatomic) WCFinderFullCollectionToolbarItemButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(retain, nonatomic) WCFinderFullCollectionToolbarItemButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) WCFinderFullCollectionToolbarItemButton *collectionBtn; // @synthesize collectionBtn=_collectionBtn;
@property(nonatomic) __weak id <WCFinderFeedToolbarActionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)createOneLikeExplosionView;
- (void)tryBindDynaimcIconToItemButton:(id)arg1 color:(id)arg2 size:(struct CGSize)arg3 defaultIconName:(id)arg4 defaultIconColor:(id)arg5 iconKey:(id)arg6 updateBlock:(CDUnknownBlockType)arg7;
- (id)whiteColorWithAlphaComponent;
- (void)selectButtonWithAnimation:(id)arg1 selectedImage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)collectionOffImageKey;
- (id)collectionOnImageKey;
- (void)triggerCollectionAnimation;
- (void)didClickCollectionBtn:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)didClickCommentBtn:(id)arg1;
- (void)didClickShareBtn:(id)arg1;
- (void)triggerLikeAnimation;
- (void)didClickLikeBtn:(id)arg1;
- (void)hiddenlikeDoubleIdentityLabel:(_Bool)arg1;
- (void)updateLikeEducateTipsLayout;
- (void)initlikeDoubleIdentityLabel;
- (void)updateCenterAlignment;
- (struct WCFinderDynamicIcon)likeDynamicIconLikeFlag:(int)arg1;
- (void)updateContentVM:(id)arg1 hideLikeAction:(_Bool)arg2 disableLikeAction:(_Bool)arg3;
- (void)updateCommentContaier;
- (void)updateShareContainer:(_Bool)arg1;
- (void)updateCollectionContainer:(_Bool)arg1 allowFav:(_Bool)arg2;
- (_Bool)isShowingLikeEducateTips;
- (void)needsShowLikeTips:(_Bool)arg1;
- (void)updateLikeEducateTipsContainer:(id)arg1;
- (void)updateCommentContainer:(_Bool)arg1;
- (void)updateAllDisableGesView;
- (_Bool)canShowThumbCarouselEdu;
- (_Bool)tryShowThumbCarouselEdu;
- (_Bool)tryShowThumbHeartEduAnimation;
- (void)showAdditionalInfo:(id)arg1 animationDuration:(double)arg2 stayDuration:(double)arg3 complection:(CDUnknownBlockType)arg4;
- (void)showDynamicEduAnimation;
- (void)updateContentVM:(id)arg1 commentClose:(_Bool)arg2 isDisableActionExceptLikes:(_Bool)arg3 likeEducateTips:(id)arg4 allowForward:(_Bool)arg5 hideFav:(_Bool)arg6 allowFav:(_Bool)arg7 hideLikeAction:(_Bool)arg8 disableLikeAction:(_Bool)arg9 disableCommentAction:(_Bool)arg10;
- (void)setupSubView;
- (void)prefetchDynamicIcons;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

