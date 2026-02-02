//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WebViewSanboxAppCtxResDownloadInfo : NSObject
{
    NSString *_downloadUrl;
    NSString *_appCtxScript;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appCtxScript; // @synthesize appCtxScript=_appCtxScript;
@property(copy, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;

@end

