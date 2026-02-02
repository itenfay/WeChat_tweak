//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCFinderPIPMgrHelper
{
    _Bool _hasReportedBackground;
    _Bool _hasReportedForeground;
    double _startTotalPlaybackTime;
    double _currentTotalPlaybackTime;
    NSMutableDictionary *_timeDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *timeDic; // @synthesize timeDic=_timeDic;
@property(nonatomic) double currentTotalPlaybackTime; // @synthesize currentTotalPlaybackTime=_currentTotalPlaybackTime;
@property(nonatomic) double startTotalPlaybackTime; // @synthesize startTotalPlaybackTime=_startTotalPlaybackTime;
@property(nonatomic) _Bool hasReportedForeground; // @synthesize hasReportedForeground=_hasReportedForeground;
@property(nonatomic) _Bool hasReportedBackground; // @synthesize hasReportedBackground=_hasReportedBackground;
- (void)addTotalTime:(double)arg1 tid:(id)arg2;
- (void)resetTotalTime;
- (void)setStartTime:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

