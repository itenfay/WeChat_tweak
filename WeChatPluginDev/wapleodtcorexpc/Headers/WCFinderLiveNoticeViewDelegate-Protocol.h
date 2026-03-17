//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderLiveNoticeView;

@protocol WCFinderLiveNoticeViewDelegate <NSObject>

@optional
- (void)onLiveNoticeViewMoreNoticesButtonClicked:(WCFinderLiveNoticeView *)arg1;
- (void)onLiveNoticeViewMainNoticeButtonClicked:(WCFinderLiveNoticeView *)arg1;
- (void)onLiveNoticeViewActionButtonClicked:(WCFinderLiveNoticeView *)arg1;
- (void)onLiveNoticeViewShrinkIntroduction:(WCFinderLiveNoticeView *)arg1;
- (void)onLiveNoticeViewExpandIntroduction:(WCFinderLiveNoticeView *)arg1;
@end

