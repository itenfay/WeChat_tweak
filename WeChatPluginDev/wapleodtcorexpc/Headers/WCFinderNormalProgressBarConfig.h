//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor, UIImage;

@interface WCFinderNormalProgressBarConfig : NSObject
{
    _Bool _barCornerRounded;
    _Bool _enablePanProgessIcon;
    _Bool _dragShowLargebar;
    UIColor *_defaultColor;
    UIColor *_inProgressColor;
    UIColor *_inProgressColorInLargeState;
    double _dotSize;
    double _dotSizeInLargeState;
    UIColor *_dotColor;
    UIColor *_dotColorInLargeState;
    double _barHeight;
    double _barHeightInLargeState;
    UIImage *_progressBarIconImage;
}

+ (id)defaultConfig;
- (void).cxx_destruct;
@property(nonatomic) _Bool dragShowLargebar; // @synthesize dragShowLargebar=_dragShowLargebar;
@property(nonatomic) _Bool enablePanProgessIcon; // @synthesize enablePanProgessIcon=_enablePanProgessIcon;
@property(nonatomic) _Bool barCornerRounded; // @synthesize barCornerRounded=_barCornerRounded;
@property(retain, nonatomic) UIImage *progressBarIconImage; // @synthesize progressBarIconImage=_progressBarIconImage;
@property(readonly, nonatomic) double barHeightInLargeState; // @synthesize barHeightInLargeState=_barHeightInLargeState;
@property(nonatomic) double barHeight; // @synthesize barHeight=_barHeight;
@property(readonly, nonatomic) UIColor *dotColorInLargeState; // @synthesize dotColorInLargeState=_dotColorInLargeState;
@property(retain, nonatomic) UIColor *dotColor; // @synthesize dotColor=_dotColor;
@property(readonly, nonatomic) double dotSizeInLargeState; // @synthesize dotSizeInLargeState=_dotSizeInLargeState;
@property(nonatomic) double dotSize; // @synthesize dotSize=_dotSize;
@property(readonly, nonatomic) UIColor *inProgressColorInLargeState; // @synthesize inProgressColorInLargeState=_inProgressColorInLargeState;
@property(retain, nonatomic) UIColor *inProgressColor; // @synthesize inProgressColor=_inProgressColor;
@property(retain, nonatomic) UIColor *defaultColor; // @synthesize defaultColor=_defaultColor;
- (void)setInProgressColor:(id)arg1 inLargeState:(id)arg2;
- (void)setDotColor:(id)arg1 inLargeState:(id)arg2;
- (void)setDotSize:(double)arg1 inLargeState:(double)arg2;
- (void)setBarHeight:(double)arg1 inLargeState:(double)arg2;

@end

