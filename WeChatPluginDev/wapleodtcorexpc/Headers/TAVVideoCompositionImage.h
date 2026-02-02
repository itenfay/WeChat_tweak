//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CIImage;
@protocol TAVVideoCompositionTrack;

@interface TAVVideoCompositionImage : NSObject
{
    CIImage *_image;
    id <TAVVideoCompositionTrack> _track;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TAVVideoCompositionTrack> track; // @synthesize track=_track;
@property(retain, nonatomic) CIImage *image; // @synthesize image=_image;

@end

