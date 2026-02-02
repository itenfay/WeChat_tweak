//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ExposureInfo, NSString;

@interface WCPayOrderDetailActivityInfo : NSObject
{
    NSString *m_nsIconUrl;
    NSString *m_nsActivityTitle;
    NSString *m_nsBtnTitle;
    NSString *m_nsActivityUrl;
    NSString *m_nsActivitySlogan;
    unsigned int m_uiStyle;
    unsigned long long m_uiActivityId;
    unsigned long long m_uiActivityType;
    NSString *m_nsSmallTitle;
    unsigned long long m_uiAwardId;
    unsigned int m_uiSendRecordId;
    unsigned int m_uiUserRecordId;
    NSString *m_activityTinyAppUsername;
    NSString *m_activityTinyAppPath;
    unsigned long long m_activityMchId;
    unsigned int _m_activityTinyAppVersion;
    NSString *_m_getAwardParams;
    NSString *_m_queryAwardStatusParams;
    ExposureInfo *_m_exposureInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ExposureInfo *m_exposureInfo; // @synthesize m_exposureInfo=_m_exposureInfo;
@property(retain, nonatomic) NSString *m_queryAwardStatusParams; // @synthesize m_queryAwardStatusParams=_m_queryAwardStatusParams;
@property(retain, nonatomic) NSString *m_getAwardParams; // @synthesize m_getAwardParams=_m_getAwardParams;
@property(nonatomic) unsigned int m_activityTinyAppVersion; // @synthesize m_activityTinyAppVersion=_m_activityTinyAppVersion;
@property(nonatomic) unsigned long long m_activityMchId; // @synthesize m_activityMchId;
@property(retain, nonatomic) NSString *m_activityTinyAppPath; // @synthesize m_activityTinyAppPath;
@property(retain, nonatomic) NSString *m_activityTinyAppUsername; // @synthesize m_activityTinyAppUsername;
@property(nonatomic) unsigned int m_uiUserRecordId; // @synthesize m_uiUserRecordId;
@property(nonatomic) unsigned int m_uiSendRecordId; // @synthesize m_uiSendRecordId;
@property(nonatomic) unsigned long long m_uiAwardId; // @synthesize m_uiAwardId;
@property(retain, nonatomic) NSString *m_nsSmallTitle; // @synthesize m_nsSmallTitle;
@property(nonatomic) unsigned long long m_uiActivityType; // @synthesize m_uiActivityType;
@property(nonatomic) unsigned long long m_uiActivityId; // @synthesize m_uiActivityId;
@property(nonatomic) unsigned int m_uiStyle; // @synthesize m_uiStyle;
@property(retain, nonatomic) NSString *m_nsActivitySlogan; // @synthesize m_nsActivitySlogan;
@property(retain, nonatomic) NSString *m_nsIconUrl; // @synthesize m_nsIconUrl;
@property(retain, nonatomic) NSString *m_nsBtnTitle; // @synthesize m_nsBtnTitle;
@property(retain, nonatomic) NSString *m_nsActivityUrl; // @synthesize m_nsActivityUrl;
@property(retain, nonatomic) NSString *m_nsActivityTitle; // @synthesize m_nsActivityTitle;

@end

