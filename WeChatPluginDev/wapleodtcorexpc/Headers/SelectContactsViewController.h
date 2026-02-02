//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactSelectView, NSMutableDictionary, NSString, UIView;
@protocol SelectContactsViewControllerDelegate;

@interface SelectContactsViewController
{
    id <SelectContactsViewControllerDelegate> m_delegate;
    UIView *m_titleView;
    unsigned int m_uiScene;
    ContactSelectView *m_selectView;
    _Bool _enableInteractiveDismiss;
    NSString *_m_nsViewControllerTitle;
    NSMutableDictionary *_dicExistContact;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableInteractiveDismiss; // @synthesize enableInteractiveDismiss=_enableInteractiveDismiss;
@property(retain, nonatomic) NSMutableDictionary *dicExistContact; // @synthesize dicExistContact=_dicExistContact;
@property(retain, nonatomic) NSString *m_nsViewControllerTitle; // @synthesize m_nsViewControllerTitle=_m_nsViewControllerTitle;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
@property(nonatomic) __weak id <SelectContactsViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)onExistContactDidSelected:(id)arg1;
- (id)getSafeSearchViewController;
- (_Bool)hideFavourContactCandidate;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onSelectContact:(id)arg1;
- (void)onSelectOpenIMGroup;
- (void)onSelectBrandContact;
- (void)onSelectOpenIMContactReturn:(id)arg1;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initView;
- (void)initTitleArea;
- (void)onCancelBack:(id)arg1;
- (_Bool)shouldInteractiveDismiss;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

