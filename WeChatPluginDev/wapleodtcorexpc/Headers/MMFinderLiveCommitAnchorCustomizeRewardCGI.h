//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AnchorSwitchSkinInfo_SelectedValue, NSString;

@interface MMFinderLiveCommitAnchorCustomizeRewardCGI
{
    NSString *_productId;
    AnchorSwitchSkinInfo_SelectedValue *_commitStyle;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) AnchorSwitchSkinInfo_SelectedValue *commitStyle; // @synthesize commitStyle=_commitStyle;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithTaskId:(id)arg1 productId:(id)arg2 commitStyle:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end

