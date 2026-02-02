//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WCMusicSearchCgi
{
    int _batchCount;
    long long _minBatchSize;
    NSMutableArray *_batchMusicList;
    CDUnknownBlockType _resultBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(retain, nonatomic) NSMutableArray *batchMusicList; // @synthesize batchMusicList=_batchMusicList;
@property(nonatomic) long long minBatchSize; // @synthesize minBatchSize=_minBatchSize;
@property(nonatomic) int batchCount; // @synthesize batchCount=_batchCount;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)initWithScene:(unsigned long long)arg1 searchKey:(id)arg2 requestBuffer:(id)arg3 minBatchSize:(long long)arg4 resultBlock:(CDUnknownBlockType)arg5;

@end

