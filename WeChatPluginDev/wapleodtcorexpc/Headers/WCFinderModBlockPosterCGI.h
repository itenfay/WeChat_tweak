//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface WCFinderModBlockPosterCGI : NSObject
{
    _Bool _setBlock;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(nonatomic) _Bool setBlock; // @synthesize setBlock=_setBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)createRequest:(id)arg1 setBlock:(_Bool)arg2 selfUserName:(id)arg3;
- (id)initWithUserName:(id)arg1 setBlock:(_Bool)arg2 selfUserName:(id)arg3 successful:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;

@end
