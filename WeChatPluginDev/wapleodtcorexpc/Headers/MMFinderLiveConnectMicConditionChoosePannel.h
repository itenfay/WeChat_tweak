//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSArray, NSIndexPath, NSString;
@protocol MMFinderLiveConnectMicConditionChooseDelegate;

@interface MMFinderLiveConnectMicConditionChoosePannel
{
    id <MMFinderLiveConnectMicConditionChooseDelegate> _conditionDelegate;
    MMTableView *_tableView;
    unsigned long long _lastSelectType;
    NSIndexPath *_lastSelectIdx;
    NSArray *_unForbiddenTypes;
}

+ (_Bool)isConditionTypeValid:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *unForbiddenTypes; // @synthesize unForbiddenTypes=_unForbiddenTypes;
@property(retain, nonatomic) NSIndexPath *lastSelectIdx; // @synthesize lastSelectIdx=_lastSelectIdx;
@property(nonatomic) unsigned long long lastSelectType; // @synthesize lastSelectType=_lastSelectType;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <MMFinderLiveConnectMicConditionChooseDelegate> conditionDelegate; // @synthesize conditionDelegate=_conditionDelegate;
- (id)getConditionTitle:(unsigned long long)arg1;
- (unsigned long long)getConditionType:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)initView;
- (id)initWithCurConditionType:(unsigned long long)arg1 unForbiddenTypes:(id)arg2 frame:(struct CGRect)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

