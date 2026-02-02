//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCFinderLiveStreamContainerModel;

@protocol WCFinderLiveHomePageSectionViewModelDelegate <NSObject>

@optional
- (void)onContainerSectionVMDisAppear;
- (NSArray *)getContainerSectionVisibleItemIndex;
- (void)onContainerSectionVMHomePageDeleteTid:(NSString *)arg1;
- (void)onContainerSectionVMHomePageResetState;
- (void)onContainerSectionVMFetchFailWithErroCode:(long long)arg1;
- (void)onContainerSectionVMNoMoreData;
- (void)onContainerSectionVMFetchNextPageData:(NSArray *)arg1;
- (void)onContainerSectionVMRefreshAllData:(WCFinderLiveStreamContainerModel *)arg1;
@end

