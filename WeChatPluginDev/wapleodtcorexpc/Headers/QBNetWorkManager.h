//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, QBReachability;

@interface QBNetWorkManager : NSObject
{
    QBReachability *_internetReach;
    int _oldAPN;
    _Bool _hasCachedWifiAddress;
    _Bool _systemProxySet;
    int _apnSubtype;
    int _curAPN;
    long long _mccCode;
    long long _mncCode;
    NSString *_mccmncStr;
}

+ (id)sharedInstance;
@property _Bool systemProxySet; // @synthesize systemProxySet=_systemProxySet;
@property(readonly, nonatomic) int curAPN; // @synthesize curAPN=_curAPN;
@property(retain, nonatomic) NSString *mccmncStr; // @synthesize mccmncStr=_mccmncStr;
@property(nonatomic) int apnSubtype; // @synthesize apnSubtype=_apnSubtype;
@property(nonatomic) long long mncCode; // @synthesize mncCode=_mncCode;
@property(nonatomic) long long mccCode; // @synthesize mccCode=_mccCode;
- (void).cxx_destruct;
- (_Bool)isReachable;
- (void)checkAPNType;
- (void)stopListenNetworkChange;
- (void)startListenNetworkChange;
- (long long)networkStatus;
- (void)mttNetworkReachabilityChanged:(id)arg1;
- (void)getApnSubtype:(id)arg1;
- (void)notifyOtherModules;
- (void)updateAPN:(int)arg1;
- (void)checkNetworkStatus;
@property(readonly, nonatomic) NSString *apnString;
- (id)internetReach;
- (id)init;

@end

