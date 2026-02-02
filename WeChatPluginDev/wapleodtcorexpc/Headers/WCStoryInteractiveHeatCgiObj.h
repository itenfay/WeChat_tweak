//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface WCStoryInteractiveHeatCgiObj
{
    CDUnknownBlockType _dbSyncBlock;
    CDUnknownBlockType _successBlcok;
    CDUnknownBlockType _failBlock;
    NSArray *_tidArray;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *tidArray; // @synthesize tidArray=_tidArray;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlcok; // @synthesize successBlcok=_successBlcok;
@property(copy, nonatomic) CDUnknownBlockType dbSyncBlock; // @synthesize dbSyncBlock=_dbSyncBlock;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithDataItemTidArray:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;

@end

