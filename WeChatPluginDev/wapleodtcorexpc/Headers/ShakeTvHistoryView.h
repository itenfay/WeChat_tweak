//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;
@protocol ShakeTvHistoryViewDelegate;

@interface ShakeTvHistoryView
{
    NSArray *_arrTVItem;
    id <ShakeTvHistoryViewDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ShakeTvHistoryViewDelegate> delegate; // @synthesize delegate;
- (void)onClcikIconBtn:(id)arg1;
- (void)layoutAllView;
- (unsigned int)getXOffset;
- (unsigned int)getBtnCnt;
- (unsigned int)getBtnWidth;
- (void)refreshData;
- (void)onShakeTvHistoryDataChange;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

