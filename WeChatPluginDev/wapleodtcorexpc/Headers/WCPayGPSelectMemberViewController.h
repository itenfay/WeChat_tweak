//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUILabel, MMUIView, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIButton, UICollectionView, UIImageView, UITextField;
@protocol WCPayGPSelectMemberControllerDelegate;

@interface WCPayGPSelectMemberViewController
{
    _Bool _bIsAllSelect;
    _Bool _bIsSearching;
    unsigned int _maxSelectMember;
    id <WCPayGPSelectMemberControllerDelegate> _delegate;
    NSArray *_chatroomMemberContactArray;
    NSMutableArray *_selectdContacts;
    NSMutableArray *_resultSelectedContacts;
    unsigned long long _openImCount;
    MMTableView *_tableView;
    MMUIView *_toolBarView;
    UIImageView *_checkMarkImgView;
    UIButton *_selectAllButton;
    MMUIView *_topBarView;
    UIImageView *_searchIconImgView;
    UITextField *_searchTextField;
    MMUILabel *_textfieldPlaceHolder;
    UICollectionView *_collectionView;
    NSArray *_searchResultContacts;
    double _kSelectMemberTopBarHeight;
    NSMutableDictionary *_cellHeightDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cellHeightDict; // @synthesize cellHeightDict=_cellHeightDict;
@property(nonatomic) double kSelectMemberTopBarHeight; // @synthesize kSelectMemberTopBarHeight=_kSelectMemberTopBarHeight;
@property(retain, nonatomic) NSArray *searchResultContacts; // @synthesize searchResultContacts=_searchResultContacts;
@property(nonatomic) _Bool bIsSearching; // @synthesize bIsSearching=_bIsSearching;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) MMUILabel *textfieldPlaceHolder; // @synthesize textfieldPlaceHolder=_textfieldPlaceHolder;
@property(retain, nonatomic) UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(retain, nonatomic) UIImageView *searchIconImgView; // @synthesize searchIconImgView=_searchIconImgView;
@property(retain, nonatomic) MMUIView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) UIButton *selectAllButton; // @synthesize selectAllButton=_selectAllButton;
@property(retain, nonatomic) UIImageView *checkMarkImgView; // @synthesize checkMarkImgView=_checkMarkImgView;
@property(retain, nonatomic) MMUIView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long openImCount; // @synthesize openImCount=_openImCount;
@property(nonatomic) unsigned int maxSelectMember; // @synthesize maxSelectMember=_maxSelectMember;
@property(nonatomic) _Bool bIsAllSelect; // @synthesize bIsAllSelect=_bIsAllSelect;
@property(retain, nonatomic) NSMutableArray *resultSelectedContacts; // @synthesize resultSelectedContacts=_resultSelectedContacts;
@property(retain, nonatomic) NSMutableArray *selectdContacts; // @synthesize selectdContacts=_selectdContacts;
@property(retain, nonatomic) NSArray *chatroomMemberContactArray; // @synthesize chatroomMemberContactArray=_chatroomMemberContactArray;
@property(nonatomic) __weak id <WCPayGPSelectMemberControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doChatRoomSearch:(id)arg1;
- (_Bool)isContactExisted:(id)arg1;
- (void)removeSelectContact:(id)arg1;
- (_Bool)isContactSelected:(id)arg1;
- (id)getContactAtIndexPath:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (void)reloadSelectMemberCollectionViewWithAnimated:(int)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)checkIfSelectContactMoreThanMax;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)isAllContactSelected;
- (void)addAllContactExceptSelfIfNeed;
- (void)checkConfirmBarbuttonStatus;
- (void)updateSelectAllState:(_Bool)arg1;
- (void)checkSelectAllToolBarStatus;
- (void)selectAllBtnPress:(id)arg1;
- (void)confirmToLaunchWithoutSelf;
- (void)finishSelectMember;
- (void)saveSelectedMember;
- (void)cancelSaveSelectedMember;
- (void)selectMemberVCCancel;
- (void)setupToolViewContent;
- (void)clearAllInput;
- (void)setupTopbarViewContent;
- (id)makeTipHeaderView;
- (void)setupContentView;
- (void)setupNavigationBar;
- (void)setupData;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

