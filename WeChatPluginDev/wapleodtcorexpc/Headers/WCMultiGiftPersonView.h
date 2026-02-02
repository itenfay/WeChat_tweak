//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSArray, NSString, WCGiftCardData;

@interface WCMultiGiftPersonView
{
    double _maxWidth;
    double _minHeight;
    WCGiftCardData *_giftCardData;
    MMTableView *_giftTableView;
    NSArray *_accepterList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *accepterList; // @synthesize accepterList=_accepterList;
@property(retain, nonatomic) MMTableView *giftTableView; // @synthesize giftTableView=_giftTableView;
@property(retain, nonatomic) WCGiftCardData *giftCardData; // @synthesize giftCardData=_giftCardData;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)createTableViewHeaderView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configTableSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

