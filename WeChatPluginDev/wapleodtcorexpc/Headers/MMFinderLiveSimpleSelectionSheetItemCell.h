//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUIImageView, MMUILabel;

@interface MMFinderLiveSimpleSelectionSheetItemCell : UITableViewCell
{
    MMUILabel *_detailTitleLabel;
    MMUILabel *_detailDescriptionLabel;
    MMUIImageView *_selectStatusImageView;
}

+ (id)reuseId;
+ (double)cellHeightWithItem:(id)arg1 maxWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIImageView *selectStatusImageView; // @synthesize selectStatusImageView=_selectStatusImageView;
@property(retain, nonatomic) MMUILabel *detailDescriptionLabel; // @synthesize detailDescriptionLabel=_detailDescriptionLabel;
@property(retain, nonatomic) MMUILabel *detailTitleLabel; // @synthesize detailTitleLabel=_detailTitleLabel;
- (void)setShowCheckmark:(_Bool)arg1;
- (void)layoutSubviews;
- (void)configWithItem:(id)arg1;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

