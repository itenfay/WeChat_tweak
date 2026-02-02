//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, WCDataItem, WCLanDeviceKissFileMsg, WCMediaItem;

@interface WCLanDeviceData
{
    CMessageWrap *m_nsMsgWrap;
    WCDataItem *m_nsDataItem;
    unsigned long long m_nsScene;
    unsigned long long m_nsSource;
    WCMediaItem *m_nsMediaItem;
    WCLanDeviceKissFileMsg *m_nsFileInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCLanDeviceKissFileMsg *m_nsFileInfo; // @synthesize m_nsFileInfo;
@property(retain, nonatomic) WCMediaItem *m_nsMediaItem; // @synthesize m_nsMediaItem;
@property(nonatomic) unsigned long long m_nsSource; // @synthesize m_nsSource;
@property(nonatomic) unsigned long long m_nsScene; // @synthesize m_nsScene;
@property(retain, nonatomic) WCDataItem *m_nsDataItem; // @synthesize m_nsDataItem;
@property(retain, nonatomic) CMessageWrap *m_nsMsgWrap; // @synthesize m_nsMsgWrap;
- (long long)opSource;
- (id)fileExt;
- (long long)opObjType;
- (id)dataId;
- (id)fileKissMsgWithDetail:(_Bool)arg1;
- (id)thumbPath;
- (id)filePath;
- (id)imageKissMsg;
- (id)imagePath;
- (id)urlInfo;
- (id)locationInfo;
- (id)musicInfo;
- (id)initWithTimeLineItem:(id)arg1 mediaItem:(id)arg2;
- (id)initWithMessageWrap:(id)arg1;

@end

