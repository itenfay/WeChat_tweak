//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderWXInteractCenterDataProvider;
@protocol WCFinderWXInteractiveDetailViewModelDelegate;

@interface WCFinderWXInteractiveDetailViewModel : NSObject
{
    id <WCFinderWXInteractiveDetailViewModelDelegate> _delegate;
    long long _selectType;
    WCFinderWXInteractCenterDataProvider *_dataProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderWXInteractCenterDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) long long selectType; // @synthesize selectType=_selectType;
@property(nonatomic) __weak id <WCFinderWXInteractiveDetailViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onWXInteractCenterDataLoadFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onWXInteractCenterDataFail;
- (void)onWXInteractCenterDataFetchSuc;
- (_Bool)isNoMoreData;
- (void)delContentVM:(id)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (void)triggerFetchAction;
- (id)contentVMAtTid:(id)arg1;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (long long)numberOfSection;
- (id)initWithSelectType:(long long)arg1 dataProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

