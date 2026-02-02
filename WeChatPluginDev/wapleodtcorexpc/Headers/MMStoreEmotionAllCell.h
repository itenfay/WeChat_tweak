//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreItem;
@protocol MMStoreEmotionAllCellDelegate;

@interface MMStoreEmotionAllCell
{
    id <MMStoreEmotionAllCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMStoreEmotionAllCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)arg1;
- (void)updateCellCornerRadiusFor:(_Bool)arg1 isFirst:(_Bool)arg2;
- (void)changeLayoutForLastCell;
- (void)changeLayoutForFirstCell;
- (void)updateStoreItem:(id)arg1 Entrance:(unsigned int)arg2;
- (_Bool)layoutStaticBtnWidth;
@property(readonly, nonatomic) EmoticonStoreItem *m_storeItem;

@end

