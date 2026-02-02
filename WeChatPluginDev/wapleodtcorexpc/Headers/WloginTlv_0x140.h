//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WloginTlv_0x140
{
    unsigned short wDataVer;
    NSString *sLoginHost;
    unsigned short wLoginPort;
    unsigned short wResvLen;
}

@property unsigned short wResvLen; // @synthesize wResvLen;
@property unsigned short wLoginPort; // @synthesize wLoginPort;
@property(copy) NSString *sLoginHost; // @synthesize sLoginHost;
@property unsigned short wDataVer; // @synthesize wDataVer;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

