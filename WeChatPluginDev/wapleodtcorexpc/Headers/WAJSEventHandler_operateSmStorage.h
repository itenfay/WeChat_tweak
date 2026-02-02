//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSError;

@interface WAJSEventHandler_operateSmStorage
{
    NSError *_err;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *err; // @synthesize err=_err;
- (void)operate_sm2Verify:(id)arg1;
- (void)operate_sm2Sign:(id)arg1;
- (void)operate_sm2Decrypt:(id)arg1;
- (void)operate_sm2Encrypt:(id)arg1;
- (void)operate_sm4GcmDecrypt:(id)arg1;
- (void)operate_sm4GcmEncrypt:(id)arg1;
- (void)operate_sm4CtrDecrypt:(id)arg1;
- (void)operate_sm4CtrEncrypt:(id)arg1;
- (void)operate_sm4CbcDecrypt:(id)arg1;
- (void)operate_sm4CbcEncrypt:(id)arg1;
- (void)operate_sm4EcbDecrypt:(id)arg1;
- (void)operate_sm4EcbEncrypt:(id)arg1;
- (void)operate_checkSm2PrivateKey:(id)arg1;
- (void)operate_deleteSm2PrivateKey:(id)arg1;
- (void)operate_updateSm2PrivateKey:(id)arg1;
- (void)operate_exportSm2PrivateKey:(id)arg1;
- (void)operate_importSm2PrivateKey:(id)arg1;
- (void)operate_checkSm2PublicKey:(id)arg1;
- (void)operate_deleteSm2PublicKey:(id)arg1;
- (void)operate_updateSm2PublicKey:(id)arg1;
- (void)operate_exportSm2PublicKey:(id)arg1;
- (void)operate_importSm2PublicKey:(id)arg1;
- (void)operate_generateSm2KeyPair:(id)arg1;
- (void)operate_checkSm4Key:(id)arg1;
- (void)operate_deleteSm4Key:(id)arg1;
- (void)operate_updateSm4Key:(id)arg1;
- (void)operate_exportSm4Key:(id)arg1;
- (void)operate_importSm4Key:(id)arg1;
- (void)operate_generateSm4Key:(id)arg1;
- (void)endByError:(id)arg1;
- (void)handleJSEvent:(id)arg1;

@end

