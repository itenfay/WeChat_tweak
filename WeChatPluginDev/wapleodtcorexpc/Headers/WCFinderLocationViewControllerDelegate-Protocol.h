//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLocation, NSString, WCFinderLocationViewController;

@protocol WCFinderLocationViewControllerDelegate <NSObject>
- (void)onLocationViewControllerDidSelectLocation:(FinderLocation *)arg1 scene:(int)arg2 searchWord:(NSString *)arg3 poiBusinessType:(int)arg4 fromVC:(WCFinderLocationViewController *)arg5;
- (void)onLocationViewControllerClickSureLocation:(FinderLocation *)arg1 scene:(int)arg2 searchWord:(NSString *)arg3 poiBusinessType:(int)arg4 fromVC:(WCFinderLocationViewController *)arg5;
@end

