//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, CEmoticonWrap, CMessageWrap, CoverInfoDetail, GetDefaultRedpacketResponse, GetRedPacketFissionResp, GetShowSourceResp, HbEnvelopSource, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, RedPacketPreviewMessage, RedPacketStoryInfo, UIColor, WCPayRealnameGuideInfo, WCRedEnvelopeQuickSendReportObject, WCRedEnvelopesAtomicInfo, WCRedEnvelopesDetailInfo, WCRedEnvelopesGreetingReportObject, WCRedEnvelopesHistoryInfo, WCRedEnvelopesOperationInfo, WCRedEnvelopesReceivedRedEnvelopesInfo, WCRedEnvelopesSendedRedEnvelopesInfo, WCRedEnvelopesSpringFestivalActivtyEntryInfo;

@interface WCRedEnvelopesControlData : NSObject
{
    NSDictionary *m_dicPrepayRequestOrderInfo;
    NSMutableArray *m_arrSelectedSendRedEnvelopesUserList;
    CMessageWrap *m_oSelectedMessageWrap;
    CContact *m_oSelectContact;
    WCRedEnvelopesDetailInfo *m_oWCRedEnvelopesDetailInfo;
    WCRedEnvelopesHistoryInfo *m_oWCRedEnvelopesHistoryInfo;
    WCRedEnvelopesReceivedRedEnvelopesInfo *m_oSelectedWCRedEnvelopesReceivedRedEnvelopesInfo;
    WCRedEnvelopesSendedRedEnvelopesInfo *m_oSelectedWCRedEnvelopesSendedRedEnvelopesInfo;
    WCRedEnvelopesAtomicInfo *m_oWCRedEnvelopesAtomicInfo;
    WCRedEnvelopesOperationInfo *m_oWCRedEnvelopesOpTail;
    NSString *m_nsWCRedEnvelopesBrandMessageNativeUrl;
    NSString *m_nsSendID;
    NSString *m_nsOpenBundleId;
    NSDictionary *m_dicOpenApiParam;
    NSDictionary *m_structDicRedEnvelopesUserInfo;
    NSDictionary *m_structDicPrepayOrderInfo;
    NSDictionary *m_structDicRedEnvelopesBaseInfo;
    NSMutableDictionary *m_structDicRedEnvelopesCompleteInfo;
    NSDictionary *m_structDicAfterOpenRedEnvelopesInfo;
    WCPayRealnameGuideInfo *realnameGuideInfo;
    NSDictionary *m_structDicEnterpriseRedEnvelopesData;
    _Bool _bHasEmoticonData;
    _Bool _isFirstEntryDetailView;
    _Bool _isForeignHB;
    _Bool _isFirstTimeOpenRedEnvelope;
    unsigned int _h5RecordHBKind;
    unsigned int _currentStoryInfoSubtypeId;
    unsigned int _currentRedEnvelopesDetailScene;
    unsigned int _m_enLiveStreamRedEnvelopesSenderIdentityType;
    NSString *_m_nsReceiveID;
    GetShowSourceResp *_showSourceResp;
    NSArray *_redEnvelopesShowResources;
    NSArray *_redEnvelopesExpiredResources;
    HbEnvelopSource *_currentRedEnvelopeShowResource;
    CoverInfoDetail *_currentCoverInfoDetail;
    RedPacketStoryInfo *_currentStoryInfo;
    GetRedPacketFissionResp *_splitRedPacketFissionResp;
    NSMutableArray *_option_items;
    UIColor *_redSkinColor;
    WCRedEnvelopesGreetingReportObject *_m_greetingHbReportObj;
    CEmoticonWrap *_redEnvDetailEmoticonWrap;
    RedPacketPreviewMessage *_previewMessage;
    CContact *_selectedMemberContact;
    long long _currentLaunchRedEnvMode;
    WCRedEnvelopesSpringFestivalActivtyEntryInfo *_springFestivalEntryInfo;
    NSString *_m_nsLiveStreamRedEnvelopesRequestBuffer;
    NSString *_m_nsLiveStreamId;
    NSString *_m_nsLiveStreamCustomMessage;
    WCRedEnvelopeQuickSendReportObject *_m_quickSendReportObj;
    GetDefaultRedpacketResponse *_defaultSkinResp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GetDefaultRedpacketResponse *defaultSkinResp; // @synthesize defaultSkinResp=_defaultSkinResp;
@property(nonatomic) _Bool isFirstTimeOpenRedEnvelope; // @synthesize isFirstTimeOpenRedEnvelope=_isFirstTimeOpenRedEnvelope;
@property(retain, nonatomic) WCRedEnvelopeQuickSendReportObject *m_quickSendReportObj; // @synthesize m_quickSendReportObj=_m_quickSendReportObj;
@property(nonatomic) unsigned int m_enLiveStreamRedEnvelopesSenderIdentityType; // @synthesize m_enLiveStreamRedEnvelopesSenderIdentityType=_m_enLiveStreamRedEnvelopesSenderIdentityType;
@property(retain, nonatomic) NSString *m_nsLiveStreamCustomMessage; // @synthesize m_nsLiveStreamCustomMessage=_m_nsLiveStreamCustomMessage;
@property(retain, nonatomic) NSString *m_nsLiveStreamId; // @synthesize m_nsLiveStreamId=_m_nsLiveStreamId;
@property(retain, nonatomic) NSString *m_nsLiveStreamRedEnvelopesRequestBuffer; // @synthesize m_nsLiveStreamRedEnvelopesRequestBuffer=_m_nsLiveStreamRedEnvelopesRequestBuffer;
@property(retain, nonatomic) WCRedEnvelopesSpringFestivalActivtyEntryInfo *springFestivalEntryInfo; // @synthesize springFestivalEntryInfo=_springFestivalEntryInfo;
@property(nonatomic) long long currentLaunchRedEnvMode; // @synthesize currentLaunchRedEnvMode=_currentLaunchRedEnvMode;
@property(retain, nonatomic) CContact *selectedMemberContact; // @synthesize selectedMemberContact=_selectedMemberContact;
@property(nonatomic) _Bool isForeignHB; // @synthesize isForeignHB=_isForeignHB;
@property(nonatomic) _Bool isFirstEntryDetailView; // @synthesize isFirstEntryDetailView=_isFirstEntryDetailView;
@property(nonatomic) unsigned int currentRedEnvelopesDetailScene; // @synthesize currentRedEnvelopesDetailScene=_currentRedEnvelopesDetailScene;
@property(retain, nonatomic) RedPacketPreviewMessage *previewMessage; // @synthesize previewMessage=_previewMessage;
@property(retain, nonatomic) CEmoticonWrap *redEnvDetailEmoticonWrap; // @synthesize redEnvDetailEmoticonWrap=_redEnvDetailEmoticonWrap;
@property(nonatomic) _Bool bHasEmoticonData; // @synthesize bHasEmoticonData=_bHasEmoticonData;
@property(retain, nonatomic) WCRedEnvelopesGreetingReportObject *m_greetingHbReportObj; // @synthesize m_greetingHbReportObj=_m_greetingHbReportObj;
@property(retain, nonatomic) UIColor *redSkinColor; // @synthesize redSkinColor=_redSkinColor;
@property(retain, nonatomic) NSMutableArray *option_items; // @synthesize option_items=_option_items;
@property(nonatomic) unsigned int currentStoryInfoSubtypeId; // @synthesize currentStoryInfoSubtypeId=_currentStoryInfoSubtypeId;
@property(retain, nonatomic) GetRedPacketFissionResp *splitRedPacketFissionResp; // @synthesize splitRedPacketFissionResp=_splitRedPacketFissionResp;
@property(retain, nonatomic) RedPacketStoryInfo *currentStoryInfo; // @synthesize currentStoryInfo=_currentStoryInfo;
@property(retain, nonatomic) CoverInfoDetail *currentCoverInfoDetail; // @synthesize currentCoverInfoDetail=_currentCoverInfoDetail;
@property(retain, nonatomic) HbEnvelopSource *currentRedEnvelopeShowResource; // @synthesize currentRedEnvelopeShowResource=_currentRedEnvelopeShowResource;
@property(retain, nonatomic) NSArray *redEnvelopesExpiredResources; // @synthesize redEnvelopesExpiredResources=_redEnvelopesExpiredResources;
@property(retain, nonatomic) NSArray *redEnvelopesShowResources; // @synthesize redEnvelopesShowResources=_redEnvelopesShowResources;
@property(retain, nonatomic) GetShowSourceResp *showSourceResp; // @synthesize showSourceResp=_showSourceResp;
@property(nonatomic) unsigned int h5RecordHBKind; // @synthesize h5RecordHBKind=_h5RecordHBKind;
@property(retain, nonatomic) NSString *m_nsReceiveID; // @synthesize m_nsReceiveID=_m_nsReceiveID;
@property(retain, nonatomic) NSDictionary *m_structDicEnterpriseRedEnvelopesData; // @synthesize m_structDicEnterpriseRedEnvelopesData;
@property(retain, nonatomic) WCPayRealnameGuideInfo *realnameGuideInfo; // @synthesize realnameGuideInfo;
@property(retain, nonatomic) NSDictionary *m_dicOpenApiParam; // @synthesize m_dicOpenApiParam;
@property(retain, nonatomic) NSString *m_nsSendID; // @synthesize m_nsSendID;
@property(retain, nonatomic) NSString *m_nsOpenBundleId; // @synthesize m_nsOpenBundleId;
@property(retain, nonatomic) NSString *m_nsWCRedEnvelopesBrandMessageNativeUrl; // @synthesize m_nsWCRedEnvelopesBrandMessageNativeUrl;
@property(retain, nonatomic) WCRedEnvelopesOperationInfo *m_oWCRedEnvelopesOpTail; // @synthesize m_oWCRedEnvelopesOpTail;
@property(retain, nonatomic) WCRedEnvelopesAtomicInfo *m_oWCRedEnvelopesAtomicInfo; // @synthesize m_oWCRedEnvelopesAtomicInfo;
@property(retain, nonatomic) WCRedEnvelopesSendedRedEnvelopesInfo *m_oSelectedWCRedEnvelopesSendedRedEnvelopesInfo; // @synthesize m_oSelectedWCRedEnvelopesSendedRedEnvelopesInfo;
@property(retain, nonatomic) WCRedEnvelopesReceivedRedEnvelopesInfo *m_oSelectedWCRedEnvelopesReceivedRedEnvelopesInfo; // @synthesize m_oSelectedWCRedEnvelopesReceivedRedEnvelopesInfo;
@property(retain, nonatomic) WCRedEnvelopesHistoryInfo *m_oWCRedEnvelopesHistoryInfo; // @synthesize m_oWCRedEnvelopesHistoryInfo;
@property(retain, nonatomic) WCRedEnvelopesDetailInfo *m_oWCRedEnvelopesDetailInfo; // @synthesize m_oWCRedEnvelopesDetailInfo;
@property(retain, nonatomic) NSMutableDictionary *m_structDicRedEnvelopesCompleteInfo; // @synthesize m_structDicRedEnvelopesCompleteInfo;
@property(retain, nonatomic) NSDictionary *m_structDicRedEnvelopesBaseInfo; // @synthesize m_structDicRedEnvelopesBaseInfo;
@property(retain, nonatomic) NSDictionary *m_structDicAfterOpenRedEnvelopesInfo; // @synthesize m_structDicAfterOpenRedEnvelopesInfo;
@property(retain, nonatomic) CMessageWrap *m_oSelectedMessageWrap; // @synthesize m_oSelectedMessageWrap;
@property(retain, nonatomic) NSDictionary *m_structDicRedEnvelopesUserInfo; // @synthesize m_structDicRedEnvelopesUserInfo;
@property(retain, nonatomic) NSDictionary *m_structDicPrepayOrderInfo; // @synthesize m_structDicPrepayOrderInfo;
@property(retain, nonatomic) NSMutableArray *m_arrSelectedSendRedEnvelopesUserList; // @synthesize m_arrSelectedSendRedEnvelopesUserList;
@property(retain, nonatomic) CContact *m_oSelectContact; // @synthesize m_oSelectContact;
@property(retain, nonatomic) NSDictionary *m_dicPrepayRequestOrderInfo; // @synthesize m_dicPrepayRequestOrderInfo;

@end

