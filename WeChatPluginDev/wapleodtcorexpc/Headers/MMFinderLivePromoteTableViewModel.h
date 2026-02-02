//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveAnchorPromoteInfo, MMTableView, NSMutableArray, NSString;
@protocol MMFinderLivePromoteTableViewDelegate;

@interface MMFinderLivePromoteTableViewModel : NSObject
{
    _Bool _enablePushPromote;
    _Bool _isLiving;
    MMTableView *_tableView;
    id <MMFinderLivePromoteTableViewDelegate> _operationDelegate;
    NSMutableArray *_promoteList;
    MMFinderLiveAnchorPromoteInfo *_lastSendedPromoteInfo;
    NSString *_errorStr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errorStr; // @synthesize errorStr=_errorStr;
@property(retain, nonatomic) MMFinderLiveAnchorPromoteInfo *lastSendedPromoteInfo; // @synthesize lastSendedPromoteInfo=_lastSendedPromoteInfo;
@property(nonatomic) _Bool isLiving; // @synthesize isLiving=_isLiving;
@property(retain, nonatomic) NSMutableArray *promoteList; // @synthesize promoteList=_promoteList;
@property(nonatomic) _Bool enablePushPromote; // @synthesize enablePushPromote=_enablePushPromote;
@property(nonatomic) __weak id <MMFinderLivePromoteTableViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)updateSendedPromoteInfo;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)getLiveAnchorPromoteInfo:(id)arg1;
- (_Bool)canShowTipFooterInSection:(long long)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)registerReusableCellTypesForTableView:(id)arg1;
- (id)promoteInfoItemsOfPromoteId:(unsigned long long)arg1;
- (id)promoteInfoItemsOfType:(unsigned int)arg1;
- (_Bool)isPromoting;
- (void)deletePromoteItem:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (void)insertPrmoteItem:(id)arg1;
- (void)addPrmoteItem:(id)arg1;
- (_Bool)isContainPromoteItemWithType:(unsigned int)arg1;
- (_Bool)isContainPromoteItem:(id)arg1;
- (unsigned long long)getPromoteItemCount;
- (void)updatePromoteInfoList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

