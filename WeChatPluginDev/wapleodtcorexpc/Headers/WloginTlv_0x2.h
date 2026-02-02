//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WloginTlv_0x2
{
    unsigned short wPicSigVer;
    NSString *sCode;
    NSData *acEncryptKey;
}

@property(retain) NSData *acEncryptKey; // @synthesize acEncryptKey;
@property(copy) NSString *sCode; // @synthesize sCode;
@property(nonatomic) unsigned short wPicSigVer; // @synthesize wPicSigVer;
- (void)dealloc;
- (int)encode:(id)arg1;

@end

