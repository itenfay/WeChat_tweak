//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface MMWebPrefetchInjectTaskRequest
{
    _Bool _htmlStringInPkg;
    unsigned int _requestId;
    unsigned int _scene;
    unsigned int _subScene;
    NSString *_url;
    NSString *_domain;
    NSString *_identifier;
    NSArray *_arrResInfo;
    NSString *_codePkgPath;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int subScene; // @synthesize subScene=_subScene;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool htmlStringInPkg; // @synthesize htmlStringInPkg=_htmlStringInPkg;
@property(copy, nonatomic) NSString *codePkgPath; // @synthesize codePkgPath=_codePkgPath;
@property(retain, nonatomic) NSArray *arrResInfo; // @synthesize arrResInfo=_arrResInfo;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned int requestId; // @synthesize requestId=_requestId;

@end

