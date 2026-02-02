//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderBGMPlayer;

@protocol WCFinderBGMPlayerDelegate <NSObject>

@optional
- (void)onBGMPlayerProgressChanged:(WCFinderBGMPlayer *)arg1;
- (void)onBGMPlayerDidPause:(WCFinderBGMPlayer *)arg1;
- (void)onBGMPlayerDidPlay:(WCFinderBGMPlayer *)arg1;
- (void)onBGMPlayerPlayToEnd:(WCFinderBGMPlayer *)arg1;
- (void)onBGMPlayerReadyToPlay:(WCFinderBGMPlayer *)arg1;
@end

