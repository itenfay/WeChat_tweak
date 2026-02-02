//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WloginTlv_0x18
{
    unsigned short wPingVer;
    unsigned int dwSSOVer;
    unsigned int dwAppID;
    unsigned int dwAppClientVer;
    unsigned int dwUin;
    unsigned short wRedirectCount;
    unsigned short wResvLen;
}

@property unsigned short wResvLen; // @synthesize wResvLen;
@property unsigned short wRedirectCount; // @synthesize wRedirectCount;
@property unsigned int dwUin; // @synthesize dwUin;
@property unsigned int dwAppClientVer; // @synthesize dwAppClientVer;
@property unsigned int dwAppID; // @synthesize dwAppID;
@property unsigned int dwSSOVer; // @synthesize dwSSOVer;
@property unsigned short wPingVer; // @synthesize wPingVer;
- (int)encode:(id)arg1;

@end

