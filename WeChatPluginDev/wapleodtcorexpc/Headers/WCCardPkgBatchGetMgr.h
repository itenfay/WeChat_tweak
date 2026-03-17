//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, WCCardPkgDB;
@protocol WCCardPkgBatchGetMgrDelegate;

@interface WCCardPkgBatchGetMgr : NSObject
{
    WCCardPkgDB *_wcCardPkgDB;
    NSMutableArray *_batchGetArray;
    id <WCCardPkgBatchGetMgrDelegate> _delegate;
}

@property(nonatomic) __weak id <WCCardPkgBatchGetMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)delFinishedCardIDFromBatchGetArray:(id)arg1;
- (void)handleBatchGetObjectList:(id)arg1;
- (void)handleBatchGetWCCardResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)tryStartBatchGet;
- (void)addBatchGetCardList:(id)arg1;
- (void)initDB:(id)arg1;
- (void)dealloc;
- (id)init;

@end

