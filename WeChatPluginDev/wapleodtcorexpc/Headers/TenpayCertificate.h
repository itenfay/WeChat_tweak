//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TenpayCertificate : NSObject
{
    CDStruct_757f3dd8 m_keyPublic;
    CDStruct_a8765c43 m_keyPrivate;
    int _lastError;
    NSString *myToken;
}

@property(nonatomic) int lastError; // @synthesize lastError=_lastError;
@property(retain, nonatomic) NSString *myToken; // @synthesize myToken;
- (void)checkCertPath;
- (id)tokenEncode:(id)arg1 message:(id)arg2;
- (double)getExpireTime:(id)arg1;
- (id)getToken:(id)arg1;
- (void)cleanToken:(id)arg1;
- (long long)getRemainTokenNum:(id)arg1;
- (_Bool)setToken:(id)arg1 certId:(id)arg2 useSM4:(_Bool)arg3 sm4Key:(id)arg4;
- (id)privateDecrypt:(id)arg1 message:(id)arg2;
- (_Bool)isCertExist:(id)arg1;
- (_Bool)delCert:(id)arg1;
- (id)certDecrypt:(id)arg1 message:(id)arg2;
- (id)certSign:(id)arg1 message:(id)arg2;
- (_Bool)importCert:(id)arg1;
- (id)getCSR:(id)arg1 structureName:(id)arg2 csrType:(int)arg3;
- (id)stringByEscapingForURLQuery:(id)arg1;
- (id)init;

@end

