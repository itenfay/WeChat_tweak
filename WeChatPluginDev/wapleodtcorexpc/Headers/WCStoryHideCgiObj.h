//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class NSString;

@interface WCStoryHideCgiObj : NSObject
{
    _Bool _isInvisibility;
    CDUnknownBlockType _dbSyncBlock;
    NSString *_dataItemTid;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

@property(nonatomic) _Bool isInvisibility; // @synthesize isInvisibility=_isInvisibility;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSString *dataItemTid; // @synthesize dataItemTid=_dataItemTid;
@property(copy, nonatomic) CDUnknownBlockType dbSyncBlock; // @synthesize dbSyncBlock=_dbSyncBlock;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithDataItemTid:(id)arg1 isInvisibility:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;

@end
