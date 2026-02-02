//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath;

@protocol WCFinderMoreLiveSearchViewModelDelegate <NSObject>

@optional
- (void)onFinderMoreLiveSearchResultReload:(NSIndexPath *)arg1;
- (void)onFinderMoreLiveSearchResultNetxPageError;
- (void)onFinderMoreLiveSearchResultError;
- (void)onFinderMoreLiveSearchResultAppendInfos:(NSArray *)arg1;
- (void)onFinderMoreLiveSearchResultAppendData:(NSArray *)arg1;
- (void)onFinderMoreLiveSearchResultChanged;
- (void)onFinderMoreLiveSearchResultNoMore;
- (void)onFinderMoreLiveSearchResultEmpty;
@end

