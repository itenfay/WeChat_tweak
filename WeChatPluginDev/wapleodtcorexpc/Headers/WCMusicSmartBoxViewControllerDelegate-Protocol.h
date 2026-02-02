//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MusicLiveSearchSmartBoxRespInfo, NSIndexPath, UIScrollView, WCMusicSmartBoxViewController;

@protocol WCMusicSmartBoxViewControllerDelegate <NSObject>
- (void)musicSmartBoxViewController:(WCMusicSmartBoxViewController *)arg1 scrollViewWillBeginDragging:(UIScrollView *)arg2;
- (void)musicSmartBoxViewController:(WCMusicSmartBoxViewController *)arg1 didSelectItemWithInfo:(MusicLiveSearchSmartBoxRespInfo *)arg2 indexPath:(NSIndexPath *)arg3;
@end

