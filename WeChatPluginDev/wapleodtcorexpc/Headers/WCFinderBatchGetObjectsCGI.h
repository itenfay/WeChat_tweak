//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface WCFinderBatchGetObjectsCGI
{
    int _batchLoadScene;
    NSArray *_objectRequestArray;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(nonatomic) int batchLoadScene; // @synthesize batchLoadScene=_batchLoadScene;
@property(copy, nonatomic) NSArray *objectRequestArray; // @synthesize objectRequestArray=_objectRequestArray;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithObjectId:(id)arg1 scene:(int)arg2 batchLoadScene:(int)arg3 successful:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;

@end

