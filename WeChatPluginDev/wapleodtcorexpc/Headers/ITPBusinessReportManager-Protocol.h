//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, TPDefaultReportInfo;

@protocol ITPBusinessReportManager <NSObject>
- (void)reportEvent:(unsigned long long)arg1 withParams:(NSDictionary *)arg2;
- (void)setReportSamplingRate:(double)arg1;
- (void)setReportInfoGetter:(TPDefaultReportInfo *)arg1;
@end

