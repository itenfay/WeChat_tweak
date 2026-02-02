//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface WCFinderFeedFavCgi
{
    _Bool _fav;
    int _scene;
    NSString *_sessionBuffer;
    NSDictionary *_clientUdfKv;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _failedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) NSDictionary *clientUdfKv; // @synthesize clientUdfKv=_clientUdfKv;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic, getter=isFav) _Bool fav; // @synthesize fav=_fav;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)additionalUdfKVInfo;
- (id)initWithFeedID:(id)arg1 nonceID:(id)arg2 isFav:(_Bool)arg3 sessionBuffer:(id)arg4 scene:(int)arg5 sourceType:(int)arg6 clientUdfKv:(id)arg7 params:(id)arg8 completion:(CDUnknownBlockType)arg9 failed:(CDUnknownBlockType)arg10;

@end

