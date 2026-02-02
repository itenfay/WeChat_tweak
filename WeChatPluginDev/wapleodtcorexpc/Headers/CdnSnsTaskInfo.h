//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTextStateMediaItem, NSArray, NSString, UrlInfo, WCFinderFeedMediaWrap, WCMediaItem, WCStoryMediaItem;

@interface CdnSnsTaskInfo : NSObject
{
    int m_nRetCode;
    unsigned long long m_ui64StartTime;
    unsigned int m_uiFileType;
    unsigned long long m_uiFileSize;
    NSString *m_nsCdnStatInfo;
    WCMediaItem *m_oWCMediaItem;
    long long downloadType;
    NSString *m_nsClientID;
    NSString *m_nsSavePath;
    UrlInfo *m_urlInfo;
    unsigned int m_uiIPDnsType;
    unsigned int m_uiConcurrentCount;
    unsigned int m_eImgRequestType;
    unsigned int m_eImgResponseType;
    _Bool m_bNeedNotify;
    _Bool m_isDCIP;
    unsigned int m_dcIpDnsType;
    unsigned int m_ocIpDnsType;
    NSArray *m_dcIplist;
    NSArray *m_ocIplist;
    unsigned int m_uiDnsCostTime;
    int m_cdnMediaType;
    _Bool _isBatchDownloadThumb;
    _Bool _finishBatchTask;
    _Bool _isCoverTask;
    _Bool _wasSuspended;
    _Bool _sufferedFromBadNetwork;
    unsigned int _feedMediaAllCount;
    long long m_maxRetryCount;
    WCStoryMediaItem *_m_oStoryMediaItem;
    WCFinderFeedMediaWrap *_m_oFinderMediaItem;
    MMTextStateMediaItem *_m_oTextStateMediaMediaItem;
    NSString *_tid;
    NSArray *_batchMediaInfo;
    long long _finderDownloadImageType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool sufferedFromBadNetwork; // @synthesize sufferedFromBadNetwork=_sufferedFromBadNetwork;
@property(nonatomic) _Bool wasSuspended; // @synthesize wasSuspended=_wasSuspended;
@property(nonatomic) long long finderDownloadImageType; // @synthesize finderDownloadImageType=_finderDownloadImageType;
@property(nonatomic) _Bool isCoverTask; // @synthesize isCoverTask=_isCoverTask;
@property(nonatomic) _Bool finishBatchTask; // @synthesize finishBatchTask=_finishBatchTask;
@property(retain, nonatomic) NSArray *batchMediaInfo; // @synthesize batchMediaInfo=_batchMediaInfo;
@property(nonatomic) unsigned int feedMediaAllCount; // @synthesize feedMediaAllCount=_feedMediaAllCount;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) _Bool isBatchDownloadThumb; // @synthesize isBatchDownloadThumb=_isBatchDownloadThumb;
@property(retain, nonatomic) MMTextStateMediaItem *m_oTextStateMediaMediaItem; // @synthesize m_oTextStateMediaMediaItem=_m_oTextStateMediaMediaItem;
@property(retain, nonatomic) WCFinderFeedMediaWrap *m_oFinderMediaItem; // @synthesize m_oFinderMediaItem=_m_oFinderMediaItem;
@property(retain, nonatomic) WCStoryMediaItem *m_oStoryMediaItem; // @synthesize m_oStoryMediaItem=_m_oStoryMediaItem;
@property(nonatomic) unsigned int m_uiDnsCostTime; // @synthesize m_uiDnsCostTime;
@property(nonatomic) int m_cdnMediaType; // @synthesize m_cdnMediaType;
@property(retain, nonatomic) NSArray *m_ocIplist; // @synthesize m_ocIplist;
@property(retain, nonatomic) NSArray *m_dcIplist; // @synthesize m_dcIplist;
@property(nonatomic) unsigned int m_ocIpDnsType; // @synthesize m_ocIpDnsType;
@property(nonatomic) unsigned int m_dcIpDnsType; // @synthesize m_dcIpDnsType;
@property(nonatomic) _Bool m_isDCIP; // @synthesize m_isDCIP;
@property(nonatomic) _Bool m_bNeedNotify; // @synthesize m_bNeedNotify;
@property(nonatomic) unsigned int m_eImgResponseType; // @synthesize m_eImgResponseType;
@property(nonatomic) unsigned int m_eImgRequestType; // @synthesize m_eImgRequestType;
@property(nonatomic) unsigned int m_uiConcurrentCount; // @synthesize m_uiConcurrentCount;
@property(nonatomic) long long m_maxRetryCount; // @synthesize m_maxRetryCount;
@property(retain, nonatomic) UrlInfo *m_urlInfo; // @synthesize m_urlInfo;
@property(retain, nonatomic) NSString *m_nsSavePath; // @synthesize m_nsSavePath;
@property(retain, nonatomic) NSString *m_nsClientID; // @synthesize m_nsClientID;
@property(nonatomic) long long downloadType; // @synthesize downloadType;
@property(retain, nonatomic) WCMediaItem *m_oWCMediaItem; // @synthesize m_oWCMediaItem;
@property(retain, nonatomic) NSString *m_nsCdnStatInfo; // @synthesize m_nsCdnStatInfo;
@property(nonatomic) unsigned long long m_uiFileSize; // @synthesize m_uiFileSize;
@property(nonatomic) unsigned int m_uiFileType; // @synthesize m_uiFileType;
@property(nonatomic) unsigned long long m_ui64StartTime; // @synthesize m_ui64StartTime;
@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode;
- (id)GetStatInfo;
- (id)init;

@end

