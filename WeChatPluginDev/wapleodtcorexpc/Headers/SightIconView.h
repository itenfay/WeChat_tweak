//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, NSMutableDictionary, UIColor, UIImageView;
@protocol SightIconViewDelegate;

@interface SightIconView : UIView
{
    int m_iconType;
    MMTimer *m_timer;
    double m_progress;
    double m_targetProgress;
    double m_progressStep;
    double m_forceStep;
    double m_animIntermediate;
    double m_animIntermediate2;
    id <SightIconViewDelegate> m_delegate;
    _Bool _useBigIconForPlay;
    _Bool _addRoundBorder;
    _Bool _enableBlurEffect;
    int m_targetIconType;
    double m_radius;
    UIColor *_bgColor;
    UIColor *_barColor;
    UIColor *_staticIconFnColor;
    UIColor *_dynamicIconFnColor;
    UIColor *_dynamicIconBgColor;
    UIColor *_dynamicBgColor;
    UIColor *_exclaIconColor;
    UIView *_blurView;
    UIView *_bgView;
    UIColor *_pressColor;
    UIImageView *_iconImageView;
    UIColor *_blurColor;
    NSMutableDictionary *_iconTypeRadius;
    NSMutableDictionary *_iconTypeColor;
    NSMutableDictionary *_iconTypeShadow;
}

+ (id)defaultIcon:(struct CGRect)arg1 type:(int)arg2;
+ (id)PlayBtnOperation:(struct CGRect)arg1 color:(id)arg2;
+ (id)PlayBtnOperation:(struct CGRect)arg1;
+ (id)PlayBtnCover:(struct CGRect)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *iconTypeShadow; // @synthesize iconTypeShadow=_iconTypeShadow;
@property(retain, nonatomic) NSMutableDictionary *iconTypeColor; // @synthesize iconTypeColor=_iconTypeColor;
@property(retain, nonatomic) NSMutableDictionary *iconTypeRadius; // @synthesize iconTypeRadius=_iconTypeRadius;
@property(nonatomic) _Bool enableBlurEffect; // @synthesize enableBlurEffect=_enableBlurEffect;
@property(retain, nonatomic) UIColor *blurColor; // @synthesize blurColor=_blurColor;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIColor *pressColor; // @synthesize pressColor=_pressColor;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) _Bool addRoundBorder; // @synthesize addRoundBorder=_addRoundBorder;
@property(nonatomic) _Bool useBigIconForPlay; // @synthesize useBigIconForPlay=_useBigIconForPlay;
@property(retain, nonatomic) UIColor *exclaIconColor; // @synthesize exclaIconColor=_exclaIconColor;
@property(retain, nonatomic) UIColor *dynamicBgColor; // @synthesize dynamicBgColor=_dynamicBgColor;
@property(retain, nonatomic) UIColor *dynamicIconBgColor; // @synthesize dynamicIconBgColor=_dynamicIconBgColor;
@property(retain, nonatomic) UIColor *dynamicIconFnColor; // @synthesize dynamicIconFnColor=_dynamicIconFnColor;
@property(retain, nonatomic) UIColor *staticIconFnColor; // @synthesize staticIconFnColor=_staticIconFnColor;
@property(retain, nonatomic) UIColor *barColor; // @synthesize barColor=_barColor;
@property(nonatomic) __weak id <SightIconViewDelegate> delegate; // @synthesize delegate=m_delegate;
@property(nonatomic) double radius; // @synthesize radius=m_radius;
@property(nonatomic) int iconType; // @synthesize iconType=m_targetIconType;
@property(nonatomic) double progressStep; // @synthesize progressStep=m_progressStep;
@property(nonatomic) double progress; // @synthesize progress=m_targetProgress;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateAnimation;
- (void)stopTimer;
- (void)startTimer;
- (void)drawPauseWithRadius:(double)arg1;
- (void)drawDownloadWithRadius:(double)arg1;
- (void)drawTriangleWithRadius:(double)arg1;
- (void)drawExclaFilledWithRadius:(double)arg1;
- (void)drawExclaWithRadius:(double)arg1;
- (void)drawWheelWithRadius:(double)arg1;
- (void)drawProgressWithContext:(struct CGContext *)arg1 Radius:(double)arg2 Progress:(double)arg3;
- (void)drawRoundBackgroundWithContext:(struct CGContext *)arg1 Radius:(double)arg2;
- (void)drawNonAnimIcon;
- (void)drawRect:(struct CGRect)arg1;
- (void)displayCurView;
- (_Bool)shadowForIconType:(int)arg1;
- (id)colorForIconType:(int)arg1;
- (double)radiusForIconType:(int)arg1;
- (void)setStaticIconBackgroundWithRadius:(double)arg1;
- (void)setBgViewColor:(id)arg1;
- (void)setIconWithImage:(id)arg1 Radius:(double)arg2 Color:(id)arg3 transform:(struct CGAffineTransform)arg4;
- (void)setIconWithImage:(id)arg1 Radius:(double)arg2 Color:(id)arg3;
- (void)setIconType:(int)arg1 shadow:(_Bool)arg2;
- (void)setIconType:(int)arg1 color:(id)arg2;
- (void)setIconType:(int)arg1 andRadius:(double)arg2;
- (double)getCurrentProgressValue;
- (void)forceSetProgressInCommonModesFrom:(double)arg1 toProgress:(double)arg2;
- (void)forceSetProgressInCommonModes;
- (void)forceSetProgressFrom:(double)arg1 toProgress:(double)arg2;
- (void)fullRunWithTime:(double)arg1;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
- (void)dealloc;
- (void)layoutSubviews;
- (void)commInit;
- (id)initWithFrame:(struct CGRect)arg1 blurColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

