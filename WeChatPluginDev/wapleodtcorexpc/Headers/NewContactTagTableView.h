//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactsViewTagListCollectionView, NSString;
@protocol NewContactTagTableViewDelegate;

@interface NewContactTagTableView
{
    ContactsViewTagListCollectionView *m_tagListView;
    _Bool _hiddenEditButton;
    _Bool _hiddenHeaderView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hiddenHeaderView; // @synthesize hiddenHeaderView=_hiddenHeaderView;
@property(nonatomic) _Bool hiddenEditButton; // @synthesize hiddenEditButton=_hiddenEditButton;
- (void)calculateHeight;
- (id)getViewController;
- (void)didContactTagCreateTagWithTagId:(unsigned int)arg1 result:(_Bool)arg2 isRename:(_Bool)arg3;
- (void)didSelectedOrCancelTagButtonWithTagId:(unsigned int)arg1 tagName:(id)arg2 isSelected:(_Bool)arg3;
- (void)setScrollViewEdgeInset:(struct UIEdgeInsets)arg1;
- (void)setSingleSelectMode:(_Bool)arg1;
- (id)getArrSelectedTagId;
- (void)unHighLightAllButtons;
- (void)highLightButtonsWithTagIdSet:(id)arg1;
- (void)highLightButtons:(id)arg1;
- (void)setButtonHighLight:(_Bool)arg1 named:(id)arg2;
- (id)makeHeaderView;
- (void)addTags:(id)arg1 titled:(id)arg2;
- (void)layoutSubviews;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <NewContactTagTableViewDelegate> m_delegate;
@property(readonly) Class superclass;

@end

