//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WloginTlv_0x107
{
    unsigned short wPicType;
    unsigned char cCapType;
    unsigned short wPicSize;
    unsigned char cPicRetType;
}

@property(nonatomic) unsigned char cPicRetType; // @synthesize cPicRetType;
@property(nonatomic) unsigned char cCapType; // @synthesize cCapType;
@property(nonatomic) unsigned short wPicType; // @synthesize wPicType;
@property(nonatomic) unsigned short wPicSize; // @synthesize wPicSize;
- (int)encode:(id)arg1;

@end

