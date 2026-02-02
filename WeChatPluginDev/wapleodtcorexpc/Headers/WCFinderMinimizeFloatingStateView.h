//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, WCFinderAnimationLoadingView, WCFinderMinimizeFloatingAudioOnlyView;

@interface WCFinderMinimizeFloatingStateView : UIView
{
    long long _state;
    long long _playType;
    UILabel *_label;
    UIImageView *_iconView;
    WCFinderAnimationLoadingView *_loadingView;
    WCFinderMinimizeFloatingAudioOnlyView *_audioOnlyView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMinimizeFloatingAudioOnlyView *audioOnlyView; // @synthesize audioOnlyView=_audioOnlyView;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) long long playType; // @synthesize playType=_playType;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)switchPlayType;
- (void)layoutSubviews;
- (void)updateUI;

@end

