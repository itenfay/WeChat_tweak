//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveConnectMicUser, MMLiveKtvUserView, UIView;

@protocol MMLiveKtvUserViewDelegate <NSObject>

@optional
- (void)onLiveKTVUserView:(MMLiveKtvUserView *)arg1 micMutedButtonTappedWithUserInfo:(MMFinderLiveConnectMicUser *)arg2;
- (void)onLiveKtvUserViewAvatarTapped:(MMLiveKtvUserView *)arg1 highlightingView:(UIView *)arg2;
@end

