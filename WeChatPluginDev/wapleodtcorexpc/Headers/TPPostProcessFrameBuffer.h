//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPPostProcessFrameBuffer : NSObject
{
    _Bool _ref;
    int _sampleRate;
    int _format;
    int _nbSamples;
    int _channels;
    int _width;
    int _height;
    int _sampleAspectRatioNum;
    int _sampleAspectRatioDen;
    int _rotation;
    int _eventFlag;
    long long _mediaType;
    char **_data;
    int *_size;
    unsigned long long _channelLayout;
    long long _ptsMs;
    struct TPFrame *_frame;
}

@property(nonatomic) _Bool ref; // @synthesize ref=_ref;
@property(nonatomic) struct TPFrame *frame; // @synthesize frame=_frame;
@property(nonatomic) int eventFlag; // @synthesize eventFlag=_eventFlag;
@property(nonatomic) int rotation; // @synthesize rotation=_rotation;
@property(nonatomic) int sampleAspectRatioDen; // @synthesize sampleAspectRatioDen=_sampleAspectRatioDen;
@property(nonatomic) int sampleAspectRatioNum; // @synthesize sampleAspectRatioNum=_sampleAspectRatioNum;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) int channels; // @synthesize channels=_channels;
@property(nonatomic) int nbSamples; // @synthesize nbSamples=_nbSamples;
@property(nonatomic) long long ptsMs; // @synthesize ptsMs=_ptsMs;
@property(nonatomic) int format; // @synthesize format=_format;
@property(nonatomic) unsigned long long channelLayout; // @synthesize channelLayout=_channelLayout;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) int *size; // @synthesize size=_size;
@property(nonatomic) char **data; // @synthesize data=_data;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
- (id)initWithTPFrame:(void *)arg1 withEventFlag:(int)arg2;
- (void)dealloc;
- (id)init;

@end

