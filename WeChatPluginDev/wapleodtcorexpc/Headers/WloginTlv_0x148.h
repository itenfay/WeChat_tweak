//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WloginTlv_0x148
{
    NSString *sAppName;
    unsigned int dwSSOVer;
    unsigned int dwAppId;
    unsigned int dwSubAppId;
    NSString *sAppVer;
    NSString *sAppSig;
}

@property(copy) NSString *sAppSig; // @synthesize sAppSig;
@property(copy) NSString *sAppVer; // @synthesize sAppVer;
@property unsigned int dwSubAppId; // @synthesize dwSubAppId;
@property unsigned int dwAppId; // @synthesize dwAppId;
@property unsigned int dwSSOVer; // @synthesize dwSSOVer;
@property(copy) NSString *sAppName; // @synthesize sAppName;
- (void)dealloc;
- (int)encode:(id)arg1;

@end

