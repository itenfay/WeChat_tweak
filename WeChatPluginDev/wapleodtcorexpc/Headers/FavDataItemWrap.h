//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BaseMessageViewModel, FavoritesItem, FavoritesItemDataField;

@interface FavDataItemWrap
{
    FavoritesItemDataField *m_dataItem;
    FavoritesItem *m_parent;
    unsigned int m_index;
    BaseMessageViewModel *_messageViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaseMessageViewModel *messageViewModel; // @synthesize messageViewModel=_messageViewModel;
@property(nonatomic) unsigned int index; // @synthesize index=m_index;
@property(retain, nonatomic) FavoritesItem *parent; // @synthesize parent=m_parent;
@property(retain, nonatomic) FavoritesItemDataField *dataItem; // @synthesize dataItem=m_dataItem;
- (_Bool)StartDownload;
- (id)GetMusicInfo;
- (id)GetImgArrayWithDataList:(id)arg1;
- (id)GetImgArray;
- (int)GetParentDownloadStatus;
- (int)GetImageDataDownloadStatus;
- (unsigned int)GetImageIndex;
- (unsigned int)GetParentLocalID;
- (id)GetDataItem;
- (id)GetParent;
- (unsigned long long)getParserType;
- (id)initWithParent:(id)arg1 DataItem:(id)arg2 Index:(unsigned int)arg3;

@end

