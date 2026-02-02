//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol WCFinderNearbyRelatedViewModelDelegate <NSObject>

@optional
- (void)onNearbyRelateExit;
- (void)onNearbyRelateReloadAllData;
- (void)onNearbyRelateFetchFailWithErrorCode:(int)arg1;
- (void)onNearbyRelatedAppendMore:(NSArray *)arg1;
- (void)onNearbyRelatedNoMore;
@end

