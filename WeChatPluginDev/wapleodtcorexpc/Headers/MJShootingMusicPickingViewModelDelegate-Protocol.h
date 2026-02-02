//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJShootingMusicPickingViewModel, OMJMusicInfo;

@protocol MJShootingMusicPickingViewModelDelegate <NSObject>

@optional
- (void)musicPickingViewModel:(MJShootingMusicPickingViewModel *)arg1 didUpdateCurrentMusicInfo:(OMJMusicInfo *)arg2;
- (void)musicPickingViewModelDidFetchBGMFavMusic:(MJShootingMusicPickingViewModel *)arg1;
- (void)musicPickingViewModelDidFetchRecommendedMusic:(MJShootingMusicPickingViewModel *)arg1;
@end

