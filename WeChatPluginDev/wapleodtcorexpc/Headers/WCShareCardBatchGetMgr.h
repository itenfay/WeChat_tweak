//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;
@protocol WCShareCardBatchGetMgrDelegate;

@interface WCShareCardBatchGetMgr
{
    NSMutableArray *_waitArray;
    NSMutableArray *_gettingArray;
    _Bool _bGetting;
    unsigned int _batchGetFailCount;
    unsigned int _curBatchGetMinUpdateTime;
    id <WCShareCardBatchGetMgrDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCShareCardBatchGetMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleBatchGetObjectList:(id)arg1;
- (void)handleBatchGetFail;
- (void)handleBatchGetShareCardListResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)tryStartBatchGet;
- (void)addBatchGetShareCardList:(id)arg1;
- (void)dealloc;
- (id)init;

@end

