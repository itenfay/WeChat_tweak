//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface MMWebviewPrefetchResult
{
    unsigned int _prefetchResourseOption;
    unsigned int _maxCacheTime;
    unsigned int _lastModifyTime;
    unsigned int _bizScene;
    unsigned int _subBizScene;
    NSString *_urlString;
    NSString *_blankPlaceHolderUrl;
    NSString *_htmlString;
    unsigned long long _version;
    NSDictionary *_docRespHeader;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int subBizScene; // @synthesize subBizScene=_subBizScene;
@property(nonatomic) unsigned int bizScene; // @synthesize bizScene=_bizScene;
@property(retain, nonatomic) NSDictionary *docRespHeader; // @synthesize docRespHeader=_docRespHeader;
@property(nonatomic) unsigned int lastModifyTime; // @synthesize lastModifyTime=_lastModifyTime;
@property(nonatomic) unsigned int maxCacheTime; // @synthesize maxCacheTime=_maxCacheTime;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) unsigned int prefetchResourseOption; // @synthesize prefetchResourseOption=_prefetchResourseOption;
@property(copy, nonatomic) NSString *htmlString; // @synthesize htmlString=_htmlString;
@property(copy, nonatomic) NSString *blankPlaceHolderUrl; // @synthesize blankPlaceHolderUrl=_blankPlaceHolderUrl;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (id)description;

@end

