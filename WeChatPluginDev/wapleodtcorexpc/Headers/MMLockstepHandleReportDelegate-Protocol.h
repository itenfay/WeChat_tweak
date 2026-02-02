//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMLockstepHandleReportDelegate <NSObject>
- (NSString *)getNetType;
- (void)lockStepIDKeyStat:(const void *)arg1;
- (void)lockStepKVStat:(long long)arg1 kv:(NSString *)arg2;
@end

