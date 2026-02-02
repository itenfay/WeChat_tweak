//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMUIActivityIndicatorView, UIButton, UILabel;

@interface MMFinderLiveConnectMicUserAnchorPkNotificationView : UIView
{
    unsigned long long _direction;
    CDUnknownBlockType _actionBlock;
    UIView *_containerView;
    CAGradientLayer *_gradientLayer;
    double _gradientLayerTransparentLocation;
    UILabel *_pkLabel;
    UILabel *_pkSubLabel;
    UIButton *_pkButton;
    MMUIActivityIndicatorView *_pkLoadingView;
    unsigned long long _pkState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long pkState; // @synthesize pkState=_pkState;
@property(retain, nonatomic) MMUIActivityIndicatorView *pkLoadingView; // @synthesize pkLoadingView=_pkLoadingView;
@property(retain, nonatomic) UIButton *pkButton; // @synthesize pkButton=_pkButton;
@property(retain, nonatomic) UILabel *pkSubLabel; // @synthesize pkSubLabel=_pkSubLabel;
@property(retain, nonatomic) UILabel *pkLabel; // @synthesize pkLabel=_pkLabel;
@property(nonatomic) double gradientLayerTransparentLocation; // @synthesize gradientLayerTransparentLocation=_gradientLayerTransparentLocation;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
- (void)showButtonLoading:(_Bool)arg1;
- (void)refreshGradient;
- (void)updateWithPkInfo:(id)arg1;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

