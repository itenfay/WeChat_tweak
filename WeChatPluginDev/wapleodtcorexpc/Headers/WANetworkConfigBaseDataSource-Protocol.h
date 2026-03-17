//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol WANetworkConfigBaseDataSource <NSObject>
- (unsigned int)configDefaultTimeoutMS;
- (unsigned int)configTimeoutMS;
- (unsigned int)configMaxTimeoutMS;
- (NSArray *)configDomainList;
@end

