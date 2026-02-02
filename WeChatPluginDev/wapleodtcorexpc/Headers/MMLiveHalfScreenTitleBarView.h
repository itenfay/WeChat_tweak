//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, NSString, UIImage;
@protocol MMLiveHalfScreenTitleBarViewDelegate;

@interface MMLiveHalfScreenTitleBarView : UIView
{
    _Bool _forceDarkMode;
    id <MMLiveHalfScreenTitleBarViewDelegate> _delegate;
    NSString *_title;
    NSString *_subTitle;
    UIImage *_leftButtonImage;
    MMUIButton *_closeBtn;
    UIView *_titleView;
    UIView *_indicatorView;
    UIView *_backgroundView;
    double _indicatorViewRightMargin;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceDarkMode; // @synthesize forceDarkMode=_forceDarkMode;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double indicatorViewRightMargin; // @synthesize indicatorViewRightMargin=_indicatorViewRightMargin;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIImage *leftButtonImage; // @synthesize leftButtonImage=_leftButtonImage;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <MMLiveHalfScreenTitleBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickLeftButton:(id)arg1;
- (void)setTitleLabelColor:(id)arg1;
- (void)setTitleLabelFont:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 forceDarkMode:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

