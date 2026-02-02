//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderPOIFavListViewModelDelegate <NSObject>

@optional
- (void)onPOIFavListViewModelNoMoreData;
- (void)onPOIFavListViewModelFetchDataFail;
- (void)onPOIFavListViewModelDataChanged;
@end

