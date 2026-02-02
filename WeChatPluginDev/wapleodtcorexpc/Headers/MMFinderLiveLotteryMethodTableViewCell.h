//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMFinderLiveLotteryMethodDataItem, MMUILabel, UIImageView, UIView;

@interface MMFinderLiveLotteryMethodTableViewCell : UITableViewCell
{
    MMFinderLiveLotteryMethodDataItem *_lotteryMethodDataItem;
    MMUILabel *_titleLabel;
    MMUILabel *_stateLabel;
    UIImageView *_selectStateImg;
    UIView *_sepelateLine;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *sepelateLine; // @synthesize sepelateLine=_sepelateLine;
@property(retain, nonatomic) UIImageView *selectStateImg; // @synthesize selectStateImg=_selectStateImg;
@property(retain, nonatomic) MMUILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMFinderLiveLotteryMethodDataItem *lotteryMethodDataItem; // @synthesize lotteryMethodDataItem=_lotteryMethodDataItem;
- (void)layoutUnNormalUI;
- (void)layoutNormalUI;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

