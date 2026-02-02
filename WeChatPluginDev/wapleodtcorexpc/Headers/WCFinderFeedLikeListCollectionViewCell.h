//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImageView, UILabel, UIView, WCFinderHeadImageView, WCFinderInteractionLabelGroupView, WCFinderLikeInfo, WCFinderThanksButton;
@protocol WCFinderFeedLikeListCellDelegate;

@interface WCFinderFeedLikeListCollectionViewCell : UICollectionViewCell
{
    id <WCFinderFeedLikeListCellDelegate> _delegate;
    WCFinderLikeInfo *_likeInfo;
    WCFinderHeadImageView *_avatarImageView;
    UIImageView *_finderLogoView;
    UILabel *_nickNameLabel;
    UIView *_separatorLine;
    UIView *_highLightBGView;
    WCFinderInteractionLabelGroupView *_nicknameTailLabel;
    WCFinderInteractionLabelGroupView *_bottomInteractLabel;
    WCFinderThanksButton *_thanksButton;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderThanksButton *thanksButton; // @synthesize thanksButton=_thanksButton;
@property(retain, nonatomic) WCFinderInteractionLabelGroupView *bottomInteractLabel; // @synthesize bottomInteractLabel=_bottomInteractLabel;
@property(retain, nonatomic) WCFinderInteractionLabelGroupView *nicknameTailLabel; // @synthesize nicknameTailLabel=_nicknameTailLabel;
@property(retain, nonatomic) UIView *highLightBGView; // @synthesize highLightBGView=_highLightBGView;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIImageView *finderLogoView; // @synthesize finderLogoView=_finderLogoView;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) WCFinderLikeInfo *likeInfo; // @synthesize likeInfo=_likeInfo;
@property(nonatomic) __weak id <WCFinderFeedLikeListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onThankStateChanged:(_Bool)arg1 tid:(id)arg2 username:(id)arg3 interactionType:(long long)arg4;
- (void)onLikeInfo:(id)arg1 thankStateChanged:(_Bool)arg2;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onThanksButtonSizeChanged;
- (void)onThanksButtonEmitMagicAnimationWithAnimStyle:(unsigned long long)arg1;
- (void)onThanksButtonClickedWithThanksState:(_Bool)arg1;
- (void)clickNickNameAction;
- (struct CGRect)thanksIconFrame;
- (void)setUpUI;
- (void)clearHighlight;
- (void)showHighlightAnimation;
- (void)layoutUI;
- (void)updateWithLikeInfo:(id)arg1 needsSeparatorLine:(_Bool)arg2;
- (void)prepareForReuse;
- (void)setupEvent;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

