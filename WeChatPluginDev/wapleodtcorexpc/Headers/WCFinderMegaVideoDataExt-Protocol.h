//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderMegaVideo;

@protocol WCFinderMegaVideoDataExt <NSObject>

@optional
- (void)onFinderMegaVideoDelete:(NSString *)arg1;
- (void)onFinderMegaVideoPostFailWithShortId:(NSString *)arg1;
- (void)onFinderMegaVideoPost:(WCFinderMegaVideo *)arg1;
- (void)onFinderMegaVideoStartPost:(WCFinderMegaVideo *)arg1;
- (void)onFinderMegaVideoBulletOpenChangedRet:(_Bool)arg1 videoId:(NSString *)arg2 bulletOpen:(_Bool)arg3;
- (void)onFinderMegaVideoPrivateStatusChangedRet:(_Bool)arg1 videoId:(NSString *)arg2 isPrivate:(_Bool)arg3;
- (void)onFinderMegaVideoFavStatusChangedRet:(_Bool)arg1 videoId:(NSString *)arg2 isFav:(_Bool)arg3;
- (void)onFinderMegaVideoLikeStatusChangedRet:(_Bool)arg1 videoId:(NSString *)arg2 isLike:(_Bool)arg3;
@end

