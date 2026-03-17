//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TAVReverseSampleBufferHolder : NSObject
{
    struct opaqueCMSampleBuffer *_sampleBuffer;
}

@property(nonatomic) struct opaqueCMSampleBuffer *sampleBuffer; // @synthesize sampleBuffer=_sampleBuffer;
@property(readonly, nonatomic) double presentationTime;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)dealloc;

@end

