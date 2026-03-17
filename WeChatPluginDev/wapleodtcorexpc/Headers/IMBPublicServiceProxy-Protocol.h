//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol IMBPublicService;

@protocol IMBPublicServiceProxy <NSObject>

@optional
- (id <IMBPublicService>)providePublicServiceObject:(NSString *)arg1;
@end

