//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol WCFinderLottieImgBackgroundViewDelegate;

@interface WCFinderLottieImgBackgroundView : UIView
{
    id <WCFinderLottieImgBackgroundViewDelegate> _delegate;
    UIImageView *_imgBackgroundView;
    UIImageView *_arrowImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_leftImageView;
    UIImageView *_leftTopImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *leftTopImageView; // @synthesize leftTopImageView=_leftTopImageView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImageView *imgBackgroundView; // @synthesize imgBackgroundView=_imgBackgroundView;
@property(nonatomic) __weak id <WCFinderLottieImgBackgroundViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutAllSubviews;
- (void)updateWithLeftImgName:(id)arg1 leftTopImgName:(id)arg2 bgImgName:(id)arg3 title:(id)arg4 subTitle:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end

