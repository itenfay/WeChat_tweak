//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, UIImageView;

@interface WCLiveBlurButtonBackView : UIView
{
    UIImageView *_blurImgView;
    MMUIButton *_topButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *topButton; // @synthesize topButton=_topButton;
@property(retain, nonatomic) UIImageView *blurImgView; // @synthesize blurImgView=_blurImgView;
- (void)setBlurImage:(id)arg1;
- (void)recoverRealTimeBlur;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutTopButton;
- (void)layoutBlurImgView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

