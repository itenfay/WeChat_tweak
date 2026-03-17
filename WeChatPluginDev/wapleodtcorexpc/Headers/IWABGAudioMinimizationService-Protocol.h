//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WABGAudioMinimizationItemInfo;

@protocol IWABGAudioMinimizationService <NSObject>
+ (void)prepareForMinimizationCoverStyle:(NSString *)arg1;
+ (_Bool)hasVoipBGAudio;
+ (void)stopBGAudio;
+ (_Bool)dismiss:(NSString *)arg1;
+ (_Bool)show:(NSString *)arg1;
+ (_Bool)updateState:(long long)arg1 forHost:(NSString *)arg2;
+ (void)clearBGAudioInfoForHost:(NSString *)arg1;
+ (WABGAudioMinimizationItemInfo *)bgAudioInfo:(NSString *)arg1;
+ (void)updateBGAudioInfo:(WABGAudioMinimizationItemInfo *)arg1 forHost:(NSString *)arg2;
+ (_Bool)isBGAudioEnabled;
@end

