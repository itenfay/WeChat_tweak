//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSIndexPath;

@protocol WCMktCouponHomeLogicControllerDelegate <NSObject>
- (void)onTableViewNeedUpdateSortContent;
- (void)onTableViewNeedUpdateWithIndexPath:(NSIndexPath *)arg1;
- (void)onTableViewNeedShowLoading;
- (void)onTableviewGetHomePageDataFail;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)vcStopLoading;
- (void)vcStartLoading;
- (MMUIViewController *)getViewController;
@end

