//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdDynamicCanvasUtil : NSObject
{
}

+ (_Bool)isIntendingToLoadDynamicCanvas:(id)arg1;
+ (id)genPageInfoFromCanvasLoadParams:(id)arg1;
+ (void)publishPlatformViewEvent:(id)arg1 event:(id)arg2 params:(id)arg3;
+ (id)genShareAdXml:(id)arg1 shareWebUrl:(id)arg2;
+ (id)fetchShareWebUrl:(id)arg1 pageInfo:(id)arg2;
+ (id)genStatExtString:(id)arg1;
+ (_Bool)jumpAdWebView:(id)arg1 pageInfo:(id)arg2 viewController:(id)arg3 jumpAnimationType:(int)arg4;
+ (id)appendParamsToUrl:(id)arg1 andUpdateExtraInfo:(id)arg2 withPageInfo:(id)arg3;
+ (void)registerLiteAppJsApi;
+ (id)fetchLocalResourceCache:(id)arg1 url:(id)arg2;
+ (_Bool)tryToJumpFallbackPage:(id)arg1;
+ (void)tryToOpenAdDynamicCanvasPage:(id)arg1 finderJumpInfo:(id)arg2;
+ (void)tryToOpenAdDynamicCanvasPage:(id)arg1;
+ (_Bool)canOpenAdDynamicCanvasPage:(id)arg1;

@end

