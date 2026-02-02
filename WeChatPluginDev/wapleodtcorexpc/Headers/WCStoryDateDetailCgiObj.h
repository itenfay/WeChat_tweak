//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCStoryDateDetailCgiObj
{
    int _timeZone;
    CDUnknownBlockType _dataBlock;
    CDUnknownBlockType _dbSyncBlock;
    NSString *_dateString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(nonatomic) int timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) CDUnknownBlockType dbSyncBlock; // @synthesize dbSyncBlock=_dbSyncBlock;
@property(copy, nonatomic) CDUnknownBlockType dataBlock; // @synthesize dataBlock=_dataBlock;
- (id)storyDataItemFromServerResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithDateString:(id)arg1 timeZone:(int)arg2;
- (id)init;

@end

