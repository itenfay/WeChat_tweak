//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCStoryDataItemDetailCgiObj
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSString *_dataItemId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *dataItemId; // @synthesize dataItemId=_dataItemId;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithDataItemTid:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;

@end

