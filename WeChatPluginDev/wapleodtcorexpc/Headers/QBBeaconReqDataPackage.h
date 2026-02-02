//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, QBBeaconRequestPackage;

@interface QBBeaconReqDataPackage : NSObject
{
    QBBeaconRequestPackage *requestPackage;
    NSString *reqKey;
    NSString *reqServant;
    NSString *reqFunc;
    int zipAlg;
    int encAlg;
    NSString *encKey;
    NSString *aesKeyEncrypt;
    NSString *encPubKey;
}

+ (id)initWithRequestPkg:(id)arg1;
@property(retain, nonatomic) NSString *encPubKey; // @synthesize encPubKey;
@property(retain, nonatomic) NSString *aesKeyEncrypt; // @synthesize aesKeyEncrypt;
@property(retain, nonatomic) NSString *encKey; // @synthesize encKey;
@property(nonatomic) int encAlg; // @synthesize encAlg;
@property(nonatomic) int zipAlg; // @synthesize zipAlg;
@property(retain, nonatomic) NSString *reqFunc; // @synthesize reqFunc;
@property(retain, nonatomic) NSString *reqServant; // @synthesize reqServant;
@property(retain, nonatomic) NSString *reqKey; // @synthesize reqKey;
@property(retain, nonatomic) QBBeaconRequestPackage *requestPackage; // @synthesize requestPackage;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getWithRspData:(id)arg1 error:(id *)arg2;
- (id)createReqData:(id *)arg1;
- (id)init;

@end

