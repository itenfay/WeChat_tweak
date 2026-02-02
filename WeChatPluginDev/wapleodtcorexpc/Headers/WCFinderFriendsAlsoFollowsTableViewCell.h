//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class FavAttributeCPLabel, NSString, UICollectionView, UILabel, UIView, WCFinderAccoutItem, WCFinderAuthInfoIconView, WCFinderHeadImageView, WCFinderMaskButton;
@protocol WCFinderFriendsAlsoFollowsTableViewCellDelegate;

@interface WCFinderFriendsAlsoFollowsTableViewCell : UITableViewCell
{
    int _commentScene;
    id <WCFinderFriendsAlsoFollowsTableViewCellDelegate> _delegate;
    UICollectionView *_collectionView;
    UIView *_containerView;
    WCFinderHeadImageView *_headImgView;
    FavAttributeCPLabel *_nameLabel;
    WCFinderAuthInfoIconView *_authView;
    UILabel *_friendFollowCountLabel;
    WCFinderMaskButton *_followButton;
    WCFinderAccoutItem *_acctItem;
    UILabel *_emptyTipsLabel;
}

+ (double)cellHWithW:(double)arg1;
+ (id)cellID;
+ (double)cellHWithCollW:(double)arg1;
+ (double)cellWWithCollW:(double)arg1;
+ (double)collectionHWithSelfW:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) UILabel *emptyTipsLabel; // @synthesize emptyTipsLabel=_emptyTipsLabel;
@property(retain, nonatomic) WCFinderAccoutItem *acctItem; // @synthesize acctItem=_acctItem;
@property(retain, nonatomic) WCFinderMaskButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *friendFollowCountLabel; // @synthesize friendFollowCountLabel=_friendFollowCountLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authView; // @synthesize authView=_authView;
@property(retain, nonatomic) FavAttributeCPLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WCFinderFriendsAlsoFollowsTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickFollowButton;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)cellAtIndex:(long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)getCurrentNameMaxWidth;
- (void)layoutSubviews;
- (void)updateFollowBtnWithContactFollowState:(unsigned long long)arg1 privateState:(_Bool)arg2;
- (void)updateWithDataInfo:(id)arg1 commentScene:(int)arg2;
- (void)prepareForReuse;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

