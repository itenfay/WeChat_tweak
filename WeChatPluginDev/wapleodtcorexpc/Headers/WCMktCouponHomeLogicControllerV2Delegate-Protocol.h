//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSIndexPath;

@protocol WCMktCouponHomeLogicControllerV2Delegate <NSObject>
- (void)onDeleteCouponListElemDataSuccWithIndexPath:(NSIndexPath *)arg1;
- (void)onTableviewGetCouponHomepageFail;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)vcStopLoading;
- (void)vcStartLoading;
- (MMUIViewController *)getViewController;
@end

