//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, UIButton, UIImageView, UILabel;
@protocol WCFinderProfileJustWatchTipsViewDelegate;

@interface WCFinderProfileJustWatchTipsView : UIView
{
    long long _style;
    id <WCFinderProfileJustWatchTipsViewDelegate> _delegate;
    CDUnknownBlockType _action;
    UIButton *_backgroundButton;
    UIImageView *_arrowImageView;
    MMUIActivityIndicatorView *_loadingView;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) __weak id <WCFinderProfileJustWatchTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)onBackgroundButtonClick;
- (void)reCreateRoundCornersLayer;
- (_Bool)isLoadingViewShowing;
- (void)doLayoutSubviews;
- (void)showLoadingView;
- (void)showTitleLabel:(id)arg1;
- (void)setupSubViews;
- (id)init;

@end

