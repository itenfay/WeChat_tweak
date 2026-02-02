//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WloginTlv_0x100
{
    unsigned short wDBBufVer;
    unsigned int dwSSOVer;
    unsigned int dwAppID;
    unsigned int dwSubAppID;
    unsigned int dwAppClientVer;
    unsigned int dwGetSig;
}

@property(nonatomic) unsigned int dwSubAppID; // @synthesize dwSubAppID;
@property(nonatomic) unsigned int dwSSOVer; // @synthesize dwSSOVer;
@property(nonatomic) unsigned int dwGetSig; // @synthesize dwGetSig;
@property(nonatomic) unsigned int dwAppID; // @synthesize dwAppID;
@property(nonatomic) unsigned int dwAppClientVer; // @synthesize dwAppClientVer;
@property(nonatomic) unsigned short wDBBufVer; // @synthesize wDBBufVer;
- (int)encode:(id)arg1;

@end

