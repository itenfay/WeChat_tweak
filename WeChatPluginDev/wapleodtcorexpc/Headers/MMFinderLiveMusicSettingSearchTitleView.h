//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, UIImageView;

@interface MMFinderLiveMusicSettingSearchTitleView : UIView
{
    MMUILabel *_titleLabel;
    UIImageView *_sourceIconImg;
    MMUILabel *_sourceLabel;
}

+ (double)preferHeight;
+ (double)preferWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) UIImageView *sourceIconImg; // @synthesize sourceIconImg=_sourceIconImg;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSourceLabel;
- (void)layoutSouceIconImg;
- (void)layoutTitleLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

