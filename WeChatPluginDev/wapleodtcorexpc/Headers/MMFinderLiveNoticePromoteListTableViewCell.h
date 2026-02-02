//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class FinderLiveNoticeInfo, MMPaddingView, MMUIButton, UIImageView, UILabel, UIView, ZZLabelChainModel;
@protocol MMFinderLiveNoticePromoteListTableViewCellDelegate;

@interface MMFinderLiveNoticePromoteListTableViewCell : UITableViewCell
{
    _Bool _added;
    id <MMFinderLiveNoticePromoteListTableViewCellDelegate> _delegate;
    UIView *_containerView;
    UIImageView *_liveIconImageView;
    UILabel *_titleLabel;
    UILabel *_introLabel;
    UILabel *_reserveCountLabel;
    UIView *_horizontalSeparatorBar;
    MMUIButton *_addButton;
    UILabel *_topLabel;
    FinderLiveNoticeInfo *_liveNotice;
    MMPaddingView *_couponsTitleLabel;
    ZZLabelChainModel *_couponsStateModel;
}

+ (id)getReserveString:(id)arg1;
+ (double)exactHeightForLiveNotice:(id)arg1;
+ (double)estimatedHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool added; // @synthesize added=_added;
@property(retain, nonatomic) ZZLabelChainModel *couponsStateModel; // @synthesize couponsStateModel=_couponsStateModel;
@property(retain, nonatomic) MMPaddingView *couponsTitleLabel; // @synthesize couponsTitleLabel=_couponsTitleLabel;
@property(retain, nonatomic) FinderLiveNoticeInfo *liveNotice; // @synthesize liveNotice=_liveNotice;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) MMUIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UIView *horizontalSeparatorBar; // @synthesize horizontalSeparatorBar=_horizontalSeparatorBar;
@property(retain, nonatomic) UILabel *reserveCountLabel; // @synthesize reserveCountLabel=_reserveCountLabel;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *liveIconImageView; // @synthesize liveIconImageView=_liveIconImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <MMFinderLiveNoticePromoteListTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAddButtonTapped;
- (void)layoutSubviews;
- (void)updateWithLiveNotice:(id)arg1 added:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

