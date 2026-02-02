//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderFeedContentVM;

@protocol WCFinderTopicListDetailViewModelDelegate <NSObject>

@optional
- (void)onFinderTopicListFeedWithTid:(NSString *)arg1 pinToTop:(_Bool)arg2 errorCode:(int)arg3;
- (void)onFinderTopicListBeDeletedWith:(WCFinderFeedContentVM *)arg1 originIndex:(long long)arg2;
- (void)onFinderTopicListResultEmpty;
- (void)onFinderTopicListResultError;
- (void)onFinderTopicListAppendData:(long long)arg1 toIndex:(long long)arg2;
- (void)onFinderTopicListNextPageError;
- (void)onFinderTopicListResultChanged;
- (void)onFinderTopicListResultNoMore;
@end

