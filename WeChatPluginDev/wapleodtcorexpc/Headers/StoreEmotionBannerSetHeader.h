//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMUILabel, MMWebImageView;

@interface StoreEmotionBannerSetHeader : UICollectionReusableView
{
    MMWebImageView *_iconView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
}

+ (double)preferredHeightFor:(id)arg1 withWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
- (void)layoutSubviews;
- (void)updateWith:(id)arg1;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

