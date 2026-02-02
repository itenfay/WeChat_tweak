//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCFinderConfiguration : NSObject
{
    unsigned long long _liveNoticeStateRefreshInterval;
    unsigned long long _adContactRefreshInterval;
    long long _nearbyLivePrefetchInterval;
    long long _liveTabPrefetchInterval;
    NSMutableDictionary *_liveDict;
    NSMutableDictionary *_liveNoticeDict;
    NSMutableDictionary *_adContactDict;
    NSMutableDictionary *_nearbyLivePrefetchDict;
    NSMutableDictionary *_liveTabPrefetchTimeDict;
    NSMutableDictionary *_liveShareStatusRefreshIntevalDict;
    NSMutableDictionary *_liveAutoPlayControlFlagDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *liveAutoPlayControlFlagDict; // @synthesize liveAutoPlayControlFlagDict=_liveAutoPlayControlFlagDict;
@property(retain, nonatomic) NSMutableDictionary *liveShareStatusRefreshIntevalDict; // @synthesize liveShareStatusRefreshIntevalDict=_liveShareStatusRefreshIntevalDict;
@property(retain, nonatomic) NSMutableDictionary *liveTabPrefetchTimeDict; // @synthesize liveTabPrefetchTimeDict=_liveTabPrefetchTimeDict;
@property(retain, nonatomic) NSMutableDictionary *nearbyLivePrefetchDict; // @synthesize nearbyLivePrefetchDict=_nearbyLivePrefetchDict;
@property(retain, nonatomic) NSMutableDictionary *adContactDict; // @synthesize adContactDict=_adContactDict;
@property(retain, nonatomic) NSMutableDictionary *liveNoticeDict; // @synthesize liveNoticeDict=_liveNoticeDict;
@property(retain, nonatomic) NSMutableDictionary *liveDict; // @synthesize liveDict=_liveDict;
@property(nonatomic) long long liveTabPrefetchInterval; // @synthesize liveTabPrefetchInterval=_liveTabPrefetchInterval;
@property(nonatomic) long long nearbyLivePrefetchInterval; // @synthesize nearbyLivePrefetchInterval=_nearbyLivePrefetchInterval;
@property(nonatomic) unsigned long long adContactRefreshInterval; // @synthesize adContactRefreshInterval=_adContactRefreshInterval;
@property(nonatomic) unsigned long long liveNoticeStateRefreshInterval; // @synthesize liveNoticeStateRefreshInterval=_liveNoticeStateRefreshInterval;
- (id)currentLiveShareSupportSquareJumpPrefetchData:(id)arg1 scene:(unsigned int)arg2;
- (_Bool)currentLiveShareSupportSquareJumpPrefetchFlag:(id)arg1 scene:(unsigned int)arg2;
- (void)updateLiveShareSupportSquareJumpPrefetchInfo:(id)arg1 scene:(unsigned int)arg2 controlFlag:(_Bool)arg3 jumpNavliveBuffer:(id)arg4;
- (id)liveShareSupportSquareJumpPrefetchKey:(id)arg1 scene:(unsigned int)arg2 isControlFlag:(_Bool)arg3;
- (_Bool)currentLiveShareSupportJumpFlag:(id)arg1;
- (void)updateLiveShareSupportJumpFlag:(id)arg1 controlFlag:(_Bool)arg2;
- (id)liveShareSupportJumpFlagKey:(id)arg1;
- (void)resetLiveAutoPlayControlFlagDict;
- (unsigned int)currentLiveAutoPlayControlFlag:(id)arg1;
- (_Bool)updateLiveAutoPlayControlFlag:(id)arg1 controlFlag:(unsigned int)arg2;
- (void)resetLiveShareStatusRefreshIntevalDict;
- (double)currentLiveShareStatusRefreshInteval:(id)arg1;
- (_Bool)updateLiveShareStatusRefreshInteval:(id)arg1 refreshInteval:(double)arg2;
- (void)resetLivePrefetchTime;
- (_Bool)canLiveTabPrefetchWithTabId:(unsigned long long)arg1;
- (_Bool)canLiveTabPrefetch;
- (void)refreshLiveTabPrefetchTimestampWithTabId:(unsigned long long)arg1;
- (_Bool)canNearbyLivePrefetchWithPullType:(unsigned long long)arg1;
- (void)refreshNearbyLivePrefetchTimestampWithPullType:(unsigned long long)arg1;
- (void)updateAdContact:(id)arg1;
- (id)getAdContactFromLocalWithUsername:(id)arg1;
- (_Bool)shouldUseLocalAdContactWithUsername:(id)arg1;
- (void)updateLiveNoticeInfo:(id)arg1;
- (unsigned long long)getLiveNoticeReserveStateFromLocalWithNoticeId:(id)arg1;
- (_Bool)shouldUseLocalLiveNoticeReserveStateWithNoticeId:(id)arg1;
- (unsigned long long)getLiveStatusFromLocalWithLiveId:(id)arg1;
- (_Bool)shouldUseLocalLiveStatusWithLiveId:(id)arg1;
- (id)init;

@end

