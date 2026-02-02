//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "WCStoryVideoPlayerViewDelegate-Protocol.h"

@class WCStoryPreviewPageView;

@protocol WCStoryPreviewPageViewDelegate <NSObject, WCStoryVideoPlayerViewDelegate>

@optional
- (void)onClickPageView:(WCStoryPreviewPageView *)arg1 toHideUIElement:(_Bool)arg2;
- (void)onCommentListView:(WCStoryPreviewPageView *)arg1 show:(_Bool)arg2;
- (void)onLongPressToHidePageView:(WCStoryPreviewPageView *)arg1;
- (void)onLongPressToDeletePageView:(WCStoryPreviewPageView *)arg1;
@end

