//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, FavoritesItemDataField;

@interface SimpleChatLogInfo
{
    shared_ptr_09342520 m_dataItem;
    vector_d88869c6 m_multiDataItem;
    FavoritesItemDataField *_m_dataField;
    CMessageWrap *_m_dataMsg;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *m_dataMsg; // @synthesize m_dataMsg=_m_dataMsg;
@property(retain, nonatomic) FavoritesItemDataField *m_dataField; // @synthesize m_dataField=_m_dataField;
- (id)getDataBackgroundColor;
- (id)getIconName;
- (id)getTitle;
- (id)getAppDataPath;
- (_Bool)isAggregationMsg;
- (unsigned int)getDataPreviewType;
- (id)p_getInnerDataField:(id)arg1 innerIndexArray:(id)arg2;
- (void *)multiDataItems;
- (void)insertMultiDataItem:(void *)arg1;
- (void *)dataItem;
- (void)setDataItem:(void *)arg1;

@end

