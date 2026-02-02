//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, NSArray, NSMutableArray, NSTimer, UILabel, UIScrollView;
@protocol MMFluencyScoreMgrDelegate;

@interface MMFluencyScoreMgr : NSObject
{
    _Bool _running;
    _Bool _enteredBgWhenRunning;
    _Bool _hitRecord;
    _Bool _hitShowFloat;
    _Bool _hitGenCallTrace;
    float _score;
    int _miss0FrameCount;
    int _miss1FrameCount;
    int _miss2FrameCount;
    int _miss3FrameCount;
    int _miss4FrameCount;
    int _miss5OrMoreFrameCount;
    float _smoothRate;
    float _freezeRate;
    int _callTraceMaxDepth;
    int _callTraceMinCost;
    long long _runningOpType;
    id <MMFluencyScoreMgrDelegate> _runningIDDelegate;
    double _runningBeginTime;
    UIScrollView *_runningScrollView;
    double _beginCallTreeTime;
    double _endCallTreeTime;
    NSTimer *_timer;
    CADisplayLink *_displayLink;
    NSMutableArray *_frameDurations;
    NSMutableArray *_frameStartTimes;
    double _lastTimeInterval;
    UILabel *_scoreLabel;
    double _startTraceTime;
    double _stopTraceTime;
    NSArray *_ocMethodCosts;
    NSArray *_runLoopCosts;
    NSMutableArray *_scoreRecords;
    struct CGPoint _scrollViewBeginContentOffset;
    struct CGPoint _scrollViewBeginVelocity;
    struct CGSize _scrollViewBeginContentSize;
}

+ (id)shared;
- (void).cxx_destruct;
@property(nonatomic) int callTraceMinCost; // @synthesize callTraceMinCost=_callTraceMinCost;
@property(nonatomic) int callTraceMaxDepth; // @synthesize callTraceMaxDepth=_callTraceMaxDepth;
@property(retain, nonatomic) NSMutableArray *scoreRecords; // @synthesize scoreRecords=_scoreRecords;
@property(retain, nonatomic) NSArray *runLoopCosts; // @synthesize runLoopCosts=_runLoopCosts;
@property(retain, nonatomic) NSArray *ocMethodCosts; // @synthesize ocMethodCosts=_ocMethodCosts;
@property(nonatomic) double stopTraceTime; // @synthesize stopTraceTime=_stopTraceTime;
@property(nonatomic) double startTraceTime; // @synthesize startTraceTime=_startTraceTime;
@property(nonatomic) _Bool hitGenCallTrace; // @synthesize hitGenCallTrace=_hitGenCallTrace;
@property(nonatomic) _Bool hitShowFloat; // @synthesize hitShowFloat=_hitShowFloat;
@property(nonatomic) _Bool hitRecord; // @synthesize hitRecord=_hitRecord;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(nonatomic) double lastTimeInterval; // @synthesize lastTimeInterval=_lastTimeInterval;
@property(retain, nonatomic) NSMutableArray *frameStartTimes; // @synthesize frameStartTimes=_frameStartTimes;
@property(retain, nonatomic) NSMutableArray *frameDurations; // @synthesize frameDurations=_frameDurations;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic, getter=isEnteredBgWhenRunning) _Bool enteredBgWhenRunning; // @synthesize enteredBgWhenRunning=_enteredBgWhenRunning;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) float freezeRate; // @synthesize freezeRate=_freezeRate;
@property(nonatomic) float smoothRate; // @synthesize smoothRate=_smoothRate;
@property(nonatomic) int miss5OrMoreFrameCount; // @synthesize miss5OrMoreFrameCount=_miss5OrMoreFrameCount;
@property(nonatomic) int miss4FrameCount; // @synthesize miss4FrameCount=_miss4FrameCount;
@property(nonatomic) int miss3FrameCount; // @synthesize miss3FrameCount=_miss3FrameCount;
@property(nonatomic) int miss2FrameCount; // @synthesize miss2FrameCount=_miss2FrameCount;
@property(nonatomic) int miss1FrameCount; // @synthesize miss1FrameCount=_miss1FrameCount;
@property(nonatomic) int miss0FrameCount; // @synthesize miss0FrameCount=_miss0FrameCount;
@property(nonatomic) float score; // @synthesize score=_score;
@property(nonatomic) double endCallTreeTime; // @synthesize endCallTreeTime=_endCallTreeTime;
@property(nonatomic) double beginCallTreeTime; // @synthesize beginCallTreeTime=_beginCallTreeTime;
@property(nonatomic) struct CGSize scrollViewBeginContentSize; // @synthesize scrollViewBeginContentSize=_scrollViewBeginContentSize;
@property(nonatomic) struct CGPoint scrollViewBeginVelocity; // @synthesize scrollViewBeginVelocity=_scrollViewBeginVelocity;
@property(nonatomic) struct CGPoint scrollViewBeginContentOffset; // @synthesize scrollViewBeginContentOffset=_scrollViewBeginContentOffset;
@property(nonatomic) __weak UIScrollView *runningScrollView; // @synthesize runningScrollView=_runningScrollView;
@property(nonatomic) double runningBeginTime; // @synthesize runningBeginTime=_runningBeginTime;
@property(nonatomic) __weak id <MMFluencyScoreMgrDelegate> runningIDDelegate; // @synthesize runningIDDelegate=_runningIDDelegate;
@property(nonatomic) long long runningOpType; // @synthesize runningOpType=_runningOpType;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
- (void)dealloc;
- (void)checkHitStatus;
- (id)init;
- (void)onApplicationWillResignActiveNotification:(id)arg1;
- (void)showScoreTip;
- (void)removeScoreLabel;
- (void)tap:(id)arg1;
- (void)once:(id)arg1;
- (void)startDisplayLinkIfNeeded;
- (double)calculateDuration:(long long)arg1;
- (void)calculateScore;
- (id)getExtStr;
- (id)fluencyScoreID;
- (unsigned long long)fluencyScoreScene;
- (void)uploadCallTreeIfNeeded;
- (void)reportFluencyScore;
- (void)stopForScroll:(id)arg1 scrollView:(id)arg2;
- (void)stopForScroll;
- (void)startForOpType:(long long)arg1;
- (void)startForScroll:(id)arg1 scrollView:(id)arg2;

@end

