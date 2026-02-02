//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class InteractionLabel, MMHeadImageView, MMUILabel, TextStateItemView, UIView, WCTogetherFeedCellContentView, WCTogetherFeedViewItem;

@interface WCTogetherBaseFeedCell
{
    UIView *_infoView;
    WCTogetherFeedCellContentView *_itemContentView;
    UIView *_footerView;
    MMHeadImageView *_authorHeaderView;
    InteractionLabel *_authorNicknameLabel;
    MMUILabel *_dateLabel;
    TextStateItemView *_textStateView;
    MMUILabel *_friendsLabel;
    InteractionLabel *_locationLabel;
}

+ (double)heightForTogetherTextWithViewItem:(id)arg1 withWidth:(double)arg2;
+ (double)heightForFooterViewWithViewItem:(id)arg1 inTableView:(id)arg2;
+ (double)heightForItemContentViewWithViewItem:(id)arg1 inTableView:(id)arg2;
+ (double)heightForViewItem:(id)arg1 inTableView:(id)arg2;
+ (id)createFriendsLabel;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) InteractionLabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) MMUILabel *friendsLabel; // @synthesize friendsLabel=_friendsLabel;
@property(retain, nonatomic) TextStateItemView *textStateView; // @synthesize textStateView=_textStateView;
@property(retain, nonatomic) MMUILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) InteractionLabel *authorNicknameLabel; // @synthesize authorNicknameLabel=_authorNicknameLabel;
@property(retain, nonatomic) MMHeadImageView *authorHeaderView; // @synthesize authorHeaderView=_authorHeaderView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCTogetherFeedCellContentView *itemContentView; // @synthesize itemContentView=_itemContentView;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
- (void)locationLabelClicked:(id)arg1;
- (void)contentDidTap;
- (void)textStateViewClicked:(id)arg1;
- (void)nicknameLabelClicked:(id)arg1;
- (void)headerViewDidClicked:(id)arg1;
- (void)layoutFooterView;
- (void)layoutItemContentView;
- (void)layoutInfoView;
- (void)layoutSubviews;
- (void)loadFooterView;
- (void)loadItemContentView;
- (void)loadInfoView;
- (id)createHeaderViewWithSize:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateValueForKeyPath:(id)arg1;
- (id)observingKeyPathsForViewModel;

// Remaining properties
@property(retain, nonatomic) WCTogetherFeedViewItem *viewItem; // @dynamic viewItem;

@end

