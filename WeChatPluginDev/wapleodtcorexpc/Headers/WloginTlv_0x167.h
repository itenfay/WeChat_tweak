//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WloginTlv_0x167
{
    unsigned char cImgType;
    unsigned char cImgFormat;
    NSString *sImgUrl;
}

@property(copy) NSString *sImgUrl; // @synthesize sImgUrl;
@property unsigned char cImgFormat; // @synthesize cImgFormat;
@property unsigned char cImgType; // @synthesize cImgType;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

