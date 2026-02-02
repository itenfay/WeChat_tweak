//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WloginTlv_0x147
{
    unsigned int dwAppVerID;
    unsigned short wAppVerLen;
    NSString *sAppVer;
    unsigned short wAppSigLen;
    NSString *sAppSig;
}

@property(copy) NSString *sAppSig; // @synthesize sAppSig;
@property unsigned short wAppSigLen; // @synthesize wAppSigLen;
@property(copy) NSString *sAppVer; // @synthesize sAppVer;
@property unsigned short wAppVerLen; // @synthesize wAppVerLen;
@property unsigned int dwAppVerID; // @synthesize dwAppVerID;
- (void)dealloc;
- (int)encode:(id)arg1;

@end

