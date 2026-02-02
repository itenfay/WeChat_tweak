//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, CUploadImgWrap, NSString;

@interface DownloadImageInfo : NSObject
{
    CMessageWrap *m_wrapMsg;
    unsigned int m_uiTotalLen;
    unsigned int m_uiStartPos;
    _Bool m_bDownloadHD;
    NSString *m_nsChatName;
    CUploadImgWrap *m_wrapDownload;
    unsigned int m_uiNotifyPartLen;
    unsigned int m_uiNotifyTotalLen;
    unsigned long long m_ui64StartTime;
    int m_nRetCode;
}

- (void).cxx_destruct;
@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode;
@property(nonatomic) unsigned long long m_ui64StartTime; // @synthesize m_ui64StartTime;
@property(nonatomic) unsigned int m_uiNotifyTotalLen; // @synthesize m_uiNotifyTotalLen;
@property(nonatomic) unsigned int m_uiNotifyPartLen; // @synthesize m_uiNotifyPartLen;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property(nonatomic) _Bool m_bDownloadHD; // @synthesize m_bDownloadHD;
@property(nonatomic) unsigned int m_uiStartPos; // @synthesize m_uiStartPos;
@property(nonatomic) unsigned int m_uiTotalLen; // @synthesize m_uiTotalLen;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;
- (id)GetStatInfo;
- (void)NotifyOffset;
- (id)GenDownloadInfo;
- (void)SetTotalLen:(unsigned int)arg1;
- (void)UpdateInfo;
- (_Bool)IsSameInfo:(id)arg1;
- (id)init;

@end

