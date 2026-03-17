//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIView, WCPlayerView;

@protocol WCFinderFeedCollectionViewCellProtocol <NSObject>
- (void)restorePlayerViewForLandscapeAnimation:(WCPlayerView *)arg1;
- (WCPlayerView *)extractPlayerViewForLandscapeAnimation;
- (_Bool)finderFeedCellIsCurrentMediaMute;
- (NSString *)finderFeedCellPlayerMeidaWrapIdentifier;
- (NSString *)finderFeedCellUnSupportMinimizePlayToast;
- (_Bool)finderFeedCellIsCurrentMediaSupportMinimizePlay;
- (_Bool)finderFeedCellIsCurrentMediaPlaying;

@optional
- (void)onLongPressFinderFeedCellMedia;
- (void)finderFeedCellRestoreMinimizeContentView:(UIView *)arg1 forPlay:(_Bool)arg2;
- (UIView *)finderFeedCellMinimizeContentView:(_Bool)arg1;
@end

