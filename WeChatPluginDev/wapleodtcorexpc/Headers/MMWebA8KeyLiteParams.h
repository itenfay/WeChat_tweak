//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMWebA8KeyLiteParams
{
    _Bool _skipPrefetch;
    _Bool _fromKara;
    unsigned int _scene;
    unsigned int _msgType;
    unsigned int _appMsgInnerType;
    NSString *_urlString;
    NSString *_referUrl;
    NSString *_appId;
    NSString *_title;
    NSString *_desc;
    unsigned long long _readerIndex;
    long long _subBizScene;
    NSString *_extInfo;
    NSString *_prefetcherId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *prefetcherId; // @synthesize prefetcherId=_prefetcherId;
@property(nonatomic) unsigned int appMsgInnerType; // @synthesize appMsgInnerType=_appMsgInnerType;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) _Bool fromKara; // @synthesize fromKara=_fromKara;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) _Bool skipPrefetch; // @synthesize skipPrefetch=_skipPrefetch;
@property(nonatomic) long long subBizScene; // @synthesize subBizScene=_subBizScene;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long readerIndex; // @synthesize readerIndex=_readerIndex;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *referUrl; // @synthesize referUrl=_referUrl;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;

@end

