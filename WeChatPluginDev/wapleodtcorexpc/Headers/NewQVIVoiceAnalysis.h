//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface NewQVIVoiceAnalysis : NSObject
{
    void *SpeexContex;
}

+ (id)sharedInstance;
- (void)dealloc;
- (void)mfeDetect:(id)arg1 withResult:(id)arg2;
- (void)mfeStop;
- (void)mfeStart;
- (void)mfeRelease;
- (void)mfeInitWithSilentTime:(int)arg1 andTimeout:(int)arg2;
- (id)speexDecode:(id)arg1;
- (void)speexDecodeRelease;
- (void)speexDecodeInit;
- (id)speexEncode:(id)arg1;
- (void)speexEncodeRelease;
- (void)speexEncodeInit;
- (id)init;

@end

