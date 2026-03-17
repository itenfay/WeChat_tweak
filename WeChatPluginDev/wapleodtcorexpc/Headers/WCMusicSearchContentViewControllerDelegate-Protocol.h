//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicInfo, MusicLiveSearchRespInfo, NSData, NSIndexPath, UIScrollView, WCMusicSearchContentViewController;

@protocol WCMusicSearchContentViewControllerDelegate <NSObject>
- (void)musicSearchContentViewController:(WCMusicSearchContentViewController *)arg1 scrollViewWillBeginDragging:(UIScrollView *)arg2;
- (void)musicSearchContentViewController:(WCMusicSearchContentViewController *)arg1 didClickSendWithMusicInfo:(MMMusicInfo *)arg2 coverImageData:(NSData *)arg3 responseInfo:(MusicLiveSearchRespInfo *)arg4;
- (void)musicSearchContentViewController:(WCMusicSearchContentViewController *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2 musicInfo:(MMMusicInfo *)arg3 responseInfo:(MusicLiveSearchRespInfo *)arg4;
@end

