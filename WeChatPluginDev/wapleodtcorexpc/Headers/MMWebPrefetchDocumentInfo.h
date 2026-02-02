//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface MMWebPrefetchDocumentInfo
{
    unsigned int _status;
    unsigned int _maxCacheTime;
    unsigned int _clientCacheTime;
    unsigned int _lastModifyTime;
    unsigned int _prefetchResOption;
    unsigned int _bizScene;
    unsigned int _subBizScene;
    NSString *_htmlString;
    NSDictionary *_respHeader;
    unsigned long long _version;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int subBizScene; // @synthesize subBizScene=_subBizScene;
@property(nonatomic) unsigned int bizScene; // @synthesize bizScene=_bizScene;
@property(nonatomic) unsigned int prefetchResOption; // @synthesize prefetchResOption=_prefetchResOption;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) unsigned int lastModifyTime; // @synthesize lastModifyTime=_lastModifyTime;
@property(nonatomic) unsigned int clientCacheTime; // @synthesize clientCacheTime=_clientCacheTime;
@property(nonatomic) unsigned int maxCacheTime; // @synthesize maxCacheTime=_maxCacheTime;
@property(retain, nonatomic) NSDictionary *respHeader; // @synthesize respHeader=_respHeader;
@property(copy, nonatomic) NSString *htmlString; // @synthesize htmlString=_htmlString;
@property(nonatomic) unsigned int status; // @synthesize status=_status;

@end

