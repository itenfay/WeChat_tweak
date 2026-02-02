//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FlutterTPPlayFeedbackInfo : NSObject
{
    long long _playCount;
    long long _loopCount;
    long long _totalPlaybackTimeMS;
    long long _playbackTimeMS;
    long long _totalBufferTimeMS;
    long long _playerErrorCode;
    NSString *_playerErrorDesc;
    long long _durationMS;
    long long _presentationHeight;
    long long _presentationWidth;
    long long _size;
    long long _bitrate;
    NSString *_vcodec;
    long long _bufferredCount;
    long long _actualPlayingTimeMS;
    long long _getMaxPlayPosition;
    long long _firstLoadingTimeMS;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithPlayCount:(long long)arg1 loopCount:(long long)arg2 totalPlaybackTimeMS:(long long)arg3 playbackTimeMS:(long long)arg4 totalBufferTimeMS:(long long)arg5 playerErrorCode:(long long)arg6 playerErrorDesc:(id)arg7 durationMS:(long long)arg8 presentationHeight:(long long)arg9 presentationWidth:(long long)arg10 size:(long long)arg11 bitrate:(long long)arg12 vcodec:(id)arg13 bufferredCount:(long long)arg14 actualPlayingTimeMS:(long long)arg15 getMaxPlayPosition:(long long)arg16 firstLoadingTimeMS:(long long)arg17;
- (void).cxx_destruct;
@property(nonatomic) long long firstLoadingTimeMS; // @synthesize firstLoadingTimeMS=_firstLoadingTimeMS;
@property(nonatomic) long long getMaxPlayPosition; // @synthesize getMaxPlayPosition=_getMaxPlayPosition;
@property(nonatomic) long long actualPlayingTimeMS; // @synthesize actualPlayingTimeMS=_actualPlayingTimeMS;
@property(nonatomic) long long bufferredCount; // @synthesize bufferredCount=_bufferredCount;
@property(copy, nonatomic) NSString *vcodec; // @synthesize vcodec=_vcodec;
@property(nonatomic) long long bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) long long presentationWidth; // @synthesize presentationWidth=_presentationWidth;
@property(nonatomic) long long presentationHeight; // @synthesize presentationHeight=_presentationHeight;
@property(nonatomic) long long durationMS; // @synthesize durationMS=_durationMS;
@property(copy, nonatomic) NSString *playerErrorDesc; // @synthesize playerErrorDesc=_playerErrorDesc;
@property(nonatomic) long long playerErrorCode; // @synthesize playerErrorCode=_playerErrorCode;
@property(nonatomic) long long totalBufferTimeMS; // @synthesize totalBufferTimeMS=_totalBufferTimeMS;
@property(nonatomic) long long playbackTimeMS; // @synthesize playbackTimeMS=_playbackTimeMS;
@property(nonatomic) long long totalPlaybackTimeMS; // @synthesize totalPlaybackTimeMS=_totalPlaybackTimeMS;
@property(nonatomic) long long loopCount; // @synthesize loopCount=_loopCount;
@property(nonatomic) long long playCount; // @synthesize playCount=_playCount;
- (id)toList;

@end

