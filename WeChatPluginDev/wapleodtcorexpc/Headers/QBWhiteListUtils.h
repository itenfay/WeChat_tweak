//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class QBWhiteList;

@interface QBWhiteListUtils : NSObject
{
    QBWhiteList *_performanceReportWhiteList;
    NSObject *_performanceReportLockObj;
    QBWhiteList *_dnsUDPWhiteList;
    NSObject *_dnsUDPLockObj;
    QBWhiteList *_forceProxyWhiteList;
    NSObject *_forceProxyLockObj;
    QBWhiteList *_qProxyWhiteList;
    NSObject *_QProxyLockObj;
    QBWhiteList *_atsVideoWhiteList;
    NSObject *_atsVideoLockObj;
    QBWhiteList *_urlReportWhiteList;
    NSObject *_urlReportLockObj;
    QBWhiteList *_dnsHTTPWhiteList;
    NSObject *_dnsHTTPLockObj;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)dnsHTTPWhiteList;
- (id)urlReportWhiteList;
- (id)ATSVideoWhiteList;
- (id)forceProxyWhiteList;
- (void)cleanForceProxyTempWhiteList;
- (id)qProxyWhiteList;
- (void)cleanQProxyTempWhiteList;
- (id)dnsUDPWhiteList;
- (id)performanceReportWhiteList;
- (id)init;

@end

