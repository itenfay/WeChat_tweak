//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol WCFinderTopicListViewModelDelegate <NSObject>

@optional
- (void)onFinderEventInvalidWithErrorCode:(int)arg1;
- (void)onFinderEventClose:(_Bool)arg1;
- (void)onFinderEventHeaderViewNeedRefresh;
- (void)onFinderSearchResultUpdatePatNavTitle;
- (void)onFinderSearchResultCannotPat;
- (void)onFinderSearchResultReload;
- (void)onFinderSearchResultNetxPageError;
- (void)onFinderSearchResultError;
- (void)onFinderSearchResultAppendData:(NSArray *)arg1;
- (void)onFinderSearchResultChanged;
- (void)onFinderSearchResultNoMore;
- (void)onFinderSearchResultEmpty;
@end

