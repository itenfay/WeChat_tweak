//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FavWebCacheJavaScriptUtil : NSObject
{
}

+ (id)handleImgClickScript;
+ (id)fixIframeScript;
+ (id)fixImgSrcScript;
+ (id)existFileSrcScript:(id)arg1;
+ (id)getElementScriptAtPoint:(struct CGPoint)arg1 atView:(id)arg2;
+ (id)getTitleScript;
+ (id)hookLocationScript:(id)arg1;
+ (id)hookStorageScript:(id)arg1;
+ (id)hookDomScript;
+ (id)hookFetchAPIScript;
+ (id)hookAjaxScript:(_Bool)arg1;
+ (id)webViewDownloadScript:(id)arg1;
+ (id)getStorageScript;
+ (id)getHtmlContentAndFileUrlScript;

@end

