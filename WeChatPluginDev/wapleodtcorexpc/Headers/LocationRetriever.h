//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSMutableArray, NSString;
@protocol LocationRetrieveDelegate;

@interface LocationRetriever : NSObject
{
    unsigned long long m_locationTag;
    _Bool m_bCanRepeatReportLocation;
    float m_requiredAccuracy;
    MMTimer *m_checkResultTimer;
    MMTimer *m_retrieveCallbackTimer;
    id <LocationRetrieveDelegate> m_delegate;
    NSMutableArray *m_recentLocationList;
    struct timeval m_tvStart;
    struct timeval m_tvFirst;
    _Bool m_bFirstRetriever;
    unsigned int m_firstRetrieverRange;
    _Bool m_bReport;
    _Bool m_hasRetrieveCallback;
    _Bool m_bShieldAccuracy;
    _Bool _m_bEnableIndoor;
    int m_timeoutCount;
    int _retrieveOverTime;
    int _retrieveCallbackOverTime;
    unsigned long long m_eBusType;
    long long m_geoMode;
    unsigned long long _m_enmLBSDetailLevel;
    NSString *_m_sQMapSubKey;
    unsigned long long _authScene;
}

+ (id)changeEarthLocationToMarsLocation:(id)arg1;
+ (void)cacheGlobalLastLocation:(id)arg1;
+ (id)getGlobalCachedLastLocation;
+ (double)getLocationAccuracy:(id)arg1;
+ (_Bool)isLocationServiceValidWithoutChallengeForAuthScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long authScene; // @synthesize authScene=_authScene;
@property(nonatomic) int retrieveCallbackOverTime; // @synthesize retrieveCallbackOverTime=_retrieveCallbackOverTime;
@property(nonatomic) int retrieveOverTime; // @synthesize retrieveOverTime=_retrieveOverTime;
@property(nonatomic) _Bool m_bEnableIndoor; // @synthesize m_bEnableIndoor=_m_bEnableIndoor;
@property(retain, nonatomic) NSString *m_sQMapSubKey; // @synthesize m_sQMapSubKey=_m_sQMapSubKey;
@property(nonatomic) unsigned long long m_enmLBSDetailLevel; // @synthesize m_enmLBSDetailLevel=_m_enmLBSDetailLevel;
@property(nonatomic) _Bool m_bShieldAccuracy; // @synthesize m_bShieldAccuracy;
@property(nonatomic) long long m_geoMode; // @synthesize m_geoMode;
@property(nonatomic) unsigned long long m_eBusType; // @synthesize m_eBusType;
@property(nonatomic) __weak id <LocationRetrieveDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) int m_timeoutCount; // @synthesize m_timeoutCount;
@property(nonatomic) float m_requiredAccuracy; // @synthesize m_requiredAccuracy;
@property(nonatomic) _Bool m_bCanRepeatReportLocation; // @synthesize m_bCanRepeatReportLocation;
@property(retain, nonatomic) NSMutableArray *m_recentLocationList; // @synthesize m_recentLocationList;
- (id)getTrueLocation:(id)arg1;
- (void)onRetrieveCallbackTimeOut;
- (void)reportRetriever:(id)arg1 retrieverSuccess:(_Bool)arg2 inCache:(_Bool)arg3;
- (void)onHeadingTimeCheck;
- (void)addToRecentLocationList:(id)arg1;
- (id)getBestResultFromLocationList;
- (void)onGpsTimerTimeCheck;
- (_Bool)isLocationOK:(id)arg1;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationError:(int)arg1 withTag:(unsigned long long)arg2;
- (int)getRetrieveOverTime;
- (void)CleanDelegate;
- (void)CancelRetrieveLocation;
- (void)StartRetrieveLocation;
- (id)RetrieveLocationFor:(unsigned long long)arg1;
- (void)RetrieveLocation;
- (void)RetrieveLocationWithoutRequestAuthorization;
- (void)dealloc;
- (void)Reset;
- (void)stopRetrieveCallbackTimer;
- (void)stopCheckTimer;
- (id)initWithDelegate:(id)arg1 authScene:(unsigned long long)arg2;

@end

