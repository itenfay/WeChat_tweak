//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCAudioFileReaderAppleDelegateAdapter : NSObject
{
    struct AudioDecodeCallback *_callback;
}

@property(nonatomic) struct AudioDecodeCallback *callback; // @synthesize callback=_callback;
- (void)audioFileReaderDidComplete:(id)arg1;
- (void)audioFileReader:(id)arg1 onError:(id)arg2;
- (void)audioFileReader:(id)arg1 didGetAudioData:(void *)arg2;
- (void)dealloc;

@end

