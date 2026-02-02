//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, WCFinderProfileMJTempModel;

@interface WCFinderProfileMJTempCell : UICollectionViewCell
{
    WCFinderProfileMJTempModel *_tempObj;
    UIImageView *_coverView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
}

+ (double)imageDisplayScaleWithWidth:(double)arg1 height:(double)arg2;
+ (double)displayHeightForContentVM:(id)arg1 width:(double)arg2 descFont:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) WCFinderProfileMJTempModel *tempObj; // @synthesize tempObj=_tempObj;
- (void)doLayout;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

