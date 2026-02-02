//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderLiveGetPkWinningConditionArgumentOptionsCgi
{
    unsigned int _battleScene;
    unsigned long long _winningCondition;
    NSString *_micVirtualRoomId;
    NSData *_liveCookies;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) unsigned int battleScene; // @synthesize battleScene=_battleScene;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) NSString *micVirtualRoomId; // @synthesize micVirtualRoomId=_micVirtualRoomId;
@property(nonatomic) unsigned long long winningCondition; // @synthesize winningCondition=_winningCondition;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithTaskId:(id)arg1 winningCondition:(unsigned long long)arg2 micVirtualRoomId:(id)arg3 liveCookies:(id)arg4 battleScene:(unsigned int)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

