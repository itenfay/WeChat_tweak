//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WloginTlv_0x141
{
    unsigned short wDataVer;
    NSString *sOperator;
    unsigned short wNetType;
    unsigned short wResvLen;
}

@property unsigned short wResvLen; // @synthesize wResvLen;
@property unsigned short wNetType; // @synthesize wNetType;
@property(copy) NSString *sOperator; // @synthesize sOperator;
@property unsigned short wDataVer; // @synthesize wDataVer;
- (void)dealloc;
- (int)encode:(id)arg1;

@end

