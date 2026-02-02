//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesItem, NSArray, NSString;
@protocol FavTagViewDelegate;

@interface FavTagViewController
{
    FavoritesItem *m_favItem;
    NSArray *m_arrFavItems;
    int m_editSource;
    unsigned long long m_tagEditMode;
    id <FavTagViewDelegate> m_delegate;
    _Bool _isFromToast;
    int _editSourcePage;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFromToast; // @synthesize isFromToast=_isFromToast;
@property(nonatomic) int editSourcePage; // @synthesize editSourcePage=_editSourcePage;
@property(nonatomic) int m_editSource; // @synthesize m_editSource;
@property(nonatomic) __weak id <FavTagViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)editDone:(id)arg1;
- (void)editCancel;
- (void)viewDidLoad;
- (id)initWithFavItems:(id)arg1;
- (id)initWithFavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

