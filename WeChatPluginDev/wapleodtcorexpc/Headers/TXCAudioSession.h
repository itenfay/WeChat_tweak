//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol TXCAudioSessionDelegate;

@interface TXCAudioSession : NSObject
{
    id <TXCAudioSessionDelegate> _delegate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TXCAudioSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)setPreferredInput:(id)arg1 error:(id *)arg2;
- (_Bool)overrideOutputAudioPort:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)setPreferredSampleRate:(double)arg1 error:(id *)arg2;
- (_Bool)setPreferredIOBufferDuration:(double)arg1 error:(id *)arg2;
- (_Bool)setCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)setCategory:(id)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setCategory:(id)arg1 error:(id *)arg2;
- (_Bool)setMode:(id)arg1 error:(id *)arg2;
- (_Bool)setActive:(_Bool)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;

@end

