//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, QBDNSCache, QBDNSHTTPDESResolver, QBDNSUDPResolver;
@protocol OS_dispatch_queue;

@interface QBDNSManager : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _dnsEnabled;
    long long actualErrorDNSCount;
    NSDate *actualErrorDNSDate;
    NSDate *_detectServerDate;
    _Bool _dnsServerEnabled;
    QBDNSCache *_cache;
    QBDNSUDPResolver *_defaultResolver;
    QBDNSHTTPDESResolver *_httpDNSResolver;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (long long)isNetworkChanged:(_Bool)arg1;
- (void)loadData;
- (_Bool)isHTTPDNSEnabled;
- (long long)badDateInterVal;
- (void)IBSDNSSettingChanged:(id)arg1;
- (id)init;
- (id)queryInternalWithDomain:(id)arg1 resolver:(id)arg2 detect:(_Bool)arg3;
- (id)query:(id)arg1 status:(long long)arg2;
- (void)handleBadRequest:(id)arg1 status:(long long)arg2;
- (void)handleResponse:(id)arg1;
- (void)detectDNSStatus;
- (void)handleActualErrorDNS:(long long)arg1;
- (void)storeCache;
- (id)qbDNSRequest:(id)arg1 cached:(_Bool)arg2;

@end

