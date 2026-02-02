//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WloginTlv_0x124
{
    NSString *sOs;
    NSString *sOsVer;
    unsigned short wNetInfo;
    NSString *sNetDetail;
    NSString *sAddr;
}

@property(copy) NSString *sAddr; // @synthesize sAddr;
@property(copy) NSString *sNetDetail; // @synthesize sNetDetail;
@property unsigned short wNetInfo; // @synthesize wNetInfo;
@property(copy) NSString *sOsVer; // @synthesize sOsVer;
@property(copy) NSString *sOs; // @synthesize sOs;
- (void)dealloc;
- (int)encode:(id)arg1;

@end

