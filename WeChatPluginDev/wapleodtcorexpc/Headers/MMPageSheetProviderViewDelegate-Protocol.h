//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIViewController;
@protocol MMPageSheetProvider;

@protocol MMPageSheetProviderViewDelegate <NSObject>
- (UIViewController *)getContainerViewController;
- (void)onPageSheetDismiss:(id <MMPageSheetProvider>)arg1 complete:(void (^)(void))arg2;
@end

