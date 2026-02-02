//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ContactTagEditLogic, NSArray, NSString;

@interface ContactTagViewController
{
    CContact *m_contact;
    ContactTagEditLogic *m_TagEditLogic;
    _Bool _bIsNeedReloadView;
    _Bool isAlreadyDisMissSelf;
    _Bool _needReloadWhenAppear;
    NSArray *_previousContactTagNameList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *previousContactTagNameList; // @synthesize previousContactTagNameList=_previousContactTagNameList;
@property(nonatomic) _Bool needReloadWhenAppear; // @synthesize needReloadWhenAppear=_needReloadWhenAppear;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void)onAllContactLabelUpdated:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)reloadCurrentTags;
- (void)reloadAllTags;
- (void)buildContactTagsData:(id)arg1;
- (void)buildAllTagsData:(id)arg1;
- (void)onJobForTagEditRet:(int)arg1;
- (void)InternalDisMissSelfAnimated:(_Bool)arg1;
- (void)reportForTagEdit:(id)arg1 withAllTags:(id)arg2 contactTags:(id)arg3;
- (void)editDone:(id)arg1;
- (void)editCancel;
- (id)getContactTagNameList;
- (id)getAllTagNameList;
- (void)initView;
- (void)initData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)rightBarButtonTitle;
- (void)viewDidLoad;
- (void)OnMyCancel;
- (void)onTouchView:(id)arg1;
- (void)dealloc;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

