//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@interface WloginTlv_0x11d
{
    unsigned int dwAppid;
    NSData *acSigKey;
    NSData *acSig;
}

@property(retain) NSData *acSigKey; // @synthesize acSigKey;
@property(retain) NSData *acSig; // @synthesize acSig;
@property unsigned int dwAppid; // @synthesize dwAppid;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

