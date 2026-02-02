//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSURLRequest.h>

@class NSArray, NSDictionary;

@interface NSURLRequest (MMNetworkMonitor)
- (unsigned long long)mmGetBodyLength;
- (id)mmGetCookies;
- (unsigned long long)mmGetHeadersLengthWithCookie;
- (unsigned long long)mmGetLineLength;
- (unsigned long long)mmGetBytesSent;
@property(readonly, nonatomic) unsigned long long qmapFlowSize;
@property(retain, nonatomic) NSDictionary *qmapStateData;
@property(readonly, nonatomic) _Bool WX_TLSSkipHostnameCheck;
@property(readonly, nonatomic) NSArray *WX_SR_SSLPinnedCertificates;
- (id)URLByRemoveQBPostSuffix;
- (id)requestByRemovingPostCheckKey;
- (_Bool)isQBPostSuffixURL;
@end

