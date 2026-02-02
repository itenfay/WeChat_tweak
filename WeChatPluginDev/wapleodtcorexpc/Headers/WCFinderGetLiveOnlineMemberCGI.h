//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, WCFinderDataItem;

@interface WCFinderGetLiveOnlineMemberCGI
{
    unsigned int _boardType;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    WCFinderDataItem *_dataItem;
    long long _cgiRequestScene;
    NSString *_micId;
    NSString *_boardKey;
    unsigned long long _filterScene;
    NSData *_getLiveOnlineMemberBuf;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *getLiveOnlineMemberBuf; // @synthesize getLiveOnlineMemberBuf=_getLiveOnlineMemberBuf;
@property(nonatomic) unsigned long long filterScene; // @synthesize filterScene=_filterScene;
@property(nonatomic) unsigned int boardType; // @synthesize boardType=_boardType;
@property(retain, nonatomic) NSString *boardKey; // @synthesize boardKey=_boardKey;
@property(retain, nonatomic) NSString *micId; // @synthesize micId=_micId;
@property(nonatomic) long long cgiRequestScene; // @synthesize cgiRequestScene=_cgiRequestScene;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 reqBuffer:(id)arg2 micId:(id)arg3 boardKey:(id)arg4 boardType:(unsigned int)arg5 filterScene:(unsigned long long)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;

@end

