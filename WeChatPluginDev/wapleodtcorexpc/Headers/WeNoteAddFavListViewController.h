//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesItem, NSMutableArray;
@protocol WeNoteAddFavListViewControllerDelegate;

@interface WeNoteAddFavListViewController
{
    FavoritesItem *m_curNoteItem;
    NSMutableArray *m_getA8KeyReqArr;
    _Bool _isFlutterNote;
    id <WeNoteAddFavListViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFlutterNote; // @synthesize isFlutterNote=_isFlutterNote;
@property(nonatomic) __weak id <WeNoteAddFavListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetA8KeyResp:(id)arg1 EventID:(unsigned int)arg2;
- (void)sendGetA8KeyReq;
- (id)getA8KeyRequestWith:(id)arg1 index:(unsigned int)arg2;
- (void)onSelectDone;
- (id)messageWrapsForMsgFastBrowseView:(id)arg1;
- (void)msgFastBrowseView:(id)arg1 didChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (_Bool)msgFastBrowseView:(id)arg1 willChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (void)onClickDetailBtnWith:(id)arg1;
- (void)canNotSelecteDueToExceedCount;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (void)updateAddBtn;
- (id)convertDataWrapToAttributeNode:(id)arg1;
- (id)convertDataWrapToNoteData:(id)arg1;
- (void)onDone;
- (void)checkVideoItem:(id)arg1;
- (void)addSeletedDataItemToNote;
- (void)confirmAttachmentSeperationInRange:(struct _NSRange)arg1 with:(id)arg2;
- (void)OnCancel;
- (void)OnSearch:(id)arg1 taskKey:(id)arg2;
- (void)addItemList:(id)arg1;
- (void)initEmptySearchLabel;
- (void)initNavigationBar;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNoteItem:(id)arg1 maxSelectedCount:(unsigned int)arg2;

@end

