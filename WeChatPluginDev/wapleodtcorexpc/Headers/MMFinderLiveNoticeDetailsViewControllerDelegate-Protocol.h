//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveNoticeInfo, MMFinderLiveNoticeDetailsViewController;

@protocol MMFinderLiveNoticeDetailsViewControllerDelegate <NSObject>

@optional
- (void)didFinishModLiveNoticeWithInfo:(FinderLiveNoticeInfo *)arg1;
- (void)noticeQRCodePreviewViewControllerNoticeTopChanged:(MMFinderLiveNoticeDetailsViewController *)arg1 noticeInfo:(FinderLiveNoticeInfo *)arg2;
- (void)noticeQRCodePreviewViewControllerNoticeStatusChanged:(MMFinderLiveNoticeDetailsViewController *)arg1;
- (void)noticeQRCodePreviewViewControllerDidRevokeNotice:(MMFinderLiveNoticeDetailsViewController *)arg1;
@end

