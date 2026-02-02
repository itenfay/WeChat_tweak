//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCStoryDataItem;

@interface WCStoryPostDeleteCgiObj
{
    WCStoryDataItem *_dataItem;
    CDUnknownBlockType _deletePostBlock;
    CDUnknownBlockType _dbSyncBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType dbSyncBlock; // @synthesize dbSyncBlock=_dbSyncBlock;
@property(copy, nonatomic) CDUnknownBlockType deletePostBlock; // @synthesize deletePostBlock=_deletePostBlock;
@property(retain, nonatomic) WCStoryDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithDataItem:(id)arg1;

@end

