//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TAVAudioTapProcessorChain;

@interface TAVAudioProcessingTapHolder : NSObject
{
    struct opaqueMTAudioProcessingTap *_tapRef;
    TAVAudioTapProcessorChain *_audioProcessingChain;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TAVAudioTapProcessorChain *audioProcessingChain; // @synthesize audioProcessingChain=_audioProcessingChain;
@property(nonatomic) struct opaqueMTAudioProcessingTap *tapRef; // @synthesize tapRef=_tapRef;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)dealloc;

@end

