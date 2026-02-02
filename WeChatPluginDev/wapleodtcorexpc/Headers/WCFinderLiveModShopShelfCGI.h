//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class FinderCmdItem;

@interface WCFinderLiveModShopShelfCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    FinderCmdItem *_cmdItem;
}

@property(retain, nonatomic) FinderCmdItem *cmdItem; // @synthesize cmdItem=_cmdItem;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 cmdItem:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;

@end
