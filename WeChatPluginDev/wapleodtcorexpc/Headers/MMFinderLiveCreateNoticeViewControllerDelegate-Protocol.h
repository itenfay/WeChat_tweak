//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveNoticeInfo, MMFinderLiveCreateNoticeViewController, NSString;

@protocol MMFinderLiveCreateNoticeViewControllerDelegate <NSObject>

@optional
- (NSString *)createLiveNoticeButtonLabelOfViewController:(MMFinderLiveCreateNoticeViewController *)arg1;
- (void)viewControllerDidCancelCreateLiveNotice:(MMFinderLiveCreateNoticeViewController *)arg1;
- (void)viewController:(MMFinderLiveCreateNoticeViewController *)arg1 didFailToCreateLiveNoticeWithErrorMessage:(NSString *)arg2;
- (void)viewController:(MMFinderLiveCreateNoticeViewController *)arg1 didFinishExtendedCreateLiveNoticeWithInfo:(FinderLiveNoticeInfo *)arg2;
- (void)viewController:(MMFinderLiveCreateNoticeViewController *)arg1 didFinishCreateLiveNoticeWithInfo:(FinderLiveNoticeInfo *)arg2;
- (void)didFinishModLiveNoticeWithInfo:(FinderLiveNoticeInfo *)arg1;
@end

