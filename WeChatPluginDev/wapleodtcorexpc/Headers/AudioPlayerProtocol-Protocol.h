//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol AudioPlayerDelegate;

@protocol AudioPlayerProtocol <NSObject>
@property(nonatomic) __weak id <AudioPlayerDelegate> delegate;
- (void)setProgress:(unsigned int)arg1;
- (_Bool)isPlaying;
- (int)getCurrentTimeMs;
- (unsigned int)currentTime;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)asyncPlayAtTime:(unsigned int)arg1;
- (void)playAtTime:(unsigned int)arg1;
- (void)play;
- (void)asyncPreparePlayWithFile:(NSString *)arg1 finished:(void (^)(_Bool))arg2;
- (_Bool)preparePlayWithFile:(NSString *)arg1;
@end

