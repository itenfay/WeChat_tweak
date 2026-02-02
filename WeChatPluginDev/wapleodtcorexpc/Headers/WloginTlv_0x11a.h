//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WloginTlv_0x11a
{
    unsigned short wFaceId;
    unsigned char cAge;
    unsigned char cGender;
    NSString *sNickName;
}

@property unsigned short wFaceId; // @synthesize wFaceId;
@property unsigned char cGender; // @synthesize cGender;
@property unsigned char cAge; // @synthesize cAge;
@property(copy) NSString *sNickName; // @synthesize sNickName;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

