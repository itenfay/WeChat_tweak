//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface MMPayLiteAppResourceBatchGetCGI
{
    NSArray *_pkgList;
    CDUnknownBlockType _success;
    CDUnknownBlockType _fail;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType fail; // @synthesize fail=_fail;
@property(copy, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(retain, nonatomic) NSArray *pkgList; // @synthesize pkgList=_pkgList;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)assemblePushResourceInfo;
- (id)assembleBatchResourceInfo;
- (void)createRequest;
- (id)initWithPkgList:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;

@end

