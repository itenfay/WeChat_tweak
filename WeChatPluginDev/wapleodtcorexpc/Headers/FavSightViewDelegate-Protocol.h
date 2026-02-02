//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavSightView, NSString;

@protocol FavSightViewDelegate <NSObject>

@optional
- (void)tryToDownLoadVideo;
- (void)onGetVideoViewBottomLineCenterY:(double *)arg1 leftPartOffset:(double *)arg2 rightPartWidth:(double *)arg3 rightPartMargin:(double *)arg4;
- (void)onFavSightSizeDidChange:(FavSightView *)arg1;
- (void)onJumpToViewDetail:(NSString *)arg1;
- (void)onPlayerClickCloseButton;
- (void)onPlayerStartPlay;
@end

