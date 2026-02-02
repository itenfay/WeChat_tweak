//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJNarrationSegmentViewModel, MJSpeechManager, NSArray, NSString;

@interface MJVoiceChangeInspectorViewModel
{
    _Bool _isVoiceCloneEnabledByConfig;
    CDUnknownBlockType updateSelectionHandler;
    CDUnknownBlockType applyAllWillBeginHandler;
    CDUnknownBlockType applyAllDidFinishHandler;
    CDUnknownBlockType beginVoiceCloneHandler;
    CDUnknownBlockType deleteVoiceCloneRoleHandler;
    MJNarrationSegmentViewModel *_segmentVM;
    NSArray *_itemGroups;
    unsigned long long _narrationType;
    MJSpeechManager *_speechManager;
    NSString *_originRoleID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isVoiceCloneEnabledByConfig; // @synthesize isVoiceCloneEnabledByConfig=_isVoiceCloneEnabledByConfig;
@property(retain, nonatomic) NSString *originRoleID; // @synthesize originRoleID=_originRoleID;
@property(retain, nonatomic) MJSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(readonly, nonatomic) unsigned long long narrationType; // @synthesize narrationType=_narrationType;
@property(retain, nonatomic) NSArray *itemGroups; // @synthesize itemGroups=_itemGroups;
@property(retain, nonatomic) MJNarrationSegmentViewModel *segmentVM; // @synthesize segmentVM=_segmentVM;
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
- (void)handleSelectItemAtIndexPath:(id)arg1 autoPlay:(_Bool)arg2 forceRequest:(_Bool)arg3;
- (id)itemAtIndexPath:(id)arg1;
- (id)itemWithRoleID:(id)arg1;
- (id)indexPathForItemWithRoleID:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)_defaultItemsInNarrationTextInput;
- (id)_itemsInNarrationTextInputWithMaterialCategories:(id)arg1;
- (void)_loadItemsInNarrationTextInputWithCompletion:(CDUnknownBlockType)arg1;
- (id)_defaultVoiceChangeItemsInNarrationSpeak;
- (id)_defaultItemsInNarrationSpeak;
- (id)_itemsInNarrationSpeakWithMaterialCategories:(id)arg1;
- (void)_loadItemsInNarrationSpeakWithCompletion:(CDUnknownBlockType)arg1;
- (id)defaultVoiceChangeItems;
- (id)defaultItems;
- (id)itemsWithMaterialCategories:(id)arg1;
- (void)loadItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)speechRequestStatusDidUpdateWithAudioID:(id)arg1 roleID:(id)arg2 status:(unsigned long long)arg3;
- (void)bindSignals;
- (void)notifyDidFinish;
- (_Bool)isApplyAllSwitchEnabled;
- (_Bool)isCancelEnabled;
@property(readonly, nonatomic) NSString *selectedRoleID;
- (id)subTitle;
- (id)title;
- (void)dealloc;
- (id)initWithSegmentVM:(id)arg1 type:(unsigned long long)arg2 narrationType:(unsigned long long)arg3 speechManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

