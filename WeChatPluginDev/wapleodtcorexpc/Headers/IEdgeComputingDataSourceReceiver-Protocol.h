//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EdgeComputingScriptConfigModel, NSString;

@protocol IEdgeComputingDataSourceReceiver <NSObject>
- (void)onReceiveData:(NSString *)arg1 withConfig:(EdgeComputingScriptConfigModel *)arg2 withTime:(unsigned long long)arg3;
@end

