//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol KSCrashReportFilter <NSObject>
- (void)filterReports:(NSArray *)arg1 onCompletion:(void (^)(NSArray *, _Bool, NSError *))arg2;
@end

