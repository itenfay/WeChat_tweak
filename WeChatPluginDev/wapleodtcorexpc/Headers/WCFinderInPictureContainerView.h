//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface WCFinderInPictureContainerView : UIView
{
    UIView *_gradientView;
    UIButton *_closeButton;
    UIView *_playerView;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
- (void)updateTipsLabelWith:(id)arg1 hidden:(_Bool)arg2;
- (void)pauseVideo;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 playerView:(id)arg2 targetVC:(id)arg3;

@end

