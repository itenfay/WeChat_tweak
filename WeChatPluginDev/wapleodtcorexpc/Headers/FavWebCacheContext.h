//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableDictionary, NSMutableString, NSString, NSURL;

@interface FavWebCacheContext
{
    NSURL *_currentUrl;
    NSMutableString *_htmlString;
    NSMutableDictionary *_fileSrcMap;
    NSMutableDictionary *_ajaxCacheData;
    NSMutableDictionary *_ajaxCacheHeaders;
    NSDictionary *_localStorage;
    NSDictionary *_sessionStorage;
    NSString *_cookie;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cookie; // @synthesize cookie=_cookie;
@property(retain, nonatomic) NSDictionary *sessionStorage; // @synthesize sessionStorage=_sessionStorage;
@property(retain, nonatomic) NSDictionary *localStorage; // @synthesize localStorage=_localStorage;
@property(retain, nonatomic) NSMutableDictionary *ajaxCacheHeaders; // @synthesize ajaxCacheHeaders=_ajaxCacheHeaders;
@property(retain, nonatomic) NSMutableDictionary *ajaxCacheData; // @synthesize ajaxCacheData=_ajaxCacheData;
@property(retain, nonatomic) NSMutableDictionary *fileSrcMap; // @synthesize fileSrcMap=_fileSrcMap;
@property(retain, nonatomic) NSMutableString *htmlString; // @synthesize htmlString=_htmlString;
@property(retain, nonatomic) NSURL *currentUrl; // @synthesize currentUrl=_currentUrl;
- (id)init;

@end

