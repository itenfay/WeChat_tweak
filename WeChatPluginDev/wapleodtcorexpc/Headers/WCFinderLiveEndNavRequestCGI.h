//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderClientStatus, FinderLiveClientStatus, FinderLiveReportBaseInfo, NSData, NSString;

@interface WCFinderLiveEndNavRequestCGI
{
    float _longitude;
    float _latitude;
    unsigned long long _objectId;
    NSString *_objectNonceId;
    NSString *_sessionBuffer;
    NSData *_liveCookies;
    NSData *_lastBuffer;
    FinderClientStatus *_status;
    FinderLiveClientStatus *_liveStatus;
    FinderLiveReportBaseInfo *_liveReportBaseInfo;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo; // @synthesize liveReportBaseInfo=_liveReportBaseInfo;
@property(retain, nonatomic) FinderLiveClientStatus *liveStatus; // @synthesize liveStatus=_liveStatus;
@property(retain, nonatomic) FinderClientStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *objectNonceId; // @synthesize objectNonceId=_objectNonceId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithTaskId:(id)arg1 objectId:(unsigned long long)arg2 objectNonceId:(id)arg3 longitude:(float)arg4 latitude:(float)arg5 sessionBuffer:(id)arg6 liveCookies:(id)arg7 status:(id)arg8 liveStatus:(id)arg9 liveReportBaseInfo:(id)arg10 lastBuffer:(id)arg11 successBlock:(CDUnknownBlockType)arg12 failureBlock:(CDUnknownBlockType)arg13;

@end

