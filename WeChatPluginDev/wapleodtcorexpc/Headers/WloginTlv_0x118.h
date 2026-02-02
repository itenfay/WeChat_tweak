//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WloginTlv_0x118
{
    unsigned int dwFlag;
    NSString *sName;
}

@property unsigned int dwFlag; // @synthesize dwFlag;
@property(copy) NSString *sName; // @synthesize sName;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

