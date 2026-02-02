//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableArray, NSString;

@interface WAWebViewPlugin_NativeView
{
    _Bool _didAppear;
    unsigned long long _alertDisplayingCount;
    NSDictionary *_toastParam;
    NSMutableArray *_alertsWaitingQueue;
    NSMutableArray *_alertsDisplayingQueue;
    NSMutableArray *_actionSheetArr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *actionSheetArr; // @synthesize actionSheetArr=_actionSheetArr;
@property(retain, nonatomic) NSMutableArray *alertsDisplayingQueue; // @synthesize alertsDisplayingQueue=_alertsDisplayingQueue;
@property(retain, nonatomic) NSMutableArray *alertsWaitingQueue; // @synthesize alertsWaitingQueue=_alertsWaitingQueue;
@property(retain, nonatomic) NSDictionary *toastParam; // @synthesize toastParam=_toastParam;
@property(nonatomic) _Bool didAppear; // @synthesize didAppear=_didAppear;
@property(nonatomic) unsigned long long alertDisplayingCount; // @synthesize alertDisplayingCount=_alertDisplayingCount;
- (id)getActionSheet:(long long)arg1;
- (void)delActionSheet:(id)arg1;
- (void)addActionSheet:(id)arg1;
- (id)getToastContentDescription;
- (id)getModalContentDescription;
- (void)bringAlertsToFront;
- (id)popDelegateForAlert:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)onConfirm:(id)arg1;
- (void)updateModal:(id)arg1;
- (void)showModal:(id)arg1 delegate:(id)arg2;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)hideToast:(CDUnknownBlockType)arg1;
- (void)updateToast:(id)arg1;
- (void)showToast:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

