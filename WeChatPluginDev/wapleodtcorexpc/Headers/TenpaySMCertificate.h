//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TenpaySMCertificate : NSObject
{
    CDStruct_088880ef baseCtx;
    int gErrorCode;
}

- (int)getError;
- (id)payPasswordEncrypt:(id)arg1 salt:(id)arg2 timestamp:(unsigned long long)arg3 nonce:(id)arg4 headType:(int)arg5;
- (id)passwordEncryptWithCertPem:(id)arg1 pass:(id)arg2 salt:(id)arg3 timestamp:(unsigned long long)arg4 nonce:(id)arg5 headType:(int)arg6 verify:(_Bool)arg7;
- (id)initWithRootPath:(id)arg1 deviceId:(id)arg2 businessId:(id)arg3 userId:(id)arg4;

@end

