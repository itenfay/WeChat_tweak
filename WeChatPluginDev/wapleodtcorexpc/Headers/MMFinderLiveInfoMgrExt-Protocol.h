//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveAudioRoomBackgroundImageInfo, NSString, WCFinderLiveInfo;

@protocol MMFinderLiveInfoMgrExt <NSObject>

@optional
- (void)onFinderLiveAudioRoomBackgroundImageInfoUpdated:(MMFinderLiveAudioRoomBackgroundImageInfo *)arg1 originalUrlString:(NSString *)arg2;
- (void)onFinderLiveHomePageStatusOnlineCountChange:(long long)arg1 participantWording:(NSString *)arg2;
- (void)onFinderLiveActivityType:(unsigned long long)arg1 tid:(NSString *)arg2;
- (void)onFinderLiveInfoUpdated:(WCFinderLiveInfo *)arg1 tid:(NSString *)arg2;
@end

