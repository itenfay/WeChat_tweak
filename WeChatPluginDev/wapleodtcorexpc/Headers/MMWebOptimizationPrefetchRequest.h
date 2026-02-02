//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSDictionary, NSString;

@interface MMWebOptimizationPrefetchRequest
{
    _Bool _canRedirect;
    _Bool _shouldPrefetchContent;
    _Bool _isUseSingletonVM;
    unsigned int _scene;
    unsigned int _subScene;
    unsigned int _prefetchMode;
    unsigned int _fetchPkgType;
    NSString *_identifier;
    NSString *_domain;
    NSString *_url;
    NSArray *_resUrls;
    NSDictionary *_httpHeader;
    NSString *_pkgAppId;
    NSString *_pkgUserName;
    NSString *_transferScope;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *transferScope; // @synthesize transferScope=_transferScope;
@property(nonatomic) unsigned int fetchPkgType; // @synthesize fetchPkgType=_fetchPkgType;
@property(nonatomic) unsigned int prefetchMode; // @synthesize prefetchMode=_prefetchMode;
@property(nonatomic) _Bool isUseSingletonVM; // @synthesize isUseSingletonVM=_isUseSingletonVM;
@property(copy, nonatomic) NSString *pkgUserName; // @synthesize pkgUserName=_pkgUserName;
@property(copy, nonatomic) NSString *pkgAppId; // @synthesize pkgAppId=_pkgAppId;
@property(nonatomic) _Bool shouldPrefetchContent; // @synthesize shouldPrefetchContent=_shouldPrefetchContent;
@property(retain, nonatomic) NSDictionary *httpHeader; // @synthesize httpHeader=_httpHeader;
@property(retain, nonatomic) NSArray *resUrls; // @synthesize resUrls=_resUrls;
@property(nonatomic) _Bool canRedirect; // @synthesize canRedirect=_canRedirect;
@property(nonatomic) unsigned int subScene; // @synthesize subScene=_subScene;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;

@end

