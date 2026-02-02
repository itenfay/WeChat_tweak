//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WloginTlv_0x113
{
    unsigned int dwUin;
    unsigned short wNameTag;
    NSString *sName;
}

@property(copy) NSString *sName; // @synthesize sName;
@property unsigned int dwUin; // @synthesize dwUin;
@property unsigned short wNameTag; // @synthesize wNameTag;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

