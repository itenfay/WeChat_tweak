//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, WCFinderAudienceReserveLiveCGIExtentParams;

@interface WCFinderAudienceReserveLiveCGI
{
    unsigned int _optype;
    unsigned int _scene;
    unsigned int _enterType;
    NSString *_anchorUsername;
    NSString *_noticeId;
    NSString *_promoterToken;
    NSString *_sessionBuffer;
    NSArray *_noticeAggregateTypeArray;
    WCFinderAudienceReserveLiveCGIExtentParams *_extentParams;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) WCFinderAudienceReserveLiveCGIExtentParams *extentParams; // @synthesize extentParams=_extentParams;
@property(retain, nonatomic) NSArray *noticeAggregateTypeArray; // @synthesize noticeAggregateTypeArray=_noticeAggregateTypeArray;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) unsigned int enterType; // @synthesize enterType=_enterType;
@property(copy, nonatomic) NSString *promoterToken; // @synthesize promoterToken=_promoterToken;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int optype; // @synthesize optype=_optype;
@property(copy, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
@property(copy, nonatomic) NSString *anchorUsername; // @synthesize anchorUsername=_anchorUsername;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithAnchorUserName:(id)arg1 noticeId:(id)arg2 optype:(unsigned int)arg3 scene:(unsigned int)arg4 promoterToken:(id)arg5 config:(id)arg6 enterType:(unsigned int)arg7 sessionBuffer:(id)arg8 aggregateTypeArray:(id)arg9 extentParams:(id)arg10 successBlock:(CDUnknownBlockType)arg11 failureBlock:(CDUnknownBlockType)arg12;

@end

