//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DataReportDefaultDynamicPublicParamsProvider : NSObject
{
    NSString *m_deviceModel;
    NSString *m_osVersion;
    NSString *m_ipv4;
    NSString *m_ipv6;
    unsigned long long m_lastGetIPTime;
}

- (void).cxx_destruct;
- (_Bool)isValidatIP:(id)arg1;
- (id)getIPAddressArray;
- (id)getIPV4Address:(id)arg1;
- (id)getIPV6Address:(id)arg1;
- (long long)getNetworkType:(int)arg1;
- (void)setDynamicPublicEventParams:(id)arg1 params:(id)arg2;
- (void)setDynamicPublicParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

