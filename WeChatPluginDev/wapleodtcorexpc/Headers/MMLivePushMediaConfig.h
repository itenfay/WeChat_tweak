//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveVideoEncParam;

@interface MMLivePushMediaConfig : NSObject
{
    _Bool _isVideoEnabled;
    _Bool _isVideoMuted;
    _Bool _isAudioEnabled;
    _Bool _isAudioMuted;
    _Bool _isFrontCamera;
    MMLiveVideoEncParam *_videoEncParam;
    long long _captureVolume;
}

- (void).cxx_destruct;
@property(nonatomic) long long captureVolume; // @synthesize captureVolume=_captureVolume;
@property(nonatomic) _Bool isFrontCamera; // @synthesize isFrontCamera=_isFrontCamera;
@property(retain, nonatomic) MMLiveVideoEncParam *videoEncParam; // @synthesize videoEncParam=_videoEncParam;
@property(nonatomic) _Bool isAudioMuted; // @synthesize isAudioMuted=_isAudioMuted;
@property(nonatomic) _Bool isAudioEnabled; // @synthesize isAudioEnabled=_isAudioEnabled;
@property(nonatomic) _Bool isVideoMuted; // @synthesize isVideoMuted=_isVideoMuted;
@property(nonatomic) _Bool isVideoEnabled; // @synthesize isVideoEnabled=_isVideoEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

