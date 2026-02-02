//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, UILabel;

@interface IPadAuthSuccessContainView : UIView
{
    double _limitWidth;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    MMWebImageView *_appIconImgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *appIconImgView; // @synthesize appIconImgView=_appIconImgView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double limitWidth; // @synthesize limitWidth=_limitWidth;
- (void)layoutSubviews;
- (void)updateWithAppIconUrl:(id)arg1 nickName:(id)arg2;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

