//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSData, NSString, WCFinderDataItem;
@protocol MMFinderLivePkWinningConditionArguments;

@interface WCFinderLiveNewApplyBattleCGI
{
    unsigned int _battleLayout;
    WCFinderDataItem *_dataItem;
    NSData *_liveCookies;
    NSString *_liveMicId;
    unsigned long long _battleMode;
    unsigned long long _battleScope;
    unsigned long long _battleDuration;
    NSArray *_battleTeams;
    NSString *_vroomId;
    unsigned long long _winningCondition;
    id <MMFinderLivePkWinningConditionArguments> _winningConditionArguments;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) id <MMFinderLivePkWinningConditionArguments> winningConditionArguments; // @synthesize winningConditionArguments=_winningConditionArguments;
@property(nonatomic) unsigned long long winningCondition; // @synthesize winningCondition=_winningCondition;
@property(nonatomic) unsigned int battleLayout; // @synthesize battleLayout=_battleLayout;
@property(retain, nonatomic) NSString *vroomId; // @synthesize vroomId=_vroomId;
@property(retain, nonatomic) NSArray *battleTeams; // @synthesize battleTeams=_battleTeams;
@property(nonatomic) unsigned long long battleDuration; // @synthesize battleDuration=_battleDuration;
@property(nonatomic) unsigned long long battleScope; // @synthesize battleScope=_battleScope;
@property(nonatomic) unsigned long long battleMode; // @synthesize battleMode=_battleMode;
@property(copy, nonatomic) NSString *liveMicId; // @synthesize liveMicId=_liveMicId;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 liveMicId:(id)arg3 liveCookies:(id)arg4 battleMode:(unsigned long long)arg5 battleScope:(unsigned long long)arg6 battleDuration:(unsigned long long)arg7 battleTeams:(id)arg8 winningCondition:(unsigned long long)arg9 winningConditionArguments:(id)arg10 vroomId:(id)arg11 battleLayout:(unsigned int)arg12 successBlock:(CDUnknownBlockType)arg13 failBlock:(CDUnknownBlockType)arg14;

@end

