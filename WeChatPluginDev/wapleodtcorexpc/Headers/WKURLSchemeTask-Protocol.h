//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSURLRequest, NSURLResponse;

@protocol WKURLSchemeTask <NSObject>
- (void)didFailWithError:(NSError *)arg1;
- (void)didFinish;
- (void)didReceiveData:(NSData *)arg1;
- (void)didReceiveResponse:(NSURLResponse *)arg1;
@property(nonatomic, readonly) NSURLRequest *request;
@end

