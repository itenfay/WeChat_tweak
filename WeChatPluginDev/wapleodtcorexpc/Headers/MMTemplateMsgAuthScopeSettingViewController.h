//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandTemplateMsgAuthSettingPageModel, MMTemplateMsgScopeItem, NSString, WATemplateAudioPlayer;

@interface MMTemplateMsgAuthScopeSettingViewController
{
    unsigned int _uiType;
    MMTemplateMsgScopeItem *_scopeItem;
    CDUnknownBlockType _selectedAction;
    BrandTemplateMsgAuthSettingPageModel *_pageModel;
    WATemplateAudioPlayer *_audioPlayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WATemplateAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) unsigned int uiType; // @synthesize uiType=_uiType;
@property(retain, nonatomic) BrandTemplateMsgAuthSettingPageModel *pageModel; // @synthesize pageModel=_pageModel;
@property(copy, nonatomic) CDUnknownBlockType selectedAction; // @synthesize selectedAction=_selectedAction;
@property(retain, nonatomic) MMTemplateMsgScopeItem *scopeItem; // @synthesize scopeItem=_scopeItem;
- (void)pageSheetWillAppear:(id)arg1;
- (void)pageSheetWillClose:(id)arg1;
- (void)pageSheetWillShow:(id)arg1;
- (_Bool)isCurrentSceneNeedDataReporter;
- (void)playAudio;
- (void)showAudioAlert;
- (void)showDemoView;
- (void)enterHistoryMsgList;
- (void)resetScope;
- (void)reloadUI;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithScopeItem:(id)arg1 pageModel:(id)arg2 uiType:(unsigned int)arg3 selectedAction:(CDUnknownBlockType)arg4;
- (id)initWithScopeItem:(id)arg1 pageModel:(id)arg2 selectedAction:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

