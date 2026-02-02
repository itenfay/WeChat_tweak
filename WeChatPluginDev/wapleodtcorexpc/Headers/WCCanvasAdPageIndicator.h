//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CADisplayLink, UIColor;

@interface WCCanvasAdPageIndicator : UIView
{
    _Bool _nextPageRunningFlag;
    _Bool _fillCurrentRunningFlag;
    long long _numberOfPages;
    double _progressOfTotal;
    double _progressOfCurrent;
    CADisplayLink *_displayLink;
    long long _nextPageStartPage;
    double _nextPageStartTimeMs;
    double _nextPageDuration;
    double _nextPageProgressOfStartPage;
    double _nextPageProgressOfNextPage;
    double _fillCurrentStartProgress;
    double _fillCurrentStartTimeMs;
    double _fillCurrentDuration;
    UIColor *_indicatorColorBg;
    UIColor *_indicatorColorBorder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *indicatorColorBorder; // @synthesize indicatorColorBorder=_indicatorColorBorder;
@property(retain, nonatomic) UIColor *indicatorColorBg; // @synthesize indicatorColorBg=_indicatorColorBg;
@property(nonatomic) double fillCurrentDuration; // @synthesize fillCurrentDuration=_fillCurrentDuration;
@property(nonatomic) double fillCurrentStartTimeMs; // @synthesize fillCurrentStartTimeMs=_fillCurrentStartTimeMs;
@property(nonatomic) double fillCurrentStartProgress; // @synthesize fillCurrentStartProgress=_fillCurrentStartProgress;
@property(nonatomic) _Bool fillCurrentRunningFlag; // @synthesize fillCurrentRunningFlag=_fillCurrentRunningFlag;
@property(nonatomic) double nextPageProgressOfNextPage; // @synthesize nextPageProgressOfNextPage=_nextPageProgressOfNextPage;
@property(nonatomic) double nextPageProgressOfStartPage; // @synthesize nextPageProgressOfStartPage=_nextPageProgressOfStartPage;
@property(nonatomic) double nextPageDuration; // @synthesize nextPageDuration=_nextPageDuration;
@property(nonatomic) double nextPageStartTimeMs; // @synthesize nextPageStartTimeMs=_nextPageStartTimeMs;
@property(nonatomic) long long nextPageStartPage; // @synthesize nextPageStartPage=_nextPageStartPage;
@property(nonatomic) _Bool nextPageRunningFlag; // @synthesize nextPageRunningFlag=_nextPageRunningFlag;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double progressOfCurrent; // @synthesize progressOfCurrent=_progressOfCurrent;
@property(nonatomic) double progressOfTotal; // @synthesize progressOfTotal=_progressOfTotal;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void)stopAutoFillCurrent;
- (void)stopAutoNextPage;
- (void)autoFillCurrent:(double)arg1 duration:(double)arg2;
- (void)autoNextPage:(long long)arg1 duration:(double)arg2 progressOfStartPage:(double)arg3 progressOfNextPage:(double)arg4;
- (void)autoNextPage:(long long)arg1 duration:(double)arg2;
- (void)displayLinkAutoCheck;
- (void)releaseDisplayLink;
- (void)tryStartDisplayLink;
- (struct CGPath *)makeRoundedRectanglePath:(struct CGRect)arg1;
- (void)drawRoundedRectangle:(struct CGContext *)arg1 rect:(struct CGRect)arg2 fillColor:(id)arg3 strokeColor:(id)arg4 shadowColor:(id)arg5 drawingMode:(int)arg6;
- (void)drawRect:(struct CGRect)arg1;
- (void)setProgressOfTotalInternal:(double)arg1;
- (void)setProgressOfCurrentInternal:(double)arg1;
- (struct CGRect)getSelfFrame;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

