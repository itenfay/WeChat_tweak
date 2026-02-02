//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray, NSString;
@protocol MMMusicPostVideoMyLikeDataVMDelegate;

@interface MMMusicPostVideoMyLikeDataVM
{
    NSMutableArray *_arrData;
    id <MMMusicPostVideoMyLikeDataVMDelegate> _delegate;
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) __weak id <MMMusicPostVideoMyLikeDataVMDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyOnDataChanged:(_Bool)arg1;
- (id)getDataById:(id)arg1;
- (unsigned long long)indexOfData:(id)arg1;
- (id)dataOfIndex:(long long)arg1;
- (long long)numberOfItemsInSection;
- (void)onServerGetDataArr:(id)arg1 continueFlag:(_Bool)arg2;
- (void)loadData;
- (void)loadNextPageData;
- (void)loadFirstPageData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

