//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WloginTlv_0x11f
{
    unsigned int dwExchangeTime;
    unsigned int dwPriority;
}

@property unsigned int dwExchangeTime; // @synthesize dwExchangeTime;
@property unsigned int dwPriority; // @synthesize dwPriority;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

