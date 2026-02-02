//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, WCFinderFollowCGIRequestParams;

@interface WCFinderFollowCGI
{
    unsigned int _enterType;
    unsigned int _enhanceFollowBtn;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    unsigned long long _optype;
    NSString *_posterUsername;
    NSString *_finderUsername;
    NSString *_objectID;
    unsigned long long _reportScene;
    NSString *_sessionBuffer;
    unsigned long long _followScene;
    NSString *_sessionExtraKey;
    NSData *_liveCookies;
    unsigned long long _fromMentionID;
    WCFinderFollowCGIRequestParams *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFollowCGIRequestParams *params; // @synthesize params=_params;
@property(nonatomic) unsigned int enhanceFollowBtn; // @synthesize enhanceFollowBtn=_enhanceFollowBtn;
@property(nonatomic) unsigned long long fromMentionID; // @synthesize fromMentionID=_fromMentionID;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) NSString *sessionExtraKey; // @synthesize sessionExtraKey=_sessionExtraKey;
@property(nonatomic) unsigned long long followScene; // @synthesize followScene=_followScene;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) NSString *posterUsername; // @synthesize posterUsername=_posterUsername;
@property(nonatomic) unsigned int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) unsigned long long optype; // @synthesize optype=_optype;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)additionalUdfKVInfo;
- (void)createRequest;
- (id)initWithParams:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

@end

