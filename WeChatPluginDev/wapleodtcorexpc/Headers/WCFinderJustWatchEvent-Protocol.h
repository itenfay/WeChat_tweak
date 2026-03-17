//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderJustWatchJumpAction;

@protocol WCFinderJustWatchEvent <NSObject>

@optional
- (void)onJustWatchControllerCleanJustWatch;
- (void)onJustWatchControllerBannderDisplayStateChanged;
- (void)onJustWatchControllerRequiredJumpToFeed:(WCFinderJustWatchJumpAction *)arg1;
- (void)onJustWatchControllerRequiredRemoveBanner;
- (void)onJustWatchControllerRequiredDisplayBanner;
- (void)onJustWatchControllerRequiredDisplay:(void (^)(long long))arg1;
@end

