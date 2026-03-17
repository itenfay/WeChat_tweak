//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderProfilePOISearchViewModelDelegate <NSObject>
- (void)onFetchResultError;
- (void)onFetchResultNoMore;
- (void)onFetchResultChanged;
- (void)onPOISearchResultError;
- (void)onPOISearchResultChanged;
@end

