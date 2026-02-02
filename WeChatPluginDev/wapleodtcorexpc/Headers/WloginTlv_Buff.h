//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@interface WloginTlv_Buff
{
    NSData *acSigBuff;
}

@property(retain) NSData *acSigBuff; // @synthesize acSigBuff;
- (id)copy;
- (void)dealloc;
- (int)encode:(id)arg1;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

