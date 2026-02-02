//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderNewDnsObj : NSObject
{
    _Bool _bUseDCIP;
    unsigned int _lastNewDNSTime;
    NSString *_host;
    NSArray *_iplist;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastNewDNSTime; // @synthesize lastNewDNSTime=_lastNewDNSTime;
@property(nonatomic) _Bool bUseDCIP; // @synthesize bUseDCIP=_bUseDCIP;
@property(copy) NSArray *iplist; // @synthesize iplist=_iplist;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void)doNewDns;
- (_Bool)isNeedUpdateIpList;

@end

