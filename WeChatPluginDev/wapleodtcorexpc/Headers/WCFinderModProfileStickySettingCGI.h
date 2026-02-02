//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderModProfileStickySettingCGI
{
    _Bool _isStickyTop;
    unsigned long long _feedID;
    NSString *_nonceID;
    NSString *_username;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) _Bool isStickyTop; // @synthesize isStickyTop=_isStickyTop;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(nonatomic) unsigned long long feedID; // @synthesize feedID=_feedID;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFeedID:(unsigned long long)arg1 nonceID:(id)arg2 username:(id)arg3 isStickyTop:(_Bool)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

@end

