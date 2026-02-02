//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UILabel, WCFinderFeedContentVM, WCFinderFriendLikeToolbarView, WCFinderJumpInfoBubbleView, WCFinderJumpInfoCombinationView, WCFinderJumpInfoLBSCardView, WCFinderPhotoFeedDetailDescriptionView;
@protocol WCFinderPhotoFeedHeaderDelegate;

@interface WCFinderPhotoFeedHeaderView : UIView
{
    id <WCFinderPhotoFeedHeaderDelegate> _delegate;
    UIView *_separatorView;
    UILabel *_commentCountLabel;
    WCFinderJumpInfoLBSCardView *_lbsCard;
    UIView *_commentTopTipsView;
    WCFinderFeedContentVM *_contentVM;
    WCFinderJumpInfoCombinationView *_redpacketBubble;
    WCFinderJumpInfoBubbleView *_redpacketNormalBubble;
    WCFinderFriendLikeToolbarView *_friendLikeView;
    UILabel *_feedShortTitleLabel;
    WCFinderPhotoFeedDetailDescriptionView *_feedDescriptionView;
    double _layoutWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(retain, nonatomic) WCFinderPhotoFeedDetailDescriptionView *feedDescriptionView; // @synthesize feedDescriptionView=_feedDescriptionView;
@property(retain, nonatomic) UILabel *feedShortTitleLabel; // @synthesize feedShortTitleLabel=_feedShortTitleLabel;
@property(retain, nonatomic) WCFinderFriendLikeToolbarView *friendLikeView; // @synthesize friendLikeView=_friendLikeView;
@property(retain, nonatomic) WCFinderJumpInfoBubbleView *redpacketNormalBubble; // @synthesize redpacketNormalBubble=_redpacketNormalBubble;
@property(retain, nonatomic) WCFinderJumpInfoCombinationView *redpacketBubble; // @synthesize redpacketBubble=_redpacketBubble;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UIView *commentTopTipsView; // @synthesize commentTopTipsView=_commentTopTipsView;
@property(retain, nonatomic) WCFinderJumpInfoLBSCardView *lbsCard; // @synthesize lbsCard=_lbsCard;
@property(retain, nonatomic) UILabel *commentCountLabel; // @synthesize commentCountLabel=_commentCountLabel;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) __weak id <WCFinderPhotoFeedHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)onFeedContentJumpInfoContainerChanged:(id)arg1 isPureUIChanged:(_Bool)arg2 showPosition:(int)arg3 scene:(int)arg4 disableReport:(_Bool)arg5;
- (void)onFeedContentJumpInfoContainerChanged:(id)arg1 isPureUIChanged:(_Bool)arg2 showPosition:(int)arg3 scene:(int)arg4;
- (void)lbsCardLayoutHeightChanged;
- (void)lbsCardDidClickCardWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)lbsCardChangeFavState:(_Bool)arg1 withJumpInfo:(id)arg2;
- (void)onFinderJumpInfoBubbleViewDidClick:(id)arg1;
- (void)onFinderJumpInfoCombinationViewDidClick:(id)arg1;
- (id)jumpInfoViewWithJumpInfo:(id)arg1 subStyle:(id)arg2;
- (void)finderJumpInfoView:(id)arg1 needChangeToStyleWithIndex:(unsigned long long)arg2;
- (void)onClickContentTopicAction:(id)arg1 contentVM:(id)arg2;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 contentVM:(id)arg3;
- (void)onClickContentUsernameAction:(id)arg1 contentVM:(id)arg2;
- (void)onClickCollectionAction:(id)arg1;
- (void)onClickLinkEntry:(id)arg1;
- (void)onClickEventEntry:(id)arg1;
- (void)clickContentPOIAction:(id)arg1;
- (void)onRefreshFriendUI:(id)arg1;
- (unsigned long long)generateDisplayIdentifyType:(unsigned long long)arg1;
- (void)updateCommentCountLabel:(id)arg1;
- (void)updateFriendLikeViewWithContentVM:(id)arg1;
- (void)updateShortTitleLabelWithContentVM:(id)arg1;
- (void)updateWithContentVM:(id)arg1;
- (void)updateLBSCard;
- (id)getRedpacketBubbleJumpInfo;
- (void)updateRedpacketBubbleWithForceUpdate:(_Bool)arg1;
- (_Bool)shouldShowFriendLikeViewWithContentVM:(id)arg1;
- (void)updateUI;
- (void)setupSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 scene:(unsigned long long)arg2 switchType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

