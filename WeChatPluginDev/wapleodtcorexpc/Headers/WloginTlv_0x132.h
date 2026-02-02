//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@interface WloginTlv_0x132
{
    NSData *accessToken;
    unsigned int dwExpireTime;
    NSData *openId;
}

@property(copy) NSData *openId; // @synthesize openId;
@property unsigned int dwExpireTime; // @synthesize dwExpireTime;
@property(retain) NSData *accessToken; // @synthesize accessToken;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (void)dealloc;

@end

