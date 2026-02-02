//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicInfo, NSIndexPath, UIScrollView, WCMusicListenHistoryViewController;

@protocol WCMusicListenHistoryViewControllerDelegate <NSObject>
- (void)musicListenHistoryViewController:(WCMusicListenHistoryViewController *)arg1 didSelectItemWithMusicInfo:(MMMusicInfo *)arg2 indexPath:(NSIndexPath *)arg3;
- (void)musicListenHistoryViewController:(WCMusicListenHistoryViewController *)arg1 scrollViewWillBeginDragging:(UIScrollView *)arg2;
@end

