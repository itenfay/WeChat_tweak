//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer, WCFinderUserPrefetchRelatedInfo;
@protocol WCFinderPrefetchModelDelegate;

@interface WCFinderPrefetchModel : NSObject
{
    id <WCFinderPrefetchModelDelegate> _delegate;
    WCFinderUserPrefetchRelatedInfo *_userRelatedInfo;
    NSTimer *_updateTimer;
    unsigned long long _scene;
    NSMutableArray *_probMatrix;
    NSMutableArray *_timeProbArray;
    unsigned long long _lastForegroundPrefetchTimestamp;
    NSTimer *_prefetchTimer;
}

+ (id)prefetchConfigWithScene:(unsigned long long)arg1;
+ (id)MMKVKeyWithPrfetchScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *prefetchTimer; // @synthesize prefetchTimer=_prefetchTimer;
@property(nonatomic) unsigned long long lastForegroundPrefetchTimestamp; // @synthesize lastForegroundPrefetchTimestamp=_lastForegroundPrefetchTimestamp;
@property(retain, nonatomic) NSMutableArray *timeProbArray; // @synthesize timeProbArray=_timeProbArray;
@property(retain, nonatomic) NSMutableArray *probMatrix; // @synthesize probMatrix=_probMatrix;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) __weak NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) WCFinderUserPrefetchRelatedInfo *userRelatedInfo; // @synthesize userRelatedInfo=_userRelatedInfo;
@property(nonatomic) __weak id <WCFinderPrefetchModelDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getPrefetchSceneWithLastFeature:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
- (void)onWechatEnterBackground:(id)arg1;
- (void)onWechatEnterForeground:(id)arg1;
- (void)foregroundPrefetchNow;
- (void)foregroundPrefetchIfNeeded;
- (void)enablePrefetchTimerIfNeeded;
- (void)addCountFromScene:(unsigned long long)arg1 toScene:(unsigned long long)arg2;
- (void)calculateTimeRelatedDataWithConfig:(id)arg1;
- (void)calculateProbMatrixWithConfig:(id)arg1;
- (void)resumeModel;
- (_Bool)isPrefetchSwitchOn;
- (double)probDueToSeriesWithConfig:(id)arg1;
- (double)probDueToTime:(unsigned long long)arg1 config:(id)arg2;
- (double)currentEnterProbWithCurrentTimestamp:(unsigned long long)arg1 config:(id)arg2;
- (double)enterProbBaseOnActionSeries;
- (double)enterProbBaseOnTime;
- (double)currentEnterProb;
- (void)updateUserRelatedInfoIfNeeded:(unsigned long long)arg1 config:(id)arg2;
- (_Bool)shouldPrefetchNow;
- (void)updateModel;
- (void)save;
- (void)dealloc;
- (id)initWithPrefetchScene:(unsigned long long)arg1;

@end

