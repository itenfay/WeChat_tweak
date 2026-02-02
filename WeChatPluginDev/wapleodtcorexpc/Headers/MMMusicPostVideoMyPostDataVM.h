//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray, NSString;
@protocol MMMusicPostVideoMyPostDataVMDelegate;

@interface MMMusicPostVideoMyPostDataVM
{
    NSString *finderUsername;
    NSMutableArray *_arrData;
    id <MMMusicPostVideoMyPostDataVMDelegate> _delegate;
    unsigned long long _maxId;
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long maxId; // @synthesize maxId=_maxId;
@property(nonatomic) __weak id <MMMusicPostVideoMyPostDataVMDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyOnDataChanged:(_Bool)arg1;
- (id)getDataById:(id)arg1;
- (unsigned long long)indexOfData:(id)arg1;
- (id)dataOfIndex:(long long)arg1;
- (long long)numberOfItemsInSection;
- (void)onServerGetDataArr:(id)arg1 continueFlag:(_Bool)arg2;
- (void)loadData:(_Bool)arg1;
- (void)loadNextPageData;
- (void)loadFirstPageData;
- (id)initWithUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

