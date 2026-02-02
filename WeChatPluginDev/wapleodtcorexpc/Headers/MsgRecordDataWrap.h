//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BaseMessageViewModel, CMessageWrap, FavoritesItemDataField, NSArray, NSString;

@interface MsgRecordDataWrap
{
    CMessageWrap *m_parent;
    FavoritesItemDataField *m_dataItem;
    unsigned int m_index;
    NSArray *m_dataList;
    NSString *m_desc;
    BaseMessageViewModel *_messageViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaseMessageViewModel *messageViewModel; // @synthesize messageViewModel=_messageViewModel;
@property(nonatomic) unsigned int m_index; // @synthesize m_index;
@property(retain, nonatomic) FavoritesItemDataField *m_dataItem; // @synthesize m_dataItem;
@property(retain, nonatomic) CMessageWrap *m_parent; // @synthesize m_parent;
- (id)getThumbImagePath;
- (id)getFormatVideoPath;
- (id)getTempVideoPath;
- (id)getMediaWrapUrl;
- (id)getMediaWrapIdentifier;
- (_Bool)StartDownload;
- (id)GetTempFilePath;
- (id)GetMusicInfo;
- (id)GetMaskImagePath;
- (id)GetImgArray;
- (int)GetParentDownloadStatus;
- (int)GetImageDataDownloadStatus;
- (unsigned int)GetImageIndex;
- (unsigned int)GetParentLocalID;
- (id)GetDataItem;
- (id)GetThumbPath;
- (id)GetDataPath;
- (id)getThumbPathForData:(id)arg1;
- (id)GetParent;
- (id)Convert2VideoInfo;
- (id)Convert2AppFileMsg;
- (unsigned long long)getParserType;
- (id)initWithParent:(id)arg1 DataItem:(id)arg2 dataList:(id)arg3 desc:(id)arg4 Index:(unsigned int)arg5;
- (id)initWithParent:(id)arg1 DataItem:(id)arg2 Index:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

