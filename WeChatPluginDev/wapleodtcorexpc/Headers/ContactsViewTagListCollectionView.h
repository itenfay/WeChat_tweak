//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionView.h>

@class NSMutableArray, NSString, UIView;
@protocol ContactsViewTagListCollectionViewDelegate;

@interface ContactsViewTagListCollectionView : UICollectionView
{
    _Bool _singleSelectMode;
    id <ContactsViewTagListCollectionViewDelegate> _m_delegate;
    NSMutableArray *_m_arrSelectedTagId;
    UIView *_headerView;
    NSMutableArray *_tagList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *tagList; // @synthesize tagList=_tagList;
@property(nonatomic) _Bool singleSelectMode; // @synthesize singleSelectMode=_singleSelectMode;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSMutableArray *m_arrSelectedTagId; // @synthesize m_arrSelectedTagId=_m_arrSelectedTagId;
@property(nonatomic) __weak id <ContactsViewTagListCollectionViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (struct CGSize)itemSizeForCreatTagCell;
- (struct CGSize)itemSizeForTagName:(id)arg1;
- (void)OnNewContactTagCreateTagWithTagId:(unsigned int)arg1 result:(_Bool)arg2 isRename:(_Bool)arg3;
- (void)onClickCreateTagButton;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)unHighLightAll;
- (void)highLightButtonsWithTagIdSet:(id)arg1;
- (void)highLightButtons:(id)arg1;
- (void)setButtonHighLight:(_Bool)arg1 named:(id)arg2;
- (id)getTagList;
- (void)updateWithTags:(id)arg1;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

