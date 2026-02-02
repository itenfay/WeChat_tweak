//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FLVNetworkInfo : NSObject
{
    _Bool _isWeakNetFromMars;
    unsigned int _lastRTTFromMars;
    long long _lastNetworkQuality;
    NSMutableDictionary *_qosHistoryDict;
    NSMutableDictionary *_networkInfoDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *networkInfoDict; // @synthesize networkInfoDict=_networkInfoDict;
@property(retain, nonatomic) NSMutableDictionary *qosHistoryDict; // @synthesize qosHistoryDict=_qosHistoryDict;
@property(nonatomic) unsigned int lastRTTFromMars; // @synthesize lastRTTFromMars=_lastRTTFromMars;
@property(nonatomic) _Bool isWeakNetFromMars; // @synthesize isWeakNetFromMars=_isWeakNetFromMars;
@property(nonatomic) long long lastNetworkQuality; // @synthesize lastNetworkQuality=_lastNetworkQuality;
- (void)onNetworkWeakChanged:(_Bool)arg1 currentRTT:(unsigned int)arg2;
- (unsigned int)getFlvAvgFps:(unsigned int)arg1;
- (unsigned int)getFlvAvgSpeed:(unsigned int)arg1;
- (long long)getNetworkQuality:(unsigned int)arg1;
- (long long)getNetworkQuality;
- (long long)updateQosData:(id)arg1;
- (long long)calcNetworkQuality:(id)arg1;
- (void)unregisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)init;

@end

