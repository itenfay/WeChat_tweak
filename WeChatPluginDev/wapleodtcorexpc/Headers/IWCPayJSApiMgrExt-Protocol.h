//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol IWCPayJSApiMgrExt <NSObject>

@optional
- (void)onWCPayJSApiResult:(NSDictionary *)arg1 needCloseWebview:(_Bool)arg2 tinyappUsername:(NSString *)arg3 tinyappPath:(NSString *)arg4;
- (void)onWCPayJSApiResult:(NSDictionary *)arg1 needCloseWebview:(_Bool)arg2;
- (void)onWCPayJSApiEnd:(_Bool)arg1;
- (void)onWCPayJSApiBegin:(_Bool)arg1;
@end

