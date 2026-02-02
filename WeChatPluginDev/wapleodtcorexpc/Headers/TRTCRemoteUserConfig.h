//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TRTCRemoteUserConfig : NSObject
{
    _Bool _isVideoEnabled;
    _Bool _isAudioEnabled;
    _Bool _isVideoMuted;
    _Bool _isAudioMuted;
    NSString *_roomId;
    long long _fillMode;
    long long _rotation;
    long long _volume;
}

- (void).cxx_destruct;
@property(nonatomic) long long volume; // @synthesize volume=_volume;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
@property(nonatomic) long long fillMode; // @synthesize fillMode=_fillMode;
@property(nonatomic) _Bool isAudioMuted; // @synthesize isAudioMuted=_isAudioMuted;
@property(nonatomic) _Bool isVideoMuted; // @synthesize isVideoMuted=_isVideoMuted;
@property(nonatomic) _Bool isAudioEnabled; // @synthesize isAudioEnabled=_isAudioEnabled;
@property(nonatomic) _Bool isVideoEnabled; // @synthesize isVideoEnabled=_isVideoEnabled;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (id)initWithRoomId:(id)arg1;

@end

