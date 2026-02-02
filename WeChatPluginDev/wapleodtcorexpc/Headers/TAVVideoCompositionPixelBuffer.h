//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol TAVVideoCompositionTrack;

@interface TAVVideoCompositionPixelBuffer : NSObject
{
    struct __CVBuffer *_pixelBuffer;
    id <TAVVideoCompositionTrack> _track;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TAVVideoCompositionTrack> track; // @synthesize track=_track;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;

@end

