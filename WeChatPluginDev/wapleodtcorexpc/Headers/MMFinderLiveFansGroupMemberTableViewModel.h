//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveFansGroupMemberSectionInfo, MMFinderLiveFansGroupMemberTableSectionHeaderView, MMLiveTaskId, MMTableView, NSString;
@protocol MMFinderLiveFansGroupMemberTableViewDelegate;

@interface MMFinderLiveFansGroupMemberTableViewModel : NSObject
{
    MMTableView *_tableView;
    MMLiveTaskId *_taskId;
    id <MMFinderLiveFansGroupMemberTableViewDelegate> _tableDelegate;
    unsigned long long _memberType;
    unsigned long long _groupType;
    MMFinderLiveFansGroupMemberSectionInfo *_fansGroupMemberSectionInfo;
    MMFinderLiveFansGroupMemberTableSectionHeaderView *_memberSectionHeaderView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFansGroupMemberTableSectionHeaderView *memberSectionHeaderView; // @synthesize memberSectionHeaderView=_memberSectionHeaderView;
@property(retain, nonatomic) MMFinderLiveFansGroupMemberSectionInfo *fansGroupMemberSectionInfo; // @synthesize fansGroupMemberSectionInfo=_fansGroupMemberSectionInfo;
@property(nonatomic) unsigned long long groupType; // @synthesize groupType=_groupType;
@property(nonatomic) unsigned long long memberType; // @synthesize memberType=_memberType;
@property(nonatomic) __weak id <MMFinderLiveFansGroupMemberTableViewDelegate> tableDelegate; // @synthesize tableDelegate=_tableDelegate;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)openGroupTypeActionSheet;
- (void)openMemberTypeActionSheet;
- (id)getWarmTitleForAnchor;
- (id)getMemberTitleForAnchor;
- (id)superfanMemberTitle;
- (id)allFansMemberTitle;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)getTableHeaderView;
- (void)updateFansGroupMemberSectionInfo:(id)arg1 memberType:(unsigned long long)arg2 groupType:(unsigned long long)arg3;
- (void)updateFansGroupMemberSectionInfo:(id)arg1;
- (id)initWithTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

