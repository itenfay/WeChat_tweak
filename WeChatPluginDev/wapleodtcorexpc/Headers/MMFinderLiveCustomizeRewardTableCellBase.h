//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface MMFinderLiveCustomizeRewardTableCellBase : UITableViewCell
{
    _Bool _showTopCorners;
    _Bool _showBottomCorners;
    _Bool _rewardInfoEnable;
    UIView *_containerView;
    UIImageView *_rightChevronView;
    UIView *_sepLine;
    UIView *_highlightView;
    UIImageView *_thumbnailView;
    UILabel *_nameLabel;
    UILabel *_rewardPriceLabel;
    UIImageView *_coinIconView;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *coinIconView; // @synthesize coinIconView=_coinIconView;
@property(retain, nonatomic) UILabel *rewardPriceLabel; // @synthesize rewardPriceLabel=_rewardPriceLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(nonatomic) _Bool rewardInfoEnable; // @synthesize rewardInfoEnable=_rewardInfoEnable;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIView *sepLine; // @synthesize sepLine=_sepLine;
@property(retain, nonatomic) UIImageView *rightChevronView; // @synthesize rightChevronView=_rightChevronView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool showBottomCorners; // @synthesize showBottomCorners=_showBottomCorners;
@property(nonatomic) _Bool showTopCorners; // @synthesize showTopCorners=_showTopCorners;
- (void)setRewardInfoWithThumbUrl:(id)arg1 rewardName:(id)arg2 rewardPrice:(float)arg3;
@property(nonatomic) _Bool showSepLine;
- (void)layoutSubviewsForRewardInfo;
- (void)layoutSubviewsForStyle;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initSubviewsForRewardInfo;
- (void)initSubviewsForStyle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

