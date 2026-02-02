//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveCommentAssitantManageView, MMFinderLiveTaskId, MMUINavigationController, NSArray, NSMutableArray, NSMutableDictionary, NSString, RoomContactSelectViewController, UINavigationController, WCColorProxy;

@interface MMFinderLiveCommentAssitantManageViewModel : NSObject
{
    UINavigationController *_navigationController;
    MMFinderLiveCommentAssitantManageView *_manageView;
    unsigned long long _maxAssistantAllowed;
    CDUnknownBlockType _onRequirePortrait;
    NSArray *_assistants;
    RoomContactSelectViewController *_delVC;
    WCColorProxy *_colorProxy;
    NSMutableArray *_assistantsToRemove;
    MMFinderLiveTaskId *_taskId;
    NSMutableDictionary *_sourceTypeMap;
    NSMutableDictionary *_liveContactMap;
    MMUINavigationController *_presentedNavigationVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUINavigationController *presentedNavigationVC; // @synthesize presentedNavigationVC=_presentedNavigationVC;
@property(retain, nonatomic) NSMutableDictionary *liveContactMap; // @synthesize liveContactMap=_liveContactMap;
@property(retain, nonatomic) NSMutableDictionary *sourceTypeMap; // @synthesize sourceTypeMap=_sourceTypeMap;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSMutableArray *assistantsToRemove; // @synthesize assistantsToRemove=_assistantsToRemove;
@property(retain, nonatomic) WCColorProxy *colorProxy; // @synthesize colorProxy=_colorProxy;
@property(nonatomic) __weak RoomContactSelectViewController *delVC; // @synthesize delVC=_delVC;
@property(retain, nonatomic) NSArray *assistants; // @synthesize assistants=_assistants;
@property(copy, nonatomic) CDUnknownBlockType onRequirePortrait; // @synthesize onRequirePortrait=_onRequirePortrait;
@property(nonatomic) unsigned long long maxAssistantAllowed; // @synthesize maxAssistantAllowed=_maxAssistantAllowed;
@property(nonatomic) __weak MMFinderLiveCommentAssitantManageView *manageView; // @synthesize manageView=_manageView;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (id)liveTask;
- (void)doRemoveAssistants:(id)arg1;
- (void)doAddAssistants:(id)arg1;
- (void)getAssistantsFromServer;
- (void)requirePortraitThen:(CDUnknownBlockType)arg1;
- (id)getCurrentNavigationController;
- (void)confirmRemove;
- (void)updateRightBtn;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)onViewContact:(id)arg1;
- (void)didSelectContact:(id)arg1;
- (void)onCancelSelectContact;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)gotoChatViewVCWithContact:(id)arg1 liveContactExtInfo:(id)arg2;
- (void)openStreamProfile:(id)arg1;
- (void)_doShowProfileWithContact:(id)arg1;
- (id)finderLiveContactFromContact:(id)arg1;
- (void)showUserProfileWithContact:(id)arg1;
- (void)tryOpenAssistantSelect;
- (void)tryOpenAssistantRemove;
- (id)currentAssistants;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

