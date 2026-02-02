//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString;

@interface BTReaderMsgSectionData
{
    CContact *_contact;
    _Bool _bIsBrandSettingFold;
    _Bool _isOftenReadContact;
    _Bool _isStarContact;
    _Bool _isTopItemShowBigCover;
}

+ (_Bool)canCreateSectionDataWithMsgWrap:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isTopItemShowBigCover; // @synthesize isTopItemShowBigCover=_isTopItemShowBigCover;
@property(readonly, nonatomic) _Bool isStarContact; // @synthesize isStarContact=_isStarContact;
@property(readonly, nonatomic) _Bool isOftenReadContact; // @synthesize isOftenReadContact=_isOftenReadContact;
@property(readonly, nonatomic) _Bool bIsBrandSettingFold; // @synthesize bIsBrandSettingFold=_bIsBrandSettingFold;
@property(readonly, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void)onItemViewModelViewHeightChange:(id)arg1;
@property(readonly, nonatomic) unsigned int expanState;
@property(readonly, nonatomic) unsigned int lastIdx;
@property(readonly, nonatomic) unsigned long long firstMid;
@property(readonly, nonatomic) NSString *bizUsername;
@property(readonly, nonatomic) _Bool isMsgTopRightUseRecReason;
@property(readonly, nonatomic) _Bool isTopItemShowLargeCover;
@property(readonly, nonatomic) _Bool bIsExpand;
- (id)arrReaderItemCellViewModel;
@property(readonly, nonatomic) unsigned long long itemShowCount;
- (void)updateContact:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isFold;
- (void)updateItemViewModelArr;
- (void)initItemViewModelArr;
- (void)setSectionWidth:(double)arg1;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (long long)numberOfRowsInSection;
- (unsigned long long)sectionType;
- (void)updateTopItemCoverStatus;
- (void)updateMsgWrap:(id)arg1;
- (id)initWithMsgWrap:(id)arg1 sectionWidth:(double)arg2 displayMode:(unsigned int)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

