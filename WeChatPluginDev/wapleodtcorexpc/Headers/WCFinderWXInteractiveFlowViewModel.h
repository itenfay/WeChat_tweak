//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderWXInteractCenterDataProvider;
@protocol WCFinderWXInteractiveFlowViewModelDelegate;

@interface WCFinderWXInteractiveFlowViewModel : NSObject
{
    long long _selectType;
    id <WCFinderWXInteractiveFlowViewModelDelegate> _delegate;
    WCFinderWXInteractCenterDataProvider *_dataProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderWXInteractCenterDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) __weak id <WCFinderWXInteractiveFlowViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long selectType; // @synthesize selectType=_selectType;
- (void)onFinderDataItemCancelFav:(id)arg1;
- (void)onWXInteractCenterDataLoadFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onWXInteractCenterDataFail;
- (void)onWXInteractCenterDataFetchSuc;
- (void)onWXInteractCenterDataLoadLocal;
- (void)deleteContentVM:(id)arg1;
- (void)selectTabChanged:(long long)arg1;
- (void)triggerFetchAction;
- (unsigned long long)flowViewState;
- (long long)indexRowForContentVM:(id)arg1;
- (id)contentVMFromTid:(id)arg1;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (long long)numberOfItems;
- (id)initWithSelectType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

