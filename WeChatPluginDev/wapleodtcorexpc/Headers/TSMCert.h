//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TSMCert : NSObject
{
    void *_ctx;
}

+ (id)X509DER2PEM:(int)arg1 der:(id)arg2 error:(id *)arg3;
+ (id)X509PEM2DER:(id)arg1 error:(id *)arg2;
- (_Bool)verifyX509SM2CertChain:(id)arg1 capems:(id)arg2 error:(id *)arg3;
- (_Bool)checkX509SM2CertRoot:(id)arg1 error:(id *)arg2;
- (id)getX509SM2CertItem:(id)arg1 type:(int)arg2 error:(id *)arg3;
- (id)genX509SM2Cert:(id *)arg1;
- (id)getX509SM2CSRItem:(id)arg1 type:(int)arg2 error:(id *)arg3;
- (id)genX509SM2CSR:(id *)arg1;
- (void)clearX509Items:(id *)arg1;
- (void)setX509CertCommonItems:(id)arg1 capem:(id)arg2 isca:(int)arg3 serialnumber:(id)arg4 prikey:(id)arg5 validdays:(unsigned int)arg6 error:(id *)arg7;
- (void)setX509CSRCommonItems:(id)arg1 country:(id)arg2 province:(id)arg3 locality:(id)arg4 organization:(id)arg5 email:(id)arg6 prikey:(id)arg7 error:(id *)arg8;
- (void)setX509Item:(int)arg1 pvalue:(void *)arg2 ivalue:(int)arg3 error:(id *)arg4;
- (id)initCtx:(id *)arg1;
- (void)dealloc;
- (id)init;

@end

