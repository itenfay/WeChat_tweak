//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, UIImageView;

@interface WCLabsSettingHeaderView : UIView
{
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    UIImageView *_leftBGIcon;
    UIImageView *_rightBGIcon;
    UIImageView *_labsIcon;
}

+ (double)height;
- (void).cxx_destruct;
- (void)initDescLabel;
- (void)initTitleLabel;
- (void)initLabsIcon;
- (void)initBackground;
- (double)getTitleFontSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

