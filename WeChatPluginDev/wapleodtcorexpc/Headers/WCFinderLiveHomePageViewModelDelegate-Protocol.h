//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCFinderLiveHomePageViewModelDelegate <NSObject>
- (void)onHomePageBatchReplaceDataFromRange:(struct _NSRange)arg1 insertRange:(struct _NSRange)arg2 removeRange:(struct _NSRange)arg3 section:(unsigned long long)arg4;
- (void)onHomePageLiveStreamBatchLoadBottom;
- (void)onHomePageUpdateFlowLoadState;
- (void)onHomePageFakeLoadingFinish;
- (void)onHomePageResponseFlagUpdate;
- (void)onHomePageDeleteContainerTid:(NSString *)arg1 containerId:(unsigned long long)arg2;
- (void)onHomePageNavTabsUpdate;
- (void)onHomePageFetchAppendDataFrom:(long long)arg1 toIndex:(long long)arg2 section:(unsigned long long)arg3;
- (void)onHomePageFetchFailWithErrorCode:(int)arg1 section:(unsigned long long)arg2;
- (void)onHomePageHasNoMoreData:(unsigned long long)arg1;
- (void)onHomePageRefreshSectionAllData:(unsigned long long)arg1;
- (void)onHomePageRefreshAllData;
@end

