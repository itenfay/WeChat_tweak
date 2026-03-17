//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ShakeItemBase, ShakePeopleItem, UIViewController;

@protocol ShakeListDelegate <NSObject>
- (void)onSelectedShakeTvResult:(ShakeItemBase *)arg1;
- (void)showViewControllerFromList:(UIViewController *)arg1 completion:(void (^)(void))arg2;
- (void)onSelectedContactInfo:(ShakePeopleItem *)arg1 isFromList:(_Bool)arg2;
@end

