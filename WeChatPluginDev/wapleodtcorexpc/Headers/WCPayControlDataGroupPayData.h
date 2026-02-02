//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AALaunchByPersonRes, AAOperationRes, AAPayRes, AAQueryDetailRes, CContact, NSArray, NSMutableArray, NSMutableDictionary, NSString, QueryPfInfoRes, UIImage, WCPayGPSolitaireData;

@interface WCPayControlDataGroupPayData : NSObject
{
    _Bool _bIsImportFromSolitaire;
    int _moneyConfirmMsgSeq;
    CContact *_chatroomContact;
    NSArray *_launchSelectedContacts;
    NSArray *_launchIgnoreContacts;
    unsigned long long _selectMemberSource;
    NSString *_orderBillNum;
    unsigned long long _fromScene;
    unsigned long long _launchScene;
    NSString *_outTradeNum;
    NSString *_launcherUsername;
    NSString *_payerUsername;
    long long _presetAmount;
    NSString *_presetTheme;
    unsigned long long _presetLaunchType;
    AAOperationRes *_groupPaySvrConfigData;
    AALaunchByPersonRes *_activityAAResponse;
    AAQueryDetailRes *_aaOrderDetailResponse;
    AAPayRes *_orderPrepayResponse;
    NSString *_pfAppId;
    NSString *_pfOrderNo;
    QueryPfInfoRes *_pfQueryInfoResponse;
    NSMutableArray *_svrRetPfSelectedContacts;
    NSMutableDictionary *_svrRetPfUserPayAmountDict;
    NSString *_pfLaunchImageUrl;
    NSString *_pfLaunchThumbUrl;
    UIImage *_pfSelectedRemarkImage;
    NSString *_pfLaunchImageMd5;
    NSString *_orderPayerRemark;
    WCPayGPSolitaireData *_solitaireData;
    NSString *_payerSolitaireContent;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsImportFromSolitaire; // @synthesize bIsImportFromSolitaire=_bIsImportFromSolitaire;
@property(retain, nonatomic) NSString *payerSolitaireContent; // @synthesize payerSolitaireContent=_payerSolitaireContent;
@property(retain, nonatomic) WCPayGPSolitaireData *solitaireData; // @synthesize solitaireData=_solitaireData;
@property(retain, nonatomic) NSString *orderPayerRemark; // @synthesize orderPayerRemark=_orderPayerRemark;
@property(retain, nonatomic) NSString *pfLaunchImageMd5; // @synthesize pfLaunchImageMd5=_pfLaunchImageMd5;
@property(retain, nonatomic) UIImage *pfSelectedRemarkImage; // @synthesize pfSelectedRemarkImage=_pfSelectedRemarkImage;
@property(retain, nonatomic) NSString *pfLaunchThumbUrl; // @synthesize pfLaunchThumbUrl=_pfLaunchThumbUrl;
@property(retain, nonatomic) NSString *pfLaunchImageUrl; // @synthesize pfLaunchImageUrl=_pfLaunchImageUrl;
@property(retain, nonatomic) NSMutableDictionary *svrRetPfUserPayAmountDict; // @synthesize svrRetPfUserPayAmountDict=_svrRetPfUserPayAmountDict;
@property(retain, nonatomic) NSMutableArray *svrRetPfSelectedContacts; // @synthesize svrRetPfSelectedContacts=_svrRetPfSelectedContacts;
@property(retain, nonatomic) QueryPfInfoRes *pfQueryInfoResponse; // @synthesize pfQueryInfoResponse=_pfQueryInfoResponse;
@property(retain, nonatomic) NSString *pfOrderNo; // @synthesize pfOrderNo=_pfOrderNo;
@property(retain, nonatomic) NSString *pfAppId; // @synthesize pfAppId=_pfAppId;
@property(retain, nonatomic) AAPayRes *orderPrepayResponse; // @synthesize orderPrepayResponse=_orderPrepayResponse;
@property(retain, nonatomic) AAQueryDetailRes *aaOrderDetailResponse; // @synthesize aaOrderDetailResponse=_aaOrderDetailResponse;
@property(retain, nonatomic) AALaunchByPersonRes *activityAAResponse; // @synthesize activityAAResponse=_activityAAResponse;
@property(retain, nonatomic) AAOperationRes *groupPaySvrConfigData; // @synthesize groupPaySvrConfigData=_groupPaySvrConfigData;
@property(nonatomic) unsigned long long presetLaunchType; // @synthesize presetLaunchType=_presetLaunchType;
@property(retain, nonatomic) NSString *presetTheme; // @synthesize presetTheme=_presetTheme;
@property(nonatomic) long long presetAmount; // @synthesize presetAmount=_presetAmount;
@property(nonatomic) int moneyConfirmMsgSeq; // @synthesize moneyConfirmMsgSeq=_moneyConfirmMsgSeq;
@property(retain, nonatomic) NSString *payerUsername; // @synthesize payerUsername=_payerUsername;
@property(retain, nonatomic) NSString *launcherUsername; // @synthesize launcherUsername=_launcherUsername;
@property(retain, nonatomic) NSString *outTradeNum; // @synthesize outTradeNum=_outTradeNum;
@property(nonatomic) unsigned long long launchScene; // @synthesize launchScene=_launchScene;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSString *orderBillNum; // @synthesize orderBillNum=_orderBillNum;
@property(nonatomic) unsigned long long selectMemberSource; // @synthesize selectMemberSource=_selectMemberSource;
@property(retain, nonatomic) NSArray *launchIgnoreContacts; // @synthesize launchIgnoreContacts=_launchIgnoreContacts;
@property(retain, nonatomic) NSArray *launchSelectedContacts; // @synthesize launchSelectedContacts=_launchSelectedContacts;
@property(retain, nonatomic) CContact *chatroomContact; // @synthesize chatroomContact=_chatroomContact;

@end

