//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMWebImageView, UIColor, UILabel, UIView;

@interface WCFinderNearbyLiveMoreLiveHeaderView : UICollectionViewCell
{
    UIColor *_textColor;
    UIView *_verticalLineView;
    MMWebImageView *_iconImage;
    UILabel *_titleLabel;
}

+ (double)cellHeightWithOtherTopMargin:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIView *verticalLineView; // @synthesize verticalLineView=_verticalLineView;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void)layoutUI;
- (void)setupUI;
- (void)updateWithTitle:(id)arg1 iconUrl:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

