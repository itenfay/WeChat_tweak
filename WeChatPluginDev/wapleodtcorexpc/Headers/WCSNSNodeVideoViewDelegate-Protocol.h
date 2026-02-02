//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCSNSNodeVideoView;

@protocol WCSNSNodeVideoViewDelegate <NSObject>

@optional
- (void)OnDownloadSuccessForFavoriteAdd;
- (void)OnDownloadSuccessForSaveVideoToAlbum;
- (void)OnDownloadSuccessForForwardVideoToFriend;
- (void)onWillFullPlay:(_Bool *)arg1 sightView:(WCSNSNodeVideoView *)arg2;
- (void)onJumpToViewDetail:(NSString *)arg1;
- (void)onLongPressedWCSight:(WCSNSNodeVideoView *)arg1;
- (void)onClickWCSight:(WCSNSNodeVideoView *)arg1;
@end

