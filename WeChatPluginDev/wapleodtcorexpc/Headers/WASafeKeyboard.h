//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSNumber, NSString;

@interface WASafeKeyboard
{
    long long _passwordLen;
    NSString *_papramCert;
    NSString *_paramSalt;
    NSArray *_paramCustomHash;
    NSNumber *_paramTimeStamp;
    NSNumber *_paramNonce;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *paramNonce; // @synthesize paramNonce=_paramNonce;
@property(retain, nonatomic) NSNumber *paramTimeStamp; // @synthesize paramTimeStamp=_paramTimeStamp;
@property(retain, nonatomic) NSArray *paramCustomHash; // @synthesize paramCustomHash=_paramCustomHash;
@property(retain, nonatomic) NSString *paramSalt; // @synthesize paramSalt=_paramSalt;
@property(retain, nonatomic) NSString *papramCert; // @synthesize papramCert=_papramCert;
@property(nonatomic) long long passwordLen; // @synthesize passwordLen=_passwordLen;
- (id)exeCustomHash;
- (id)getEncryptError;
- (id)getParamError;
- (id)inputEncryptData:(unsigned long long)arg1;
- (void)parseSafePasswordParam:(id)arg1;
- (void)captureScreenDidChange;
- (void)dealloc;
- (id)initWithCert:(id)arg1 TextField:(id)arg2;

@end

