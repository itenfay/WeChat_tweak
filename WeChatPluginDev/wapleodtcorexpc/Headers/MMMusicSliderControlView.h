//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMMusicSlider, MMTimer, MMUILabel, NSString, UIColor;

@interface MMMusicSliderControlView : UIView
{
    MMMusicSlider *_slider;
    UIColor *_frontgroundColor;
    UIColor *_backgroundColor;
    MMUILabel *_currentTimeLabel;
    MMUILabel *_totalTimeLabel;
    MMTimer *_musicProgressTimer;
    NSString *_curMusicID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *curMusicID; // @synthesize curMusicID=_curMusicID;
@property(retain, nonatomic) MMTimer *musicProgressTimer; // @synthesize musicProgressTimer=_musicProgressTimer;
@property(retain, nonatomic) MMUILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) MMUILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *frontgroundColor; // @synthesize frontgroundColor=_frontgroundColor;
@property(retain, nonatomic) MMMusicSlider *slider; // @synthesize slider=_slider;
- (_Bool)isMusicEmpty;
- (void)onMusicPlayStatusChanged;
- (void)updateSlider:(id)arg1;
- (void)updateTotalTimeLabel;
- (void)onSliderScrubbEnd;
- (void)onSliderChange;
- (void)onSliderScrubbBegin;
- (void)stopMusicProgressTimer;
- (void)startMusicProgressTimer;
- (void)updateMusicProgress;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 backgroundColor:(id)arg2 frontgroundColor:(id)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

