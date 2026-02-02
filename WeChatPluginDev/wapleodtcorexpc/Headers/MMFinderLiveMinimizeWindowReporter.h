//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MMFinderLiveMinimizeWindowReporterDelegate;

@interface MMFinderLiveMinimizeWindowReporter : NSObject
{
    id <MMFinderLiveMinimizeWindowReporterDelegate> _delegate;
    unsigned long long _minimizeStartTime;
    unsigned long long _lastPauseTime;
    unsigned long long _pauseDuration;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long pauseDuration; // @synthesize pauseDuration=_pauseDuration;
@property(nonatomic) unsigned long long lastPauseTime; // @synthesize lastPauseTime=_lastPauseTime;
@property(nonatomic) unsigned long long minimizeStartTime; // @synthesize minimizeStartTime=_minimizeStartTime;
@property(nonatomic) __weak id <MMFinderLiveMinimizeWindowReporterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearLastDatas;
- (void)onMinimizeWindowResume;
- (void)onMinimizeWindowPause;
- (id)audienceLogReporter;
- (void)reportForCloseMinimizeWindow;
- (void)reportForStopMinimizeWindowForLive:(unsigned long long)arg1;
- (void)reportForStartMinimizeWindowFrom:(unsigned long long)arg1 sizeType:(unsigned long long)arg2 liveType:(unsigned long long)arg3;

@end

