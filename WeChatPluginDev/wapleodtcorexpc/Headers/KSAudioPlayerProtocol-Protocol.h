//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class KSSongInfo, NSDictionary, NSError;
@protocol KSAudioPlayerDelegate;

@protocol KSAudioPlayerProtocol <NSObject>
@property(readonly, nonatomic) double playTimeWithNoPause;
@property(readonly, nonatomic) unsigned int secondCacheCnt;
@property(readonly, nonatomic) double cacheProgress;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double curTime;
@property(nonatomic) _Bool pauseOnHeadPhoneOut;
@property(nonatomic) _Bool manualProcessInterrup;
@property(nonatomic) float volume;
@property(readonly, nonatomic) unsigned long long status;
@property(nonatomic) __weak id <KSAudioPlayerDelegate> delegate;
@property(readonly, nonatomic) KSSongInfo *curSong;
- (unsigned long long)errType;
- (NSError *)errDetail;
- (NSDictionary *)dataProviderDetail;
- (double)firstBufTime;
- (void)seek:(double)arg1;
- (void)resume;
- (void)pause;
- (void)stop;
- (_Bool)play:(KSSongInfo *)arg1 seekTime:(double)arg2;
- (_Bool)play:(KSSongInfo *)arg1;
@end

