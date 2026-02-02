//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray;

@interface MinimizeIconAndStateView : UIView
{
    NSArray *_icons;
    UIView *_colorMaskView;
}

+ (id)getIconMaskPath:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *colorMaskView; // @synthesize colorMaskView=_colorMaskView;
@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
- (void)startSwitchingAnimation;
- (void)updateLoopIconList:(id)arg1;
- (void)setRoundViewMaskPath:(double)arg1 RoundView:(id)arg2;
- (void)makeSureColorMaskViewInited;
- (void)setMaskColorAlpha:(double)arg1;
- (void)setMaskColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

