//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TenpayHKCertUtil : NSObject
{
    int gErrorCode;
    CDStruct_757f3dd8 m_keyPublic;
    CDStruct_a8765c43 m_keyPrivate;
    NSString *_deviceId;
    NSString *_businessId;
    NSString *_userId;
}

- (void)checkCertPath;
- (id)getAlgoToken:(id)arg1 type:(int)arg2 uid:(int)arg3 seed:(id)arg4 seedTime:(unsigned long long)arg5 currentTime:(unsigned long long)arg6 baseStep:(unsigned int)arg7 timeStepSize:(int)arg8;
- (_Bool)clearAllCert;
- (_Bool)clearCert:(id)arg1;
- (id)certEncrypt:(id)arg1 base64Message:(id)arg2;
- (id)certDecrypt:(id)arg1 base64Message:(id)arg2;
- (id)certDecrypt:(id)arg1 cipher:(id)arg2;
- (id)certSign:(id)arg1 message:(id)arg2;
- (double)getExpireTime:(id)arg1;
- (_Bool)hasCert:(id)arg1;
- (_Bool)importCert:(id)arg1 cert:(id)arg2;
- (id)getCsr:(long long)arg1;
- (int)getError;
- (void)dealloc;
- (id)initWithDeviceId:(id)arg1 businessId:(id)arg2 userId:(id)arg3;

@end

