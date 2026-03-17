//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController;

@protocol WCPaySubLogicDelegate <NSObject>
- (MMUIViewController *)gotoViewController:(Class)arg1 withData:(id)arg2;
- (void)stopWCPayLoading;
- (void)startWCPayLoadingBlocked;
- (void)startWCPayLoading;
- (void)stopLoading;
- (void)startLoading;
@end

