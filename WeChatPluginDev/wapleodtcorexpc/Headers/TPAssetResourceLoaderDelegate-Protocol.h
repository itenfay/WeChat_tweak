//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TPAssetResourceLoader, TPAssetResourceLoadingRequest;

@protocol TPAssetResourceLoaderDelegate <NSObject>
- (void)tpResourceLoader:(TPAssetResourceLoader *)arg1 didCancelLoadingRequest:(TPAssetResourceLoadingRequest *)arg2;
- (_Bool)tpResourceLoader:(TPAssetResourceLoader *)arg1 shouldWaitForLoadingOfRequestedResource:(TPAssetResourceLoadingRequest *)arg2;

@optional
- (int)tpResourceLoader:(TPAssetResourceLoader *)arg1 fileName:(NSString *)arg2 requestBuffer:(char *)arg3 offset:(long long)arg4 bufferLength:(int)arg5;
@end

