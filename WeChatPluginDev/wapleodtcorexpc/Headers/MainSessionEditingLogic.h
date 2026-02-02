//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UITableView;
@protocol MainSessionEditingLogicDelegate;

@interface MainSessionEditingLogic : NSObject
{
    id <MainSessionEditingLogicDelegate> _delegate;
    NSString *_confirmingSessionName;
    UITableView *_tableView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *confirmingSessionName; // @synthesize confirmingSessionName=_confirmingSessionName;
@property(nonatomic) __weak id <MainSessionEditingLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onArriveFundCancelDeleteSession:(id)arg1;
- (void)onArriveFundConfirmDeleteSession:(id)arg1;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleHideSession:(id)arg1 atCell:(id)arg2;
- (void)handleBrandUnsubscribe:(id)arg1;
- (void)deleteSessionAtIndexPath:(id)arg1;
- (void)onConfirmDeleteSessionAtIndex:(id)arg1;
- (void)handleBrandUnsubscribeAtIndexPath:(id)arg1;
- (void)handleCommitDelete:(id)arg1 atTableView:(id)arg2;
- (void)handleEditing:(long long)arg1 forTableView:(id)arg2 atIndexPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

