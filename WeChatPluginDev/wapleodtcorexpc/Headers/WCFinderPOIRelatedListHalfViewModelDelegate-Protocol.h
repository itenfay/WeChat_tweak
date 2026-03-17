//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderPOIRelatedListHalfViewModelDelegate <NSObject>

@optional
- (void)onFetchResultSuccess;
- (void)onFetchResultError;
- (void)onFetchResultNoMore;
- (void)onSearchActionStart;
- (void)onSearchStateChanged:(_Bool)arg1;
@end

