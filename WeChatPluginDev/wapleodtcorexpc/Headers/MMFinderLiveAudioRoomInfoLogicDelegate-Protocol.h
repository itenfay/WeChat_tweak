//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveKtvUserView, NSString, UIView;

@protocol MMFinderLiveAudioRoomInfoLogicDelegate <NSObject>

@optional
- (int)onMMFinderLiveAudioRoomTryGetCommentScene;
- (NSString *)onMMFinderLiveAudioRoomTryGetAnchorSdkUserId;
- (_Bool)onMMFinderLiveAudioRoomCheckLivePauseViewShow;
- (void)onMMFinderLiveAudioRoomKTVSingerTappedBlock:(MMLiveKtvUserView *)arg1 highlight:(UIView *)arg2;
@end

