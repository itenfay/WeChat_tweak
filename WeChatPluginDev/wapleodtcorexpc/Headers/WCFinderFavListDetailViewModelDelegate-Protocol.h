//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderFavListDetailViewModelDelegate <NSObject>

@optional
- (void)onFinderSearchListEmpty;
- (void)finderFavListLoadFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onFinderSearchListNextPageError;
- (void)onFinderSearchListResultChanged;
- (void)onFinderSearchListResultNoMore;
@end

