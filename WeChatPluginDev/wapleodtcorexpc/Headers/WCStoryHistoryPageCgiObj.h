//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCStoryHistoryPageCgiObj
{
    int _timeZone;
    CDUnknownBlockType _dataBlock;
    CDUnknownBlockType _dbSyncBlock;
    unsigned long long _maxID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long maxID; // @synthesize maxID=_maxID;
@property(nonatomic) int timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) CDUnknownBlockType dbSyncBlock; // @synthesize dbSyncBlock=_dbSyncBlock;
@property(copy, nonatomic) CDUnknownBlockType dataBlock; // @synthesize dataBlock=_dataBlock;
- (id)storyDataItemFromServerResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithTimeZone:(int)arg1 maxID:(unsigned long long)arg2;
- (id)init;

@end

