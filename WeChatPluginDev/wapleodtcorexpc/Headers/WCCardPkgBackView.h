//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMUIButton, NSArray, NSString, WCCardPkgBackTableView;
@protocol WCCardPkgBackViewDelegate;

@interface WCCardPkgBackView
{
    NSArray *_sameTpCardDataListList;
    id <WCCardPkgBackViewDelegate> _delegate;
    WCCardPkgBackTableView *_tableView;
    MMUIButton *_sureButton;
    CAGradientLayer *_maskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) MMUIButton *sureButton; // @synthesize sureButton=_sureButton;
@property(retain, nonatomic) WCCardPkgBackTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCCardPkgBackViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *sameTpCardDataListList; // @synthesize sameTpCardDataListList=_sameTpCardDataListList;
- (void)handleIsHaveAvailableCardWithList:(id)arg1;
- (void)loadCellSubView:(id)arg1 cardIndex:(long long)arg2;
- (void)configurateCell:(id)arg1;
- (void)reloadTableViewData;
- (void)setSureButtonAbled:(_Bool)arg1;
- (void)setSureButtonText:(id)arg1;
- (void)setSureButtonColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)sureButtonDidSelected;
- (void)WXCardPkgTableViewHeight:(double)arg1 scrollEnabled:(_Bool)arg2;
- (double)WXCardPkgTableViewMaxHeight;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

