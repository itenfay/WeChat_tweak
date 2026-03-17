//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WxSmCertUtil : NSObject
{
    CDStruct_088880ef baseCtx;
    int gErrorCode;
}

- (_Bool)cleanTokenSeed:(id)arg1;
- (id)getTokenSeed:(id)arg1;
- (_Bool)setTokenSeed:(id)arg1 seed:(id)arg2;
- (_Bool)clearToken:(id)arg1;
- (int)getTokenCount:(id)arg1;
- (id)getToken:(id)arg1;
- (_Bool)setToken:(id)arg1 token:(id)arg2;
- (int)getError;
- (_Bool)clearAllCert;
- (_Bool)clearCert:(id)arg1;
- (id)certDecrypt:(id)arg1 cipher:(id)arg2;
- (id)certEncrypt:(id)arg1 plain:(id)arg2;
- (_Bool)certVerify:(id)arg1 message:(id)arg2 userId:(id)arg3 sign:(id)arg4;
- (id)certSign:(id)arg1 message:(id)arg2 userId:(id)arg3;
- (id)getCertValidTime:(id)arg1;
- (_Bool)hasCert:(id)arg1;
- (_Bool)importCert:(id)arg1 cert:(id)arg2 verify:(_Bool)arg3;
- (id)makeCsr:(id)arg1 commonName:(id)arg2;
- (_Bool)updateCaCert:(int)arg1 certs:(id)arg2;
- (int)getCaCertVersion;
- (id)initWithRootPath:(id)arg1 deviceId:(id)arg2 businessId:(id)arg3 userId:(id)arg4;

@end

