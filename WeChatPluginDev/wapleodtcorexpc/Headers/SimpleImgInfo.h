//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol SimpleImgInfoDelegate;

@interface SimpleImgInfo
{
    NSString *m_strMsgLocalID;
    unsigned int m_uiCreateTime;
    _Bool m_bExpired;
    id <SimpleImgInfoDelegate> m_delegate;
    _Bool _forbidDetailPage;
    _Bool _m_noResponseClick;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_noResponseClick; // @synthesize m_noResponseClick=_m_noResponseClick;
@property(nonatomic) _Bool forbidDetailPage; // @synthesize forbidDetailPage=_forbidDetailPage;
@property(nonatomic) __weak id <SimpleImgInfoDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool m_bExpired; // @synthesize m_bExpired;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(retain, nonatomic) NSString *m_strMsgLocalID; // @synthesize m_strMsgLocalID;
- (unsigned long long)getMsgRelatedResourceSize;
- (void)startVideoPreload:(unsigned int)arg1;
- (_Bool)isFinderMsg;
- (id)getImgUUID;
- (id)getThumbPath;
- (long long)getRawFileSize;
- (id)getRawFilePath;
- (_Bool)hasRawFile;
- (_Bool)isGroupNoticeMsg;
- (id)getThumbUrl;
- (_Bool)isUseWebImg;
- (_Bool)isBrandMpVideoMsg;
- (long long)compare:(id)arg1;
- (_Bool)isFromC2C;
- (_Bool)isVideoMsg;
- (_Bool)isGifMsg;
- (_Bool)isImgMsg;
- (_Bool)isAppRecordMsg;
- (_Bool)isAppNoteMsg;
- (_Bool)isAppVideoMsg;
- (_Bool)isAppMusicMsg;
- (_Bool)isFileMsg;
- (_Bool)isAppFileMsg;
- (_Bool)isAppUrlMsg;
- (id)getIconName;
- (id)getDefaultImg;
- (unsigned int)getVideoTime;
- (id)getSightPath;
- (id)getImageData;
- (id)getImage;
- (id)getImgPath;
- (id)getSquareImgDir;
- (id)getSessionName;
- (id)getTitle;

@end

