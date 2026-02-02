//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderModFeedReproductionCgi
{
    _Bool _notReproduction;
    NSString *_username;
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(nonatomic) _Bool notReproduction; // @synthesize notReproduction=_notReproduction;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithUsername:(id)arg1 notReproduction:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end

