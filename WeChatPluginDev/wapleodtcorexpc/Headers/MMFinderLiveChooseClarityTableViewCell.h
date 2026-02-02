//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMFinderLiveChooseClarityDataItem, MMUILabel, UIImageView, UIView;

@interface MMFinderLiveChooseClarityTableViewCell : UITableViewCell
{
    MMFinderLiveChooseClarityDataItem *_clarityMethodDataItem;
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
@property(retain, nonatomic) MMFinderLiveChooseClarityDataItem *clarityMethodDataItem; // @synthesize clarityMethodDataItem=_clarityMethodDataItem;
- (void)layoutNormalUI;
- (void)layoutUI;
- (void)createUI;
- (void)setclarityMethodDataItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

