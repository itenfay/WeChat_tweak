//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderUserPOIRequest
{
    NSString *_queryText;
    NSString *_finderUserName;
    NSData *_lastBuffer;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(copy, nonatomic) NSString *queryText; // @synthesize queryText=_queryText;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithQuery:(id)arg1 lastBuffer:(id)arg2 finderUserName:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end

