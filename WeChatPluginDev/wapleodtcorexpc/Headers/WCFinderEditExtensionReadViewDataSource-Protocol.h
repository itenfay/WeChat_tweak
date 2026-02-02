//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCFinderEditExtensionReadViewDataSource <NSObject>
- (NSString *)onExtensionReadErrorBySupportType:(long long)arg1 text:(NSString *)arg2;
- (NSString *)onExtensionReadWarningBySupportType:(long long)arg1;
@end

