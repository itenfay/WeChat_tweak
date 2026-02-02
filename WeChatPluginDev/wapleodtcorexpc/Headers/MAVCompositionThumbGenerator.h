//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TAVSourceImageGenerator;

@interface MAVCompositionThumbGenerator : NSObject
{
    TAVSourceImageGenerator *_imageGenerator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TAVSourceImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
- (void)destroy;
- (void)requestFrames:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithTrack:(id)arg1 imageSize:(struct CGSize)arg2;
- (id)initWithComposition:(id)arg1 imageSize:(struct CGSize)arg2;

@end

