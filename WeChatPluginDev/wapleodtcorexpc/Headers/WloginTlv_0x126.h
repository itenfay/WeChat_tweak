//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@interface WloginTlv_0x126
{
    unsigned short wVer;
    NSData *randData;
}

@property(retain) NSData *randData; // @synthesize randData;
@property unsigned short wVer; // @synthesize wVer;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

