//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSTimer;

@interface QBIPListManager : NSObject
{
    _Bool _hasGetIPList;
    _Bool _isDefaultUseProxy;
    _Bool _hadGetIPList;
    _Bool _hadFetchedIplist;
    int _spdy_bProxy;
    NSMutableDictionary *_ssidToIpTypeDicts;
    long long _spdyEnableFlag;
    NSString *_currentSSID;
    NSString *_gettingIpListSSID;
    NSTimer *_getIpListTimer;
    NSTimer *_iplistFrequencyControlTimer;
    long long _iplistFrequencyControlCount;
    NSString *_spdyStartIp;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool hadFetchedIplist; // @synthesize hadFetchedIplist=_hadFetchedIplist;
@property(retain, nonatomic) NSString *spdyStartIp; // @synthesize spdyStartIp=_spdyStartIp;
@property(nonatomic) long long iplistFrequencyControlCount; // @synthesize iplistFrequencyControlCount=_iplistFrequencyControlCount;
@property(retain, nonatomic) NSTimer *iplistFrequencyControlTimer; // @synthesize iplistFrequencyControlTimer=_iplistFrequencyControlTimer;
@property(retain) NSTimer *getIpListTimer; // @synthesize getIpListTimer=_getIpListTimer;
@property(retain) NSString *gettingIpListSSID; // @synthesize gettingIpListSSID=_gettingIpListSSID;
@property(retain) NSString *currentSSID; // @synthesize currentSSID=_currentSSID;
@property(nonatomic) long long spdyEnableFlag; // @synthesize spdyEnableFlag=_spdyEnableFlag;
@property(retain, nonatomic) NSMutableDictionary *ssidToIpTypeDicts; // @synthesize ssidToIpTypeDicts=_ssidToIpTypeDicts;
@property _Bool hadGetIPList; // @synthesize hadGetIPList=_hadGetIPList;
@property _Bool isDefaultUseProxy; // @synthesize isDefaultUseProxy=_isDefaultUseProxy;
@property int spdy_bProxy; // @synthesize spdy_bProxy=_spdy_bProxy;
- (void).cxx_destruct;
- (id)getWupProxyServer;
- (id)getSPDYServer;
- (_Bool)failCurrentIpOfType:(int)arg1;
- (void)getIpListFrequencyControl;
- (void)clearFrequencyControlTimer;
- (id)getCurrentIpOfType:(int)arg1;
- (void)statSpdyStartIp;
- (void)saveDataToFileAndClear;
- (void)saveIpLists:(id)arg1 apnType:(id)arg2 ipType:(long long)arg3 totalPollNum:(long long)arg4 lifePeriod:(long long)arg5;
- (void)getIPListWhenAPNChanged:(_Bool)arg1;
- (id)getMobileNetworkSSID;
- (_Bool)haveToGetIpList;
- (void)getIpListFromServer:(id)arg1;
@property(readonly, nonatomic) _Bool spdyAvailable;
- (void)disableSpdy;
- (void)enableSpdy;
- (void)dealloc;
- (id)init;

@end

