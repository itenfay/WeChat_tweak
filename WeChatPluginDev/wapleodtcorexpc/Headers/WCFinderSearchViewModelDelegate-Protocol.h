//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath;

@protocol WCFinderSearchViewModelDelegate <NSObject>

@optional
- (void)onFinderSearchResultReload:(NSIndexPath *)arg1;
- (void)onFinderSearchResultNetxPageError;
- (void)onFinderSearchResultError;
- (void)onFinderSearchResultAppendInfosIndexPaths:(NSArray *)arg1;
- (void)onFinderSearchResultAppendDataIndexPaths:(NSArray *)arg1;
- (void)onFinderSearchResultChanged;
- (void)onFinderSearchResultNoMore;
- (void)onFinderSearchResultEmpty;
@end

