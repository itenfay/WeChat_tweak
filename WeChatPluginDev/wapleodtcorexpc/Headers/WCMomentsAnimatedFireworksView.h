//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, NSArray, NSMutableArray;

@interface WCMomentsAnimatedFireworksView : UIView
{
    _Bool _isPlaying;
    unsigned long long _displayCountPerTrigger;
    double _triggerTimeInterval;
    NSArray *_fireworkSizeList;
    NSArray *_fireworkDisplayableRectList;
    NSMutableArray *_playingFireworkViews;
    MMTimer *_triggerTimer;
}

+ (id)defaultFireworkSizeList;
+ (struct CGPoint)generateRandomPointInRect:(struct CGRect)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *triggerTimer; // @synthesize triggerTimer=_triggerTimer;
@property(retain, nonatomic) NSMutableArray *playingFireworkViews; // @synthesize playingFireworkViews=_playingFireworkViews;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(copy, nonatomic) NSArray *fireworkDisplayableRectList; // @synthesize fireworkDisplayableRectList=_fireworkDisplayableRectList;
@property(copy, nonatomic) NSArray *fireworkSizeList; // @synthesize fireworkSizeList=_fireworkSizeList;
@property(nonatomic) double triggerTimeInterval; // @synthesize triggerTimeInterval=_triggerTimeInterval;
@property(nonatomic) unsigned long long displayCountPerTrigger; // @synthesize displayCountPerTrigger=_displayCountPerTrigger;
- (struct CGPoint)generateRandomPoint;
- (struct CGSize)generateRandomSize;
- (void)_stopAllPlayingFireworkViews;
- (void)fireworkViewDidFinishAnimating:(id)arg1;
- (void)_handleTriggerTimer:(id)arg1;
- (void)_stopTriggerTimer;
- (void)_startTriggerTimer;
- (void)stopPlaying;
- (void)startPlaying;
- (void)layoutAnimatedFireworkView:(id)arg1;
- (id)createAnimatedFireworkView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

