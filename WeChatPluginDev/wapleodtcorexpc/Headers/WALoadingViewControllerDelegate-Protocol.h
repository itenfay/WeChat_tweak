//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WALoadingViewController;

@protocol WALoadingViewControllerDelegate <NSObject>
- (void)onAppBrandLoadingViewReturn:(WALoadingViewController *)arg1;

@optional
- (void)rebootInLoading;
@end

