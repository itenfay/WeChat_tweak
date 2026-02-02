//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJSegmentViewModel, MJSpeechManager, NSArray, NSString;

@interface MJTTSInspectorViewModel
{
    _Bool _shouldApplyToAll;
    _Bool _isVoiceCloneEnabledByConfig;
    CDUnknownBlockType updateSelectionHandler;
    CDUnknownBlockType applyAllWillBeginHandler;
    CDUnknownBlockType applyAllDidFinishHandler;
    CDUnknownBlockType beginVoiceCloneHandler;
    CDUnknownBlockType deleteVoiceCloneRoleHandler;
    NSArray *_items;
    NSString *_originRoleID;
    NSString *_originalRoleName;
    NSString *_originalAudioFilePath;
    NSArray *_ttsRequestItems;
    MJSpeechManager *_speechManager;
    NSString *_selectedRoleID;
    MJSegmentViewModel *_segmentVM;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isVoiceCloneEnabledByConfig; // @synthesize isVoiceCloneEnabledByConfig=_isVoiceCloneEnabledByConfig;
@property(retain, nonatomic) MJSegmentViewModel *segmentVM; // @synthesize segmentVM=_segmentVM;
@property(retain, nonatomic) NSString *selectedRoleID; // @synthesize selectedRoleID=_selectedRoleID;
@property(retain, nonatomic) MJSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(retain, nonatomic) NSArray *ttsRequestItems; // @synthesize ttsRequestItems=_ttsRequestItems;
@property(nonatomic) _Bool shouldApplyToAll; // @synthesize shouldApplyToAll=_shouldApplyToAll;
@property(retain, nonatomic) NSString *originalAudioFilePath; // @synthesize originalAudioFilePath=_originalAudioFilePath;
@property(retain, nonatomic) NSString *originalRoleName; // @synthesize originalRoleName=_originalRoleName;
@property(retain, nonatomic) NSString *originRoleID; // @synthesize originRoleID=_originRoleID;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) CDUnknownBlockType deleteVoiceCloneRoleHandler; // @synthesize deleteVoiceCloneRoleHandler;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N,VdeleteVoiceCloneRoleHandler

@property(copy, nonatomic) CDUnknownBlockType beginVoiceCloneHandler; // @synthesize beginVoiceCloneHandler;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N,VbeginVoiceCloneHandler

@property(copy, nonatomic) CDUnknownBlockType applyAllDidFinishHandler; // @synthesize applyAllDidFinishHandler;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N,VapplyAllDidFinishHandler

@property(copy, nonatomic) CDUnknownBlockType applyAllWillBeginHandler; // @synthesize applyAllWillBeginHandler;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N,VapplyAllWillBeginHandler

@property(copy, nonatomic) CDUnknownBlockType updateSelectionHandler; // @synthesize updateSelectionHandler;
- (_Bool)_replaceVoiceWithRoleID:(id)arg1 roleName:(id)arg2 audioFilePath:(id)arg3 takeSnapshot:(_Bool)arg4 autoPlay:(_Bool)arg5;
- (void)_updateRoleID:(id)arg1 roleName:(id)arg2;
- (void)cancelTTSRequestsIfNeeded:(id)arg1;
- (void)cancelCurrentTTSRequestIfNeeded;
- (void)resetVoiceToOriginalWithTakeSnapshot:(_Bool)arg1 autoPlay:(_Bool)arg2;
- (void)resetVoiceToNoneWithTakeSnapshot:(_Bool)arg1 autoPlay:(_Bool)arg2;
- (void)requestTTSWithRoleID:(id)arg1 roleName:(id)arg2 takeSnapshot:(_Bool)arg3 autoPlay:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handleSelectItemAtIndexPath:(id)arg1 autoPlay:(_Bool)arg2 forceRequest:(_Bool)arg3;
- (id)itemAtIndexPath:(id)arg1;
- (id)itemWithRoleID:(id)arg1;
- (id)indexPathForItemWithRoleID:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)defaultItems;
- (id)itemsWithMaterialCategories:(id)arg1;
- (void)loadItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)speechRequestStatusDidUpdateWithRoleID:(id)arg1 status:(unsigned long long)arg2;
- (void)bindSignals;
- (void)notifyDidFinish;
- (void)notifyDidCancel;
- (_Bool)isApplyAllSwitchEnabled;
- (_Bool)isCancelEnabled;
- (id)ttsSegment;
- (id)roleName;
- (id)roleID;
- (id)segmentID;
- (_Bool)isNewCloneSpeechRoleID:(id)arg1;
- (_Bool)isNoneSpeechRoleID:(id)arg1;
- (id)title;
- (void)dealloc;
- (id)initWithSegmentVM:(id)arg1 type:(unsigned long long)arg2 speechManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

