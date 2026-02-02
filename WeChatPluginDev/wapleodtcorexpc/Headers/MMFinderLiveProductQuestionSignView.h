//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, UIImageView;

@interface MMFinderLiveProductQuestionSignView : UIView
{
    UIImageView *_iconImgView;
    MMUILabel *_signLabel;
}

+ (double)insetTop;
+ (double)iconSignInset;
+ (double)insetRight;
+ (double)insetLeft;
+ (double)signIconHeight;
+ (double)signIconWidth;
+ (id)signLabelFont;
+ (id)productQuestionSignText;
+ (struct CGSize)getProductQuestionSize;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *signLabel; // @synthesize signLabel=_signLabel;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
- (void)layoutSignLabel;
- (void)layoutRankImgView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

@end

