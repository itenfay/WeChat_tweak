//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ContactAddDescriptionViewController
{
    _Bool _hasFilledDescription;
    _Bool _descSelectorIconExpo;
    _Bool _descSelectorIconClick;
    _Bool _descSelectorIconUsed;
    NSString *_helloMsg;
    CDUnknownBlockType _resultBlock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool descSelectorIconUsed; // @synthesize descSelectorIconUsed=_descSelectorIconUsed;
@property(nonatomic) _Bool descSelectorIconClick; // @synthesize descSelectorIconClick=_descSelectorIconClick;
@property(nonatomic) _Bool descSelectorIconExpo; // @synthesize descSelectorIconExpo=_descSelectorIconExpo;
@property(nonatomic) _Bool hasFilledDescription; // @synthesize hasFilledDescription=_hasFilledDescription;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(retain, nonatomic) NSString *helloMsg; // @synthesize helloMsg=_helloMsg;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)showSelectRemarkHalfScreen;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (id)makeSlideTextDescriptionBtnView;
- (_Bool)needSlideTextDescriptionBtn;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (unsigned int)getSectionType:(long long)arg1;
- (long long)getNumberSections;
- (id)getTableHeaderView;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

