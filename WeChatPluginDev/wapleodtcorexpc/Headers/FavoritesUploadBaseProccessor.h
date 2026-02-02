//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesItem, NSMutableArray;
@protocol FavoritesUploadProccessorDelegate;

@interface FavoritesUploadBaseProccessor
{
    NSMutableArray *m_proccessingQueue;
    _Bool m_bProccessing;
    FavoritesItem *m_priorItem;
    FavoritesItem *m_proccessingItem;
    FavoritesUploadBaseProccessor *nextProccessor;
    id <FavoritesUploadProccessorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavoritesUploadProccessorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak FavoritesUploadBaseProccessor *nextProccessor; // @synthesize nextProccessor;
- (_Bool)containsFavItem:(id)arg1;
- (void)removeAllItems;
- (_Bool)checkFavItemOccupiedByFavId:(unsigned int)arg1;
- (_Bool)isProccessingWithLocalId:(unsigned int)arg1;
- (void)updateTagForItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1 isPrior:(_Bool)arg2;
- (void)dealloc;
- (id)getAllItem;
- (void)tryProccess;
- (void)triggerProccess;
- (id)initWithDelegate:(id)arg1;

@end

