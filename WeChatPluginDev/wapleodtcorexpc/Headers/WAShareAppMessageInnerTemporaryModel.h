//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, WAShareAppMessageCommonParamsModel, WAShareAppMessageContextModel, WaReportMessageVideoActionItem;
@protocol IWAWebViewPluginDelegate;

@interface WAShareAppMessageInnerTemporaryModel : NSObject
{
    _Bool _bSpecificContact;
    _Bool _bNoCapture;
    _Bool _shouldUseDynamicShare;
    _Bool _forNativeApp;
    _Bool _waitingShare;
    unsigned long long _shareCallType;
    id <IWAWebViewPluginDelegate> _resultDelegate;
    NSArray *_arrSpecificSendToContacts;
    id _userInfo;
    WAShareAppMessageContextModel *_shareContextModel;
    WaReportMessageVideoActionItem *_waMessageVideoReport;
    unsigned long long _shareImageType;
    WAShareAppMessageCommonParamsModel *_shareCommonParamsModel;
    NSMutableDictionary *_scrollOffset;
}

+ (id)model;
- (void).cxx_destruct;
@property(nonatomic) _Bool waitingShare; // @synthesize waitingShare=_waitingShare;
@property(nonatomic) _Bool forNativeApp; // @synthesize forNativeApp=_forNativeApp;
@property(retain, nonatomic) NSMutableDictionary *scrollOffset; // @synthesize scrollOffset=_scrollOffset;
@property(retain, nonatomic) WAShareAppMessageCommonParamsModel *shareCommonParamsModel; // @synthesize shareCommonParamsModel=_shareCommonParamsModel;
@property(nonatomic) unsigned long long shareImageType; // @synthesize shareImageType=_shareImageType;
@property(retain, nonatomic) WaReportMessageVideoActionItem *waMessageVideoReport; // @synthesize waMessageVideoReport=_waMessageVideoReport;
@property(retain, nonatomic) WAShareAppMessageContextModel *shareContextModel; // @synthesize shareContextModel=_shareContextModel;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool shouldUseDynamicShare; // @synthesize shouldUseDynamicShare=_shouldUseDynamicShare;
@property(retain, nonatomic) NSArray *arrSpecificSendToContacts; // @synthesize arrSpecificSendToContacts=_arrSpecificSendToContacts;
@property(nonatomic) _Bool bNoCapture; // @synthesize bNoCapture=_bNoCapture;
@property(nonatomic) _Bool bSpecificContact; // @synthesize bSpecificContact=_bSpecificContact;
@property(nonatomic) __weak id <IWAWebViewPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
@property(nonatomic) unsigned long long shareCallType; // @synthesize shareCallType=_shareCallType;

@end

