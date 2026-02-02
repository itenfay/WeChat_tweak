//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WloginTlv_0x150
{
    unsigned int dwBitmap;
    BOOL cNet;
}

@property BOOL cNet; // @synthesize cNet;
@property unsigned int dwBitmap; // @synthesize dwBitmap;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

