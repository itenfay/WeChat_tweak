//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSURL, NSURLRequest;

@interface QBDNSQueryItem : NSObject
{
    NSURLRequest *_dnsRequest;
    NSURL *_originURL;
    long long _status;
    long long _errCode;
}

@property long long errCode; // @synthesize errCode=_errCode;
@property long long status; // @synthesize status=_status;
@property(copy) NSURL *originURL; // @synthesize originURL=_originURL;
@property(retain) NSURLRequest *dnsRequest; // @synthesize dnsRequest=_dnsRequest;
- (void).cxx_destruct;

@end

