//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderMusicFeedVM, WCFinderProfileMusicView, WCFinderSlideMenuCellAction;

@protocol WCFinderProfileMusicViewDelegate <NSObject>
- (void)onMusicView:(WCFinderProfileMusicView *)arg1 exposeMenuAction:(WCFinderSlideMenuCellAction *)arg2 feedVM:(WCFinderMusicFeedVM *)arg3;
- (void)onMusicViewDidSlideDelete:(WCFinderProfileMusicView *)arg1 feedVM:(WCFinderMusicFeedVM *)arg2;
- (void)onMusicViewDidClickDelete:(WCFinderProfileMusicView *)arg1 feedVM:(WCFinderMusicFeedVM *)arg2;
- (void)onMusicViewDidClickRetry:(WCFinderProfileMusicView *)arg1 feedVM:(WCFinderMusicFeedVM *)arg2;
@end

