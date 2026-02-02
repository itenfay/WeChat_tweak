//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderGetAllWindowProductsCGI
{
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithFinderUsername:(id)arg1 feedID:(id)arg2 scene:(int)arg3 reportInfo:(id)arg4 lastBuffer:(id)arg5 ecSource:(id)arg6 successful:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;

@end

