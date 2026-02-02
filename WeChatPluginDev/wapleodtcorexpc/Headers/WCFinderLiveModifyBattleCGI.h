//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, WCFinderDataItem;

@interface WCFinderLiveModifyBattleCGI
{
    unsigned int _battleLayout;
    WCFinderDataItem *_dataItem;
    NSString *_battleId;
    NSData *_liveCookies;
    unsigned long long _modifyFlag;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) unsigned int battleLayout; // @synthesize battleLayout=_battleLayout;
@property(nonatomic) unsigned long long modifyFlag; // @synthesize modifyFlag=_modifyFlag;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) NSString *battleId; // @synthesize battleId=_battleId;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 battleId:(id)arg3 liveCookies:(id)arg4 modifyFlag:(unsigned long long)arg5 battleLayout:(unsigned int)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;

@end

