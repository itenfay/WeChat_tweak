//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FetchDataRequest_FetchItem_LaunchParam, NSString;

@protocol WABackgroundFetchExt <NSObject>

@optional
- (void)onBackgroundFetchDataReturn:(NSString *)arg1 FetchType:(NSString *)arg2 FetchData:(NSString *)arg3 FetchRequestParam:(FetchDataRequest_FetchItem_LaunchParam *)arg4;
@end

