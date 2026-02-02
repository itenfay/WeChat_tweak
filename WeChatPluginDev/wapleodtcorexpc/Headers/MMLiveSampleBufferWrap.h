//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveSampleBufferWrap : NSObject
{
    struct opaqueCMSampleBuffer *_sampleBuffer;
}

+ (id)bufferWrapFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
@property(nonatomic) struct opaqueCMSampleBuffer *sampleBuffer; // @synthesize sampleBuffer=_sampleBuffer;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

