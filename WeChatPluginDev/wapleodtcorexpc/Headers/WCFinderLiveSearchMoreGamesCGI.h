//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderLiveSearchMoreGamesCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSString *_searchText;
    NSString *_nextOffset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nextOffset; // @synthesize nextOffset=_nextOffset;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (id)convertGameUserInfoList:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithSearchText:(id)arg1 nextOffset:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;

@end

