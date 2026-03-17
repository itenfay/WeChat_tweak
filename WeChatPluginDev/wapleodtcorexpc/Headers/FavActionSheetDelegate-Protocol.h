//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, MMUIViewController;

@protocol FavActionSheetDelegate <NSObject>
- (MMUIViewController *)getCurrentViewController;

@optional
- (void)onFavActionSheetWillDismiss;
- (void)onFavActionSheetSelectedItemWithType:(long long)arg1;
- (void)onFavActionSheetSelectedForwardToUser:(CContact *)arg1;
@end

