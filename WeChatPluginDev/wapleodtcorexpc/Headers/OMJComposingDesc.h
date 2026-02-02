//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, OMJAudioClip, OMJCoordinatingDesc, OMJLyricOverlayDesc;

@interface OMJComposingDesc : NSObject
{
    OMJCoordinatingDesc *_coordinatingDesc;
    NSArray *_mainClips;
    OMJAudioClip *_audioClip;
    OMJLyricOverlayDesc *_lyricOverlayDesc;
    NSArray *_stickerOverlayDescs;
    NSArray *_textOverlayDescs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *textOverlayDescs; // @synthesize textOverlayDescs=_textOverlayDescs;
@property(retain, nonatomic) NSArray *stickerOverlayDescs; // @synthesize stickerOverlayDescs=_stickerOverlayDescs;
@property(retain, nonatomic) OMJLyricOverlayDesc *lyricOverlayDesc; // @synthesize lyricOverlayDesc=_lyricOverlayDesc;
@property(retain, nonatomic) OMJAudioClip *audioClip; // @synthesize audioClip=_audioClip;
@property(readonly, nonatomic) NSArray *mainClips; // @synthesize mainClips=_mainClips;
@property(readonly, nonatomic) OMJCoordinatingDesc *coordinatingDesc; // @synthesize coordinatingDesc=_coordinatingDesc;
- (id)initWithCoordinatingDesc:(id)arg1 mainClips:(id)arg2;

@end

