//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString;

@interface CExtendInfoOfEmoticon : NSObject
{
    NSString *m_nsEmoticonMD5;
    unsigned int m_uiEmoticonType;
    unsigned int m_uiGameType;
    unsigned int m_uiGameContent;
    unsigned int m_uiUploadStatus;
    NSString *m_nsEmoticonBelongToProductID;
    NSString *m_nsDesignerId;
    NSString *m_nsThumbImgUrl;
    NSString *m_tpUrlString;
    NSString *m_authkey;
    _Bool m_bShowRewardTips;
    _Bool disableRecordSend;
    _Bool _isNonFreeItem;
    _Bool _isPriceInfoUnkown;
    unsigned int _m_uiEmoticonWidth;
    unsigned int _m_uiEmoticonHeight;
    CMessageWrap *m_refMessageWrap;
    NSString *m_cdnUrlString;
    NSString *m_encryptUrlString;
    NSString *m_aesKey;
    NSString *m_nsExternUrl;
    NSString *m_nsExternMd5;
    NSString *m_nsActivityId;
    NSString *m_nsLinkId;
    NSString *m_attachedText;
    NSString *m_attachedTextColor;
    NSString *m_lensId;
    NSString *m_nsEmoticonSvrDescStr;
}

+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isPriceInfoUnkown; // @synthesize isPriceInfoUnkown=_isPriceInfoUnkown;
@property(nonatomic) _Bool isNonFreeItem; // @synthesize isNonFreeItem=_isNonFreeItem;
@property(nonatomic) unsigned int m_uiEmoticonHeight; // @synthesize m_uiEmoticonHeight=_m_uiEmoticonHeight;
@property(nonatomic) unsigned int m_uiEmoticonWidth; // @synthesize m_uiEmoticonWidth=_m_uiEmoticonWidth;
@property(nonatomic) _Bool disableRecordSend; // @synthesize disableRecordSend;
@property(retain, nonatomic) NSString *m_nsEmoticonSvrDescStr; // @synthesize m_nsEmoticonSvrDescStr;
@property(retain, nonatomic) NSString *m_lensId; // @synthesize m_lensId;
@property(retain, nonatomic) NSString *m_attachedTextColor; // @synthesize m_attachedTextColor;
@property(retain, nonatomic) NSString *m_attachedText; // @synthesize m_attachedText;
@property(retain, nonatomic) NSString *m_authkey; // @synthesize m_authkey;
@property(retain, nonatomic) NSString *m_tpUrlString; // @synthesize m_tpUrlString;
@property(nonatomic) _Bool m_bShowRewardTips; // @synthesize m_bShowRewardTips;
@property(retain, nonatomic) NSString *m_nsThumbImgUrl; // @synthesize m_nsThumbImgUrl;
@property(retain, nonatomic) NSString *m_nsLinkId; // @synthesize m_nsLinkId;
@property(retain, nonatomic) NSString *m_nsActivityId; // @synthesize m_nsActivityId;
@property(retain, nonatomic) NSString *m_nsDesignerId; // @synthesize m_nsDesignerId;
@property(retain, nonatomic) NSString *m_nsExternMd5; // @synthesize m_nsExternMd5;
@property(retain, nonatomic) NSString *m_nsExternUrl; // @synthesize m_nsExternUrl;
@property(retain, nonatomic) NSString *m_aesKey; // @synthesize m_aesKey;
@property(retain, nonatomic) NSString *m_encryptUrlString; // @synthesize m_encryptUrlString;
@property(retain, nonatomic) NSString *m_cdnUrlString; // @synthesize m_cdnUrlString;
@property(copy, nonatomic) NSString *m_nsEmoticonBelongToProductID; // @synthesize m_nsEmoticonBelongToProductID;
@property(nonatomic) unsigned int m_uiUploadStatus; // @synthesize m_uiUploadStatus;
@property(nonatomic) __weak CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(nonatomic) unsigned int m_uiGameType; // @synthesize m_uiGameType;
@property(nonatomic) unsigned int m_uiGameContent; // @synthesize m_uiGameContent;
@property(nonatomic) unsigned int m_uiEmoticonType; // @synthesize m_uiEmoticonType;
@property(retain, nonatomic) NSString *m_nsEmoticonMD5; // @synthesize m_nsEmoticonMD5;
- (id)msgReferSummaryAndReplace:(_Bool)arg1;
- (id)GetDisplaySessionContent;
@property(readonly, copy) NSString *description;
- (void)UpdateGameInfo:(id)arg1;
- (id)GetGameStatReportString;
- (void)UpdateContent:(id)arg1;
- (id)GetContent;
- (void)ChangeForDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

