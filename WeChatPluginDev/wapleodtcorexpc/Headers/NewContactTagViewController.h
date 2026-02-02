//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSSet;
@protocol NewContactTagViewControllerDelegate;

@interface NewContactTagViewController
{
    unsigned int m_curEventID;
    id <NewContactTagViewControllerDelegate> _m_delegate;
    NSSet *_originalAllTags;
    NSMutableSet *_editViewNewlyCreatedTags;
    NSMutableSet *_editViewAddedTags;
    NSMutableSet *_tableViewNewlyCreatedTags;
    NSMutableSet *_tableViewAddedTags;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *tableViewAddedTags; // @synthesize tableViewAddedTags=_tableViewAddedTags;
@property(retain, nonatomic) NSMutableSet *tableViewNewlyCreatedTags; // @synthesize tableViewNewlyCreatedTags=_tableViewNewlyCreatedTags;
@property(retain, nonatomic) NSMutableSet *editViewAddedTags; // @synthesize editViewAddedTags=_editViewAddedTags;
@property(retain, nonatomic) NSMutableSet *editViewNewlyCreatedTags; // @synthesize editViewNewlyCreatedTags=_editViewNewlyCreatedTags;
@property(retain, nonatomic) NSSet *originalAllTags; // @synthesize originalAllTags=_originalAllTags;
@property(nonatomic) __weak id <NewContactTagViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (_Bool)isNewlyCreatedTag:(id)arg1;
- (void)onDeleteButtonFromTagEditView:(id)arg1;
- (void)onAddButtonFromTagEditView:(id)arg1;
- (void)onDeleteButtonFromTagTableView:(id)arg1;
- (void)onAddButtonFromTagTableView:(id)arg1;
- (void)onEditTags;
- (void)onTextFieldMoved:(id)arg1;
- (id)genFavTagTableView;
- (id)genFavTagEditView;
- (void)viewDidLoad;
- (void)initView;

@end

