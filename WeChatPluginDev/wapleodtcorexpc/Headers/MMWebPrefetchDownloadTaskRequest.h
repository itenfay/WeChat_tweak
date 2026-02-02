//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface MMWebPrefetchDownloadTaskRequest
{
    _Bool _isUsingSingtonVM;
    unsigned int _requestId;
    unsigned int _scene;
    unsigned int _subScene;
    NSString *_url;
    NSDictionary *_requestHeader;
    NSString *_pathForRespHeader;
    NSString *_pathForRespData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isUsingSingtonVM; // @synthesize isUsingSingtonVM=_isUsingSingtonVM;
@property(nonatomic) unsigned int subScene; // @synthesize subScene=_subScene;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *pathForRespData; // @synthesize pathForRespData=_pathForRespData;
@property(copy, nonatomic) NSString *pathForRespHeader; // @synthesize pathForRespHeader=_pathForRespHeader;
@property(retain, nonatomic) NSDictionary *requestHeader; // @synthesize requestHeader=_requestHeader;
@property(nonatomic) unsigned int requestId; // @synthesize requestId=_requestId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

