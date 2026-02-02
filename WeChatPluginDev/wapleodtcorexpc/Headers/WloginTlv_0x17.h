//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WloginTlv_0x17
{
    unsigned short wDataVer;
    unsigned int dwTime;
    unsigned int dwClientIP;
    unsigned short wClientPort;
    unsigned short wResvLen;
}

@property unsigned short wResvLen; // @synthesize wResvLen;
@property unsigned short wClientPort; // @synthesize wClientPort;
@property unsigned int dwClientIP; // @synthesize dwClientIP;
@property unsigned int dwTime; // @synthesize dwTime;
@property unsigned short wDataVer; // @synthesize wDataVer;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

