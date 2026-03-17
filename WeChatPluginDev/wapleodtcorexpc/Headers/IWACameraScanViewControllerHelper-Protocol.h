//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController;
@protocol WACameraScanViewControllerHelperDelegate;

@protocol IWACameraScanViewControllerHelper <NSObject>
- (MMUIViewController *)getCameraScanViewViewController;
- (void)setDelegate:(id <WACameraScanViewControllerHelperDelegate>)arg1;
@end

