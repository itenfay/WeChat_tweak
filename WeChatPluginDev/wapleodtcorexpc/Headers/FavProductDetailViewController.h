//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavDataItemWrap, FavoritesItem;

@interface FavProductDetailViewController : NSObject
{
    FavoritesItem *m_favItem;
    FavDataItemWrap *m_favDataWrap;
}

- (void)OnSendAppMsgOKToContacts:(id)arg1;
- (void)onEditProductTag;
- (void)onDeleteProduct;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithFavDataWrap:(id)arg1;
- (id)initWithFavoritesItem:(id)arg1;

@end

