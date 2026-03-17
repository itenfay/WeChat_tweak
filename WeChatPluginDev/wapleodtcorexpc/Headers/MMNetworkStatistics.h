//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMNetworkStatistics : NSObject
{
    unsigned long long _wifiSent;
    unsigned long long _wifiReceived;
    unsigned long long _wwanSent;
    unsigned long long _wwanReceived;
}

@property(nonatomic) unsigned long long wwanReceived; // @synthesize wwanReceived=_wwanReceived;
@property(nonatomic) unsigned long long wwanSent; // @synthesize wwanSent=_wwanSent;
@property(nonatomic) unsigned long long wifiReceived; // @synthesize wifiReceived=_wifiReceived;
@property(nonatomic) unsigned long long wifiSent; // @synthesize wifiSent=_wifiSent;
- (void)divideBySeconds:(unsigned long long)arg1;
- (void)add:(id)arg1;
- (id)diff:(id)arg1;
- (unsigned long long)totalWwanUsage;
- (unsigned long long)totalWifiUsage;

@end

