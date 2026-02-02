//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMSnackBarConfig, MMUIActivityIndicatorView, MMUILabel, UIImageView, UIViewController;
@protocol MMSnackBarViewDelegate;

@interface MMSnackBarView : UIView
{
    MMSnackBarConfig *_config;
    MMUILabel *_titleLabel;
    MMUILabel *_actionLabel;
    UIImageView *_actionImageView;
    UIImageView *_titleImageView;
    MMUIActivityIndicatorView *_indicator;
    UIView *_actionView;
    id <MMSnackBarViewDelegate> _delegate;
    UIViewController *_currentVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(nonatomic) __weak id <MMSnackBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) MMUIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(retain, nonatomic) UIImageView *actionImageView; // @synthesize actionImageView=_actionImageView;
@property(retain, nonatomic) MMUILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMSnackBarConfig *config; // @synthesize config=_config;
- (void)onOperation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)removeNotification;
- (void)addNotification;
- (void)createOrUpdateLayout;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)calSize;
- (void)applyLayout;
- (id)multiLineStatics:(_Bool)arg1;
- (void)initView;
- (void)dealloc;
- (id)init;

@end

