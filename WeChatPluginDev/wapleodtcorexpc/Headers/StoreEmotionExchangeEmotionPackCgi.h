//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreItem;
@protocol StoreEmotionExchangeEmotionPackCgiDelegate;

@interface StoreEmotionExchangeEmotionPackCgi
{
    EmoticonStoreItem *m_storeItem;
    int _exchangeScence;
    id <StoreEmotionExchangeEmotionPackCgiDelegate> _delegate;
    EmoticonStoreItem *_item;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonStoreItem *item; // @synthesize item=_item;
@property(nonatomic) int exchangeScence; // @synthesize exchangeScence=_exchangeScence;
@property(nonatomic) __weak id <StoreEmotionExchangeEmotionPackCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)startRequestWithProductId:(id)arg1 reqScene:(int)arg2 IsAutomatic:(_Bool)arg3;
- (_Bool)startRequestWithStoreItem:(id)arg1 reqScene:(int)arg2 IsAutomatic:(_Bool)arg3;
- (id)init;

@end

