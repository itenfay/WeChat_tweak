//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveLocation, NSData, WCFinderContact, WCFinderDataItem;

@interface WCFinderLiveApplyMicWithAudienceCGI
{
    _Bool _isAnchor;
    _Bool _withVideo;
    _Bool _isInvitedByAnchor;
    unsigned int _seatId;
    WCFinderDataItem *_dataItem;
    WCFinderContact *_toFinderContact;
    FinderLiveLocation *_finderLiveLocation;
    NSData *_inviteMicBuffer;
    NSData *_liveCookies;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) NSData *inviteMicBuffer; // @synthesize inviteMicBuffer=_inviteMicBuffer;
@property(nonatomic) _Bool isInvitedByAnchor; // @synthesize isInvitedByAnchor=_isInvitedByAnchor;
@property(nonatomic) unsigned int seatId; // @synthesize seatId=_seatId;
@property(retain, nonatomic) FinderLiveLocation *finderLiveLocation; // @synthesize finderLiveLocation=_finderLiveLocation;
@property(nonatomic) _Bool withVideo; // @synthesize withVideo=_withVideo;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(retain, nonatomic) WCFinderContact *toFinderContact; // @synthesize toFinderContact=_toFinderContact;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 toFinderContact:(id)arg3 isAnchor:(_Bool)arg4 withVideo:(_Bool)arg5 finderLiveLocation:(id)arg6 seatId:(unsigned int)arg7 isInvitedByAnchor:(_Bool)arg8 inviteMicBuffer:(id)arg9 liveCookies:(id)arg10 successBlock:(CDUnknownBlockType)arg11 failBlock:(CDUnknownBlockType)arg12;

@end

