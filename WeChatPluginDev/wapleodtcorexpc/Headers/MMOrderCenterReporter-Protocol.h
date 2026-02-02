//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol MMOrderCenterReporter <NSObject>
@property(readonly, nonatomic) NSString *entrySource;
- (void)reportEvent:(NSString *)arg1 parameters:(NSDictionary *)arg2;
@end

