//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHeadImageView, MMUIButton, UIImageView, UILabel, UIView, WCFinderLikeInfo;
@protocol WCFinderFeedFriendsLikeListTableViewCellDelegate;

@interface WCFinderFeedFriendsLikeListTableViewCell
{
    _Bool _showFinderIdentifier;
    id <WCFinderFeedFriendsLikeListTableViewCellDelegate> _delegate;
    unsigned long long _row;
    MMHeadImageView *_avatarImageView;
    UILabel *_nickNameLabel;
    MMUIButton *_likeBtn;
    MMUIButton *_moreBtn;
    UIView *_separatorLine;
    UIView *_highLightBGView;
    UILabel *_firstLikeLabel;
    UIImageView *_logoIconView;
    WCFinderLikeInfo *_likeInfo;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLikeInfo *likeInfo; // @synthesize likeInfo=_likeInfo;
@property(retain, nonatomic) UIImageView *logoIconView; // @synthesize logoIconView=_logoIconView;
@property(retain, nonatomic) UILabel *firstLikeLabel; // @synthesize firstLikeLabel=_firstLikeLabel;
@property(retain, nonatomic) UIView *highLightBGView; // @synthesize highLightBGView=_highLightBGView;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) MMUIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) MMUIButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) _Bool showFinderIdentifier; // @synthesize showFinderIdentifier=_showFinderIdentifier;
@property(nonatomic) unsigned long long row; // @synthesize row=_row;
@property(nonatomic) __weak id <WCFinderFeedFriendsLikeListTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickLikeBtn;
- (void)onClickMoreBtn;
- (void)showHighlightAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateNotSee:(_Bool)arg1;
- (void)updateLiked:(_Bool)arg1;
- (void)layoutAllSubviews;
- (void)setupLikeInfo:(id)arg1 needsSeparatorLine:(_Bool)arg2 showFirstLikeLabel:(_Bool)arg3 canShowMore:(_Bool)arg4;
- (void)setupSubViews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

