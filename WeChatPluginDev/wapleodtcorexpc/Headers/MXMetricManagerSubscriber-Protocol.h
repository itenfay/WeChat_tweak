//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol MXMetricManagerSubscriber <NSObject>

@optional
- (void)didReceiveDiagnosticPayloads:(NSArray *)arg1;
- (void)didReceiveMetricPayloads:(NSArray *)arg1;
@end

