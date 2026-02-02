//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSData, NSString, SubscribeMsgShowInfo;

@interface WASubscriptionMessagePageSheetViewModel
{
    _Bool _keepOption;
    _Bool _keepOptionHide;
    int _style;
    int _templateType;
    unsigned int _appType;
    unsigned long long _headerStyleOptions;
    unsigned long long _footerStyleOptions;
    unsigned long long _scene;
    long long _errorCode;
    NSString *_errorMessage;
    NSString *_iconUrl;
    NSString *_appName;
    NSString *_applyDescription;
    NSString *_mainDescription;
    NSString *_subDescription;
    NSString *_confirmWording;
    NSString *_cancelWording;
    NSString *_declineWording;
    NSString *_keepOptionWording;
    NSString *_detailTitle;
    NSArray *_messageItems;
    NSString *_templateIdListStr;
    NSString *_templateOriginStatusListStr;
    NSString *_username;
    NSString *_appid;
    NSData *_buffer;
    unsigned long long _operationType;
    SubscribeMsgShowInfo *_showInfo;
    NSString *_kvUid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *kvUid; // @synthesize kvUid=_kvUid;
@property(retain, nonatomic) SubscribeMsgShowInfo *showInfo; // @synthesize showInfo=_showInfo;
@property(nonatomic) unsigned long long operationType; // @synthesize operationType=_operationType;
@property(nonatomic) _Bool keepOptionHide; // @synthesize keepOptionHide=_keepOptionHide;
@property(nonatomic) _Bool keepOption; // @synthesize keepOption=_keepOption;
@property(copy, nonatomic) NSData *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) unsigned int appType; // @synthesize appType=_appType;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *templateOriginStatusListStr; // @synthesize templateOriginStatusListStr=_templateOriginStatusListStr;
@property(copy, nonatomic) NSString *templateIdListStr; // @synthesize templateIdListStr=_templateIdListStr;
@property(copy, nonatomic) NSArray *messageItems; // @synthesize messageItems=_messageItems;
@property(copy, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
@property(copy, nonatomic) NSString *keepOptionWording; // @synthesize keepOptionWording=_keepOptionWording;
@property(copy, nonatomic) NSString *declineWording; // @synthesize declineWording=_declineWording;
@property(copy, nonatomic) NSString *cancelWording; // @synthesize cancelWording=_cancelWording;
@property(copy, nonatomic) NSString *confirmWording; // @synthesize confirmWording=_confirmWording;
@property(copy, nonatomic) NSString *subDescription; // @synthesize subDescription=_subDescription;
@property(copy, nonatomic) NSString *mainDescription; // @synthesize mainDescription=_mainDescription;
@property(copy, nonatomic) NSString *applyDescription; // @synthesize applyDescription=_applyDescription;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) int templateType; // @synthesize templateType=_templateType;
@property(nonatomic) unsigned long long footerStyleOptions; // @synthesize footerStyleOptions=_footerStyleOptions;
@property(nonatomic) unsigned long long headerStyleOptions; // @synthesize headerStyleOptions=_headerStyleOptions;
@property(nonatomic) int style; // @synthesize style=_style;
- (id)generateOriginStatusListStr;
- (id)generateTemplateIdListStr;
- (id)toUIData;
- (void)toInfoButtonClickReportStringResultBlock:(CDUnknownBlockType)arg1;
- (id)toMsgItemsReportString;
- (void)checkDataValidWithResultBlock:(CDUnknownBlockType)arg1;
- (_Bool)needsToShowPageSheet;
- (id)generateMessageItemsWith:(id)arg1;
- (unsigned long long)generateFooterStyleOptionsWith:(id)arg1 scene:(unsigned long long)arg2 templateType:(int)arg3;
- (unsigned long long)generateHeaderStyleOptionsWith:(id)arg1 style:(int)arg2 templateType:(int)arg3;
- (void)fillWithRes:(id)arg1 scene:(unsigned long long)arg2 username:(id)arg3 appid:(id)arg4 appType:(unsigned int)arg5;
- (id)initWith:(id)arg1 scene:(unsigned long long)arg2 username:(id)arg3 appid:(id)arg4 appType:(unsigned int)arg5;
- (id)init;

@end

