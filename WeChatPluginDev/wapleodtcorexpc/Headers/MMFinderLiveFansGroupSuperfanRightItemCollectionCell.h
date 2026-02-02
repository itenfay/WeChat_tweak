//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMWebImageView, UILabel;

@interface MMFinderLiveFansGroupSuperfanRightItemCollectionCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_descLabel;
    MMWebImageView *_webImageView;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *webImageView; // @synthesize webImageView=_webImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;
- (void)configWithItem:(id)arg1;

@end

