//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCFinderLiteAppParams;

@protocol WCFinderBusinessCustomListDetailViewModelDelegate <NSObject>
- (void)onFinderBusinessListOnStateOpenLiteApp:(WCFinderLiteAppParams *)arg1;
- (void)onFinderBusinessListOnStateOpenComplaintUrl:(NSString *)arg1;
- (void)onFinderBusinessListStopCurrentFeedPlay;
- (void)onFinderBusinessListOnStateOfNotExist:(NSString *)arg1;
- (void)onFinderBusinessListNextPageError;
- (void)onFinderBusinessListAppendData:(long long)arg1 toIndex:(long long)arg2;
- (void)onFinderBusinessListResultNoMore;
- (void)onFinderBusinessListResultTopNoMore;
- (void)onFinderBusinessListResultChanged:(_Bool)arg1;
- (void)onFinderBusinessListFetchTopError;
- (void)onFinderBusinessListFetchTopContentVM:(NSArray *)arg1 isPrefetch:(_Bool)arg2;
@end

