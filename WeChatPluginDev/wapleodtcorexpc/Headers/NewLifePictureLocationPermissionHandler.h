//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface NewLifePictureLocationPermissionHandler
{
}

- (void)onCommonTitleDescActionSheetClickCloseAction:(id)arg1;
- (void)eduTipsActionSheetClickTrailBtnFrom:(id)arg1;
- (void)eduTipsActionSheetClickRuleUrl:(id)arg1 actionSheet:(id)arg2;
- (void)eduTipsActionSheetClickCancelBtnFrom:(id)arg1;
- (void)eduTipsActionSheetClickAcceptBtnFrom:(id)arg1 receiveRule:(_Bool)arg2;
- (void)endActionWithPermission:(_Bool)arg1;
- (_Bool)hasPermission;
- (void)showPermissionActionSheet;
- (void)handleRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

