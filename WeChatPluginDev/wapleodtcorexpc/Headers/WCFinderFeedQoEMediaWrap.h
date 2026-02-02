//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderFeedQoEMediaWrap
{
    long long _limitBitrateQoE;
    long long _adajustPreloadDurationQoE;
    double _adajustLimitBufferCountQoE;
    struct FinderQoEReporter _mFinderQoEReporter;
}

+ (void)assignValueToFinderMediaQoEInfo:(id)arg1 finderMediaSpec:(id)arg2 mediaWrap:(id)arg3;
+ (id)mediaWrapWith:(id)arg1 mediaInfosPrelodList:(id)arg2 mediaInfosPlayList:(id)arg3;
@property(nonatomic) struct FinderQoEReporter mFinderQoEReporter; // @synthesize mFinderQoEReporter=_mFinderQoEReporter;
@property(nonatomic) double adajustLimitBufferCountQoE; // @synthesize adajustLimitBufferCountQoE=_adajustLimitBufferCountQoE;
@property(nonatomic) long long adajustPreloadDurationQoE; // @synthesize adajustPreloadDurationQoE=_adajustPreloadDurationQoE;
@property(nonatomic) long long limitBitrateQoE; // @synthesize limitBitrateQoE=_limitBitrateQoE;
- (int)adaptiveAdjustMediaWrap:(id)arg1 mediaPlayedArray:(id)arg2 mediaNeeDecisionArray:(id)arg3 mediaInfo:(id)arg4 fileFormat:(id)arg5;

@end

