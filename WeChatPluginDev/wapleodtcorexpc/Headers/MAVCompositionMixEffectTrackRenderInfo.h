//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MAVCompositionTrack;

@interface MAVCompositionMixEffectTrackRenderInfo : NSObject
{
    MAVCompositionTrack *_track;
    struct __CVBuffer *_textureRef;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct __CVBuffer *textureRef; // @synthesize textureRef=_textureRef;
@property(retain, nonatomic) MAVCompositionTrack *track; // @synthesize track=_track;
- (long long)compare:(id)arg1;
- (id)initWithRenderInfo:(id)arg1 texture:(struct __CVBuffer *)arg2 size:(struct CGSize)arg3;

@end

