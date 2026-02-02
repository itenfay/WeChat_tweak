//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@interface WloginTlv_0x122
{
    NSData *G;
    NSData *N;
    NSData *Y;
    NSData *S;
}

@property(retain) NSData *S; // @synthesize S;
@property(retain) NSData *Y; // @synthesize Y;
@property(retain) NSData *N; // @synthesize N;
@property(retain) NSData *G; // @synthesize G;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

