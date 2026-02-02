//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TPAssetResourceLoadingRequest;

@protocol TPAssetResourceLoadingRequestDelegate <NSObject>
- (void)onLoadingRequestFinished:(TPAssetResourceLoadingRequest *)arg1;
@end

