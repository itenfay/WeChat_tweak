//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class FinderFavListCellContentContainer, NSString, UIView, WCFinderFavInfo, WCFinderHeadImageView, WCFinderThanksButton;
@protocol WCFinderFeedFavListCellDelegate;

@interface WCFinderFeedFavListCollectionViewCell : UICollectionViewCell
{
    id <WCFinderFeedFavListCellDelegate> _delegate;
    WCFinderFavInfo *_favInfo;
    WCFinderHeadImageView *_avatarImageView;
    UIView *_separatorLine;
    FinderFavListCellContentContainer *_contentContainer;
    WCFinderThanksButton *_thanksButton;
    struct CGSize _layoutSize;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(retain, nonatomic) WCFinderThanksButton *thanksButton; // @synthesize thanksButton=_thanksButton;
@property(retain, nonatomic) FinderFavListCellContentContainer *contentContainer; // @synthesize contentContainer=_contentContainer;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) WCFinderFavInfo *favInfo; // @synthesize favInfo=_favInfo;
@property(nonatomic) __weak id <WCFinderFeedFavListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onThankStateChanged:(_Bool)arg1 tid:(id)arg2 username:(id)arg3 interactionType:(long long)arg4;
- (void)onThanksButtonEmitMagicAnimationWithAnimStyle:(unsigned long long)arg1;
- (void)onThanksButtonClickedWithThanksState:(_Bool)arg1;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (struct CGRect)thanksIconFrame;
- (_Bool)isSelfFav;
- (void)updateWithFavInfo:(id)arg1;
- (void)showHighlightAnimation;
- (void)prepareForReuse;
- (void)setupEvent;
- (void)setupUI;
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

