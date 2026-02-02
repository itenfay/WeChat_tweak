//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;
@protocol ScrollItemSelectionDelegate;

@interface DeviceSelectionScrollView
{
    id <ScrollItemSelectionDelegate> _selectDelegate;
    NSArray *_deviceArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *deviceArray; // @synthesize deviceArray=_deviceArray;
@property(nonatomic) __weak id <ScrollItemSelectionDelegate> selectDelegate; // @synthesize selectDelegate=_selectDelegate;
- (void)onItemClicked:(id)arg1;
- (void)addMoreIconView;
- (void)addOthersIcon;
- (void)initView;
- (id)initWithDevices:(id)arg1 delegate:(id)arg2 hasMore:(_Bool)arg3 hasOthers:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

