//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderMegaVideo;

@protocol WCFinderMegaVideoPropertyExt <NSObject>

@optional
- (void)onFinderMegaVideoUpdate:(WCFinderMegaVideo *)arg1;
- (void)onFinderMegaVideoBulletOpenChanged:(WCFinderMegaVideo *)arg1 videoId:(NSString *)arg2;
- (void)onFinderMegaVideoPrivateChanged:(WCFinderMegaVideo *)arg1 videoId:(NSString *)arg2;
- (void)onFinderMegaVideoFavChanged:(WCFinderMegaVideo *)arg1 videoId:(NSString *)arg2;
- (void)onFinderMegaVideoLikeChanged:(WCFinderMegaVideo *)arg1 videoId:(NSString *)arg2;
@end

