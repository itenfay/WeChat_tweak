//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMWebPrefetchResPkgDownloadRequest : NSObject
{
    unsigned int _requestId;
    unsigned int _scene;
    unsigned int _subScene;
    NSString *_packageIdentifier;
    NSString *_packageUrl;
    NSString *_packageMd5;
    NSString *_packageVersion;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int subScene; // @synthesize subScene=_subScene;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int requestId; // @synthesize requestId=_requestId;
@property(copy, nonatomic) NSString *packageVersion; // @synthesize packageVersion=_packageVersion;
@property(copy, nonatomic) NSString *packageMd5; // @synthesize packageMd5=_packageMd5;
@property(copy, nonatomic) NSString *packageUrl; // @synthesize packageUrl=_packageUrl;
@property(copy, nonatomic) NSString *packageIdentifier; // @synthesize packageIdentifier=_packageIdentifier;

@end

