//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderClientStatus, NSData, NSMutableArray, NSString, WCFinderLocationInfo;

@interface WCFinderFetchEnhanceCGI
{
    int _viewScene;
    int _eventType;
    int _streamType;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSData *_lastBuff;
    NSString *_tid;
    unsigned long long _tabType;
    WCFinderLocationInfo *_location;
    NSString *_nonceID;
    NSMutableArray *_readStats;
    NSMutableArray *_unreadItems;
    FinderClientStatus *_clientStatus;
    NSString *_sessionBuffer;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) int streamType; // @synthesize streamType=_streamType;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
@property(retain, nonatomic) FinderClientStatus *clientStatus; // @synthesize clientStatus=_clientStatus;
@property(nonatomic) int viewScene; // @synthesize viewScene=_viewScene;
@property(retain, nonatomic) NSMutableArray *unreadItems; // @synthesize unreadItems=_unreadItems;
@property(retain, nonatomic) NSMutableArray *readStats; // @synthesize readStats=_readStats;
@property(retain, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(retain, nonatomic) WCFinderLocationInfo *location; // @synthesize location=_location;
@property(nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLastBuff:(id)arg1 tid:(id)arg2 nonceID:(id)arg3 location:(id)arg4 tabType:(unsigned long long)arg5 readStats:(id)arg6 unreadItems:(id)arg7 viewerScene:(int)arg8 clientStatus:(id)arg9 eventType:(int)arg10 enhanceStreamType:(int)arg11 successful:(CDUnknownBlockType)arg12 failure:(CDUnknownBlockType)arg13;

@end

