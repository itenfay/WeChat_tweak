//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderActivateLiveMicRequest_MicInfo, NSData, NSMutableArray, NSString, WCFinderDataItem;

@interface WCFinderActivateLiveMicCGI
{
    WCFinderDataItem *_dataItem;
    NSString *_liveMicId;
    NSData *_liveCookies;
    long long _micType;
    unsigned long long _reportScene;
    NSMutableArray *_micInfoList;
    NSMutableArray *_micAudienceList;
    NSMutableArray *_otherRoomMicInfoList;
    NSMutableArray *_unknownMicInfoList;
    FinderActivateLiveMicRequest_MicInfo *_selfAnchorMicInfo;
    long long _scene;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) FinderActivateLiveMicRequest_MicInfo *selfAnchorMicInfo; // @synthesize selfAnchorMicInfo=_selfAnchorMicInfo;
@property(retain, nonatomic) NSMutableArray *unknownMicInfoList; // @synthesize unknownMicInfoList=_unknownMicInfoList;
@property(retain, nonatomic) NSMutableArray *otherRoomMicInfoList; // @synthesize otherRoomMicInfoList=_otherRoomMicInfoList;
@property(retain, nonatomic) NSMutableArray *micAudienceList; // @synthesize micAudienceList=_micAudienceList;
@property(retain, nonatomic) NSMutableArray *micInfoList; // @synthesize micInfoList=_micInfoList;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
@property(nonatomic) long long micType; // @synthesize micType=_micType;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(copy, nonatomic) NSString *liveMicId; // @synthesize liveMicId=_liveMicId;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initForAnchorWithDataItem:(id)arg1 micType:(long long)arg2 reportScene:(unsigned long long)arg3 micInfoList:(id)arg4 micAudienceList:(id)arg5 otherRoomMicInfoList:(id)arg6 unknownMicInfoList:(id)arg7 selfAnchorMicInfo:(id)arg8 liveCookies:(id)arg9 successBlock:(CDUnknownBlockType)arg10 failBlock:(CDUnknownBlockType)arg11;
- (id)initForAudienceWithDataItem:(id)arg1 micType:(long long)arg2 liveMicId:(id)arg3 liveCookies:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

@end

