//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WloginTlv_0x129
{
    unsigned int dwHoldTime;
    unsigned int dwTimeout;
    NSString *phoneNo;
}

@property(copy) NSString *phoneNo; // @synthesize phoneNo;
@property unsigned int dwHoldTime; // @synthesize dwHoldTime;
@property unsigned int dwTimeout; // @synthesize dwTimeout;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

