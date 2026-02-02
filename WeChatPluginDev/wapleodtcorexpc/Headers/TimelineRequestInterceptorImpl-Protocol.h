//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, SnsTimeLineRequest;

@protocol TimelineRequestInterceptorImpl <NSObject>
- (NSString *)identifier;
- (void)intercept:(SnsTimeLineRequest *)arg1;
@end

