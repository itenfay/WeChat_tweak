//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, FavoritesItemDataField;

@interface SimpleRecordImgInfo
{
    FavoritesItemDataField *_m_recordData;
    CMessageWrap *_m_msgWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap=_m_msgWrap;
@property(retain, nonatomic) FavoritesItemDataField *m_recordData; // @synthesize m_recordData=_m_recordData;
- (id)getImgUUID;
- (_Bool)isFromC2C;
- (_Bool)isVideoMsg;
- (_Bool)isImgMsg;
- (id)getDefaultImg;
- (unsigned int)getVideoTime;
- (id)getSightPath;
- (id)getImgPath;
- (id)getSquareImgDir;

@end

