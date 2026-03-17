//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class LensInfo, NSString;

@protocol EmoticonLensInfoBatchCgiDelegate <NSObject>
- (void)onEmoticonLensInfoInvalid:(NSString *)arg1 errType:(long long)arg2;
- (void)onEmoticonLensInfoSuccess:(LensInfo *)arg1 forLensId:(NSString *)arg2 finish:(_Bool)arg3;
- (void)onEmoticonLensInfoFail:(NSString *)arg1;
@end

