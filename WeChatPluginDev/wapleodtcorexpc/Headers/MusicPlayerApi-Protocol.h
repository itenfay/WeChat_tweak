//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FLMusicIntType, FlutterMusicInfo, NSNumber, NSString;

@protocol MusicPlayerApi
- (NSNumber *)canPlayMusicWithError:(id *)arg1;
- (void)clearHistoryWithError:(id *)arg1;
- (NSString *)getHistoryWithError:(id *)arg1;
- (FLMusicIntType *)getDurationWithError:(id *)arg1;
- (FLMusicIntType *)getCurrentPositionWithError:(id *)arg1;
- (void)seekTimeMs:(FLMusicIntType *)arg1 error:(id *)arg2;
- (void)stopWithError:(id *)arg1;
- (void)resumeWithError:(id *)arg1;
- (void)pauseWithError:(id *)arg1;
- (void)playInfo:(FlutterMusicInfo *)arg1 error:(id *)arg2;
- (FlutterMusicInfo *)getCurrentMusicWithError:(id *)arg1;
@end

