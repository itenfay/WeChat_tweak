//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IFTSMessageExt <NSObject>
- (void)onFTSMessageDBDidRepairIndexForUsername:(NSString *)arg1 result:(_Bool)arg2;
- (void)onFTSMessageDBWillRepairIndexForUsername:(NSString *)arg1;
@end

