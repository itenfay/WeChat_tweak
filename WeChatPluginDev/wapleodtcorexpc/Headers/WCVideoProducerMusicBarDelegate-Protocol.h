//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, WCVideoProducerMusicBarViewController, WCVideoProducerMusicCellViewModel;

@protocol WCVideoProducerMusicBarDelegate <NSObject>
- (void)onCloseMusicBarVC:(WCVideoProducerMusicBarViewController *)arg1;
- (void)musicBarVC:(WCVideoProducerMusicBarViewController *)arg1 didClickSearchButton:(id)arg2;
- (void)musicBarVC:(WCVideoProducerMusicBarViewController *)arg1 didChangeStatusForMusic:(WCVideoProducerMusicCellViewModel *)arg2 isBGMEnabled:(_Bool)arg3 isOSTEnabled:(_Bool)arg4;
- (void)musicBarVC:(WCVideoProducerMusicBarViewController *)arg1 didSelectMusic:(WCVideoProducerMusicCellViewModel *)arg2 atIndex:(NSIndexPath *)arg3;
- (void)musicBarVC:(WCVideoProducerMusicBarViewController *)arg1 willShowMusic:(WCVideoProducerMusicCellViewModel *)arg2 atIndex:(NSIndexPath *)arg3;
@end

