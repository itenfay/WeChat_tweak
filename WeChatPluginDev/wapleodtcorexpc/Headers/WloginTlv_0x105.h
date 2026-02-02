//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@interface WloginTlv_0x105
{
    NSData *acSig;
    NSData *acPicData;
}

@property(retain) NSData *acPicData; // @synthesize acPicData;
@property(retain) NSData *acSig; // @synthesize acSig;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

