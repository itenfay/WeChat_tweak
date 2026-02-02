//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, WCFinderDataItem;

@interface WCFinderLiveNewAcceptBattleCGI
{
    WCFinderDataItem *_dataItem;
    NSString *_battleSessionId;
    NSString *_refMicId;
    NSData *_liveCookies;
    NSString *_vroomId;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSString *vroomId; // @synthesize vroomId=_vroomId;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(copy, nonatomic) NSString *refMicId; // @synthesize refMicId=_refMicId;
@property(copy, nonatomic) NSString *battleSessionId; // @synthesize battleSessionId=_battleSessionId;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 refMicId:(id)arg3 battleSessionId:(id)arg4 liveCookies:(id)arg5 vroomId:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;

@end

