//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GameCenterPageCacheLogic : NSObject
{
}

+ (_Bool)needDiscardPageCacheForWebView:(id)arg1;
+ (void)markNeedDiscardPageCacheForWebView:(id)arg1;
+ (void)removePageCacheForPkgId:(id)arg1;
+ (id)readPageCacheForUrl:(id)arg1;

@end

