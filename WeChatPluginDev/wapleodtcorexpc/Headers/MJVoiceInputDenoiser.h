//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MJVoiceInputDenoiser : NSObject
{
    _Bool _isValid;
    unsigned int _sampleRate;
    NSData *_lastRemainingData;
    NSString *_processingIdentifier;
    struct AudioChannels3aProcessorInterface *_backingDenoiser;
}

- (void).cxx_destruct;
@property(nonatomic) struct AudioChannels3aProcessorInterface *backingDenoiser; // @synthesize backingDenoiser=_backingDenoiser;
@property(retain, nonatomic) NSString *processingIdentifier; // @synthesize processingIdentifier=_processingIdentifier;
@property(readonly, nonatomic) NSData *lastRemainingData; // @synthesize lastRemainingData=_lastRemainingData;
@property(nonatomic) unsigned int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
- (id)denoiseLastRemainingData;
- (id)denoiseWithData:(id)arg1 identifier:(id)arg2;
- (_Bool)setupDenoiser;
- (void)dealloc;
- (id)initWithSampleRate:(unsigned int)arg1;

@end

