//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSURLRequest;

@interface SRSecurityOptions : NSObject
{
    _Bool _requestRequiresSSL;
    _Bool _TLSSkipHostnameCheck;
    _Bool _validatesCertificateChain;
    NSURLRequest *_request;
    NSArray *_pinnedCertificates;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool validatesCertificateChain; // @synthesize validatesCertificateChain=_validatesCertificateChain;
@property(nonatomic) _Bool TLSSkipHostnameCheck; // @synthesize TLSSkipHostnameCheck=_TLSSkipHostnameCheck;
@property(readonly, nonatomic) NSArray *pinnedCertificates; // @synthesize pinnedCertificates=_pinnedCertificates;
@property(readonly, nonatomic) _Bool requestRequiresSSL; // @synthesize requestRequiresSSL=_requestRequiresSSL;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (_Bool)securityTrustContainsPinnedCertificates:(struct __SecTrust *)arg1;
- (void)updateSecurityOptionsInStream:(id)arg1;
- (id)initWithRequest:(id)arg1 pinnedCertificates:(id)arg2 chainValidationEnabled:(_Bool)arg3 TLSSkipHostnameCheck:(_Bool)arg4;

@end

