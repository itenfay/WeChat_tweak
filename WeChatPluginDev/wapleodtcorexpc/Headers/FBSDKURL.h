//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FBSDKAppLink, NSDictionary, NSURL;

@interface FBSDKURL : NSObject
{
    NSURL *_targetURL;
    NSDictionary *_targetQueryParameters;
    NSDictionary *_appLinkData;
    NSDictionary *_appLinkExtras;
    FBSDKAppLink *_appLinkReferer;
    NSURL *_inputURL;
    NSDictionary *_inputQueryParameters;
}

+ (id)queryParametersForURL:(id)arg1;
+ (id)decodeURLString:(id)arg1;
+ (id)URLForRenderBackToReferrerBarURL:(id)arg1;
+ (id)URLWithInboundURL:(id)arg1 sourceApplication:(id)arg2;
+ (id)URLWithURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *inputQueryParameters; // @synthesize inputQueryParameters=_inputQueryParameters;
@property(readonly, nonatomic) NSURL *inputURL; // @synthesize inputURL=_inputURL;
@property(readonly, nonatomic) FBSDKAppLink *appLinkReferer; // @synthesize appLinkReferer=_appLinkReferer;
@property(readonly, nonatomic) NSDictionary *appLinkExtras; // @synthesize appLinkExtras=_appLinkExtras;
@property(readonly, nonatomic) NSDictionary *appLinkData; // @synthesize appLinkData=_appLinkData;
@property(readonly, nonatomic) NSDictionary *targetQueryParameters; // @synthesize targetQueryParameters=_targetQueryParameters;
@property(readonly, nonatomic) NSURL *targetURL; // @synthesize targetURL=_targetURL;
- (id)initWithURL:(id)arg1 forOpenInboundURL:(_Bool)arg2 sourceApplication:(id)arg3 forRenderBackToReferrerBar:(_Bool)arg4;

@end

