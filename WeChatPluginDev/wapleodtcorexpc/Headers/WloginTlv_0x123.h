//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@interface WloginTlv_0x123
{
    NSData *G;
    NSData *N;
    NSData *Y;
    NSData *X;
    unsigned int dwCalTime;
}

@property unsigned int dwCalTime; // @synthesize dwCalTime;
@property(retain) NSData *X; // @synthesize X;
@property(retain) NSData *Y; // @synthesize Y;
@property(retain) NSData *N; // @synthesize N;
@property(retain) NSData *G; // @synthesize G;
- (void)dealloc;
- (int)encode:(id)arg1;

@end

