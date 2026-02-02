//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LiveRoomImg, NSData, NSString, WCFinderContact, WCFinderDataItem;

@interface WCFinderAcceptLiveMicCGI
{
    unsigned int _sdkRoomId;
    WCFinderDataItem *_dataItem;
    WCFinderContact *_toFinderContact;
    NSString *_sdkUserId;
    NSString *_sessionId;
    NSData *_liveCookies;
    NSString *_coverImageUrlString;
    NSData *_randomMicBuffer;
    LiveRoomImg *_applyLiveRoomImages;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) LiveRoomImg *applyLiveRoomImages; // @synthesize applyLiveRoomImages=_applyLiveRoomImages;
@property(retain, nonatomic) NSData *randomMicBuffer; // @synthesize randomMicBuffer=_randomMicBuffer;
@property(copy, nonatomic) NSString *coverImageUrlString; // @synthesize coverImageUrlString=_coverImageUrlString;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int sdkRoomId; // @synthesize sdkRoomId=_sdkRoomId;
@property(copy, nonatomic) NSString *sdkUserId; // @synthesize sdkUserId=_sdkUserId;
@property(retain, nonatomic) WCFinderContact *toFinderContact; // @synthesize toFinderContact=_toFinderContact;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 toFinderContact:(id)arg3 sdkUserId:(id)arg4 sdkRoomId:(unsigned int)arg5 sessionId:(id)arg6 coverImageUrlString:(id)arg7 liveRoomImages:(id)arg8 liveCookies:(id)arg9 randomMicBuffer:(id)arg10 successBlock:(CDUnknownBlockType)arg11 failBlock:(CDUnknownBlockType)arg12;

@end

