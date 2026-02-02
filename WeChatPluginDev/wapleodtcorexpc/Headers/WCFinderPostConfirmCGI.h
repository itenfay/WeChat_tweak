//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class FinderPostTraceInfo, NSString, WCFinderDataItem;

@interface WCFinderPostConfirmCGI : NSObject
{
    NSString *_username;
    NSString *_clientid;
    FinderPostTraceInfo *_traceInfo;
    WCFinderDataItem *_pendingDataItem;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) WCFinderDataItem *pendingDataItem; // @synthesize pendingDataItem=_pendingDataItem;
@property(retain, nonatomic) FinderPostTraceInfo *traceInfo; // @synthesize traceInfo=_traceInfo;
@property(copy, nonatomic) NSString *clientid; // @synthesize clientid=_clientid;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (void)preCheckPostRequestValid:(id)arg1;
- (void)createRequest;
- (id)initWithPendingDataItem:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;

@end
