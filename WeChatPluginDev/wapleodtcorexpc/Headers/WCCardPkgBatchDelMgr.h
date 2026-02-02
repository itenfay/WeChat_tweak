//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, WCCardPkgDB;
@protocol WCCardPkgBatchDelMgrDelegate;

@interface WCCardPkgBatchDelMgr
{
    WCCardPkgDB *_wccardPkgDB;
    NSMutableArray *_batchDelArray;
    id <WCCardPkgBatchDelMgrDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCardPkgBatchDelMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleBatchDelWCCardResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)tryStartBatchDel;
- (void)addBatchDelWCCardList:(id)arg1;
- (void)initDB:(id)arg1;
- (void)dealloc;
- (id)init;

@end

