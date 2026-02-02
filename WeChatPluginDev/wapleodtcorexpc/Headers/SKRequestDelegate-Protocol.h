//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, SKRequest;

@protocol SKRequestDelegate <NSObject>

@optional
- (void)request:(SKRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)requestDidFinish:(SKRequest *)arg1;
@end

