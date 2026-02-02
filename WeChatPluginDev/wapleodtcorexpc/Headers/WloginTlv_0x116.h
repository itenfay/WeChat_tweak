//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WloginTlv_0x116
{
    unsigned char cVer;
    unsigned int dwMiscBitmap;
    unsigned int dwGetAppSig;
    unsigned char cAppidNum;
    unsigned int adwAppidList[10];
}

@property(nonatomic) unsigned char cAppidNum; // @synthesize cAppidNum;
@property(nonatomic) unsigned char cVer; // @synthesize cVer;
@property(nonatomic) unsigned int dwMiscBitmap; // @synthesize dwMiscBitmap;
@property(nonatomic) unsigned int dwGetAppSig; // @synthesize dwGetAppSig;
- (int)encode:(id)arg1;
- (unsigned int)adwAppidWithIndex:(unsigned char)arg1;
- (void)setAdwAppidList:(unsigned int)arg1 withIndex:(unsigned char)arg2;

@end

