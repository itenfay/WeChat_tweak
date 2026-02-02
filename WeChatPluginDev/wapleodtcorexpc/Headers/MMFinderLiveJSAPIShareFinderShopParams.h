//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveJSAPIShareFinderShopParams_LiteAppInfo, MMFinderLiveJSAPIShareFinderShopParams_ShareInfo;

@interface MMFinderLiveJSAPIShareFinderShopParams : NSObject
{
    MMFinderLiveJSAPIShareFinderShopParams_ShareInfo *_shareInfo;
    MMFinderLiveJSAPIShareFinderShopParams_LiteAppInfo *_liteAppInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveJSAPIShareFinderShopParams_LiteAppInfo *liteAppInfo; // @synthesize liteAppInfo=_liteAppInfo;
@property(retain, nonatomic) MMFinderLiveJSAPIShareFinderShopParams_ShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;

@end

