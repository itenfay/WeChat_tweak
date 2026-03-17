//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol QBDNSResolverDelegate <NSObject>
- (NSArray *)query:(NSString *)arg1 error:(id *)arg2;
@end

