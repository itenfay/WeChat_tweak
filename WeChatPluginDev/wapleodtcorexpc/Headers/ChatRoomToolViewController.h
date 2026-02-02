//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ChatRoomToolLastUseWeAppLogic, NSMutableArray, NSString, UICollectionView;
@protocol ChatRoomToolViewControllerDelegate;

@interface ChatRoomToolViewController
{
    NSMutableArray *m_toolWeAppAr;
    NSMutableArray *m_latestUseInGroupWeAppAr;
    ChatRoomToolLastUseWeAppLogic *m_lastUseWeAppLogic;
    _Bool _isShowInPageSheetMode;
    CContact *_chatRoomContact;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool isShowInPageSheetMode; // @synthesize isShowInPageSheetMode=_isShowInPageSheetMode;
@property(retain, nonatomic) CContact *chatRoomContact; // @synthesize chatRoomContact=_chatRoomContact;
- (void)onChangeChatRoomToolWeAppListWithUserName:(id)arg1;
- (void)onLoadWeAppLogicReloadTableWithWeAppList:(id)arg1;
- (void)didUpdateSelectWeAppList:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)didSelectChatRoomToolWeAppAddAction;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)isShowEmptyCell;
- (void)reloadCollection;
- (void)initCollectionView;
- (double)getSessionContentMargin;
- (double)getContentMargin;
- (void)reloadView;
- (void)initData;
- (void)initRegister;
- (id)init;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <ChatRoomToolViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

