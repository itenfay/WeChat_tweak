//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMVoidCallback, NSString;

@protocol MMKProgressDialog <NSObject>
- (void)showCustomLoading:(NSString *)arg1 block:(_Bool)arg2;
- (void)showPayGlobalLoading:(_Bool)arg1;
- (void)showNormalGlobalLoading:(_Bool)arg1;
- (void)showNormalLoading:(_Bool)arg1;
- (void)showTopLoading:(NSString *)arg1 block:(_Bool)arg2;
- (void)dismiss;
- (void)showToast:(NSString *)arg1;
- (void)showPayProcessImpl:(_Bool)arg1 cancel:(MMVoidCallback *)arg2;
- (void)showImpl:(NSString *)arg1 canCancel:(_Bool)arg2 cancel:(MMVoidCallback *)arg3;
@end

