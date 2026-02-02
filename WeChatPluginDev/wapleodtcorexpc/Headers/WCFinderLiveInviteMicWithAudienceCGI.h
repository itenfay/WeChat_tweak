//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, WCFinderContact, WCFinderDataItem;

@interface WCFinderLiveInviteMicWithAudienceCGI
{
    _Bool _withVideo;
    unsigned int _seatId;
    WCFinderDataItem *_dataItem;
    WCFinderContact *_toFinderContact;
    NSData *_liveCookies;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) unsigned int seatId; // @synthesize seatId=_seatId;
@property(nonatomic) _Bool withVideo; // @synthesize withVideo=_withVideo;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) WCFinderContact *toFinderContact; // @synthesize toFinderContact=_toFinderContact;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 toFinderContact:(id)arg3 withVideo:(_Bool)arg4 seatId:(unsigned int)arg5 liveCookies:(id)arg6 completion:(CDUnknownBlockType)arg7;

@end

