//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WebViewMenuCustomizeLogic : NSObject
{
    NSMutableDictionary *dicJSMenuDataForUrl;
}

- (void).cxx_destruct;
- (id)getJSCutomWebViewMenuDataForMainUrl:(id)arg1;
- (void)setJSCustomMenuData:(id)arg1 forMainUrl:(id)arg2;
- (id)getArrDynamicConfigWebViewMenuData;
- (id)init;

@end

