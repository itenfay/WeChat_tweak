//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVAssetResourceLoader, AVAssetResourceLoadingRequest, AVAssetResourceRenewalRequest, NSURLAuthenticationChallenge;

@protocol AVAssetResourceLoaderDelegate <NSObject>

@optional
- (void)resourceLoader:(AVAssetResourceLoader *)arg1 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (_Bool)resourceLoader:(AVAssetResourceLoader *)arg1 shouldWaitForResponseToAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)resourceLoader:(AVAssetResourceLoader *)arg1 didCancelLoadingRequest:(AVAssetResourceLoadingRequest *)arg2;
- (_Bool)resourceLoader:(AVAssetResourceLoader *)arg1 shouldWaitForRenewalOfRequestedResource:(AVAssetResourceRenewalRequest *)arg2;
- (_Bool)resourceLoader:(AVAssetResourceLoader *)arg1 shouldWaitForLoadingOfRequestedResource:(AVAssetResourceLoadingRequest *)arg2;
@end

