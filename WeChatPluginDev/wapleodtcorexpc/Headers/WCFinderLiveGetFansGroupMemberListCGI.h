//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@interface WCFinderLiveGetFansGroupMemberListCGI
{
    int _memberType;
    int _sortType;
    NSData *_liveCookies;
    NSData *_lastBuffer;
    long long _liveScene;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) int sortType; // @synthesize sortType=_sortType;
@property(nonatomic) int memberType; // @synthesize memberType=_memberType;
@property(nonatomic) long long liveScene; // @synthesize liveScene=_liveScene;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
- (id)convertFansGroupMemberList:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 lastBuffer:(id)arg2 liveCookies:(id)arg3 liveScene:(long long)arg4 filterType:(unsigned long long)arg5 sortType:(unsigned long long)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;

@end

