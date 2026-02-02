//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WloginTlv_0x127
{
    unsigned short wVer;
    NSString *msgCode;
    NSData *randData;
}

@property(retain) NSData *randData; // @synthesize randData;
@property unsigned short wVer; // @synthesize wVer;
@property(copy) NSString *msgCode; // @synthesize msgCode;
- (void)dealloc;
- (int)encode:(id)arg1;

@end

