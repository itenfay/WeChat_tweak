//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSIndexPath;

@protocol WCMktCardHomeLogicControllerDelegate <NSObject>
- (void)onUpdateTopCellWithIndexPath:(NSIndexPath *)arg1;
- (void)onTableViewNeedRefresh;
- (void)onUpdateStoreElemDataSuccWithIndexPath:(NSIndexPath *)arg1;
- (void)onTableviewGetHomePageDataFail;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)vcStopLoading;
- (void)vcStartLoading;
- (MMUIViewController *)getViewController;
@end

