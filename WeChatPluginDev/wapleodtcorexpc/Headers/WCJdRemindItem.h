//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCJdRemindItem
{
    unsigned long long ui64SvrMsgId;
    unsigned int uiBizType;
    NSString *nsActivityId;
    unsigned int uiExpireTime;
    unsigned int uiStartTime;
    unsigned int uiUrlExpireTime;
    unsigned int uiUrlStartTime;
    unsigned int uiTitleExpireTime;
    unsigned int uiTitleStartTime;
    _Bool bFindNeedShowRedDot;
    _Bool bCellShowRedDot;
    NSString *nsCellTitle;
    NSString *nsTitle;
    NSString *nsIcon;
    NSString *nsPushContent;
    NSString *nsJumpUrl;
    NSString *nsAlertViewWording;
    NSString *nsConfirmWording;
    NSString *nsCancelWording;
    _Bool bHasRead;
    NSString *nsJumpWeapp;
    NSString *nsJumpWeappPath;
    long long nsJumpWeappVersion;
}

+ (void)initialize;
+ (void)PBArrayAdd_nsJumpWeappVersion;
+ (void)PBArrayAdd_nsJumpWeappPath;
+ (void)PBArrayAdd_nsJumpWeapp;
+ (void)PBArrayAdd_uiTitleExpireTime;
+ (void)PBArrayAdd_uiTitleStartTime;
+ (void)PBArrayAdd_nsTitle;
+ (void)PBArrayAdd_nsIcon;
+ (void)PBArrayAdd_uiUrlExpireTime;
+ (void)PBArrayAdd_uiUrlStartTime;
+ (void)PBArrayAdd_uiStartTime;
+ (void)PBArrayAdd_bHasRead;
+ (void)PBArrayAdd_nsCancelWording;
+ (void)PBArrayAdd_nsConfirmWording;
+ (void)PBArrayAdd_nsAlertViewWording;
+ (void)PBArrayAdd_nsJumpUrl;
+ (void)PBArrayAdd_nsPushContent;
+ (void)PBArrayAdd_nsCellTitle;
+ (void)PBArrayAdd_bCellShowRedDot;
+ (void)PBArrayAdd_bFindNeedShowRedDot;
+ (void)PBArrayAdd_uiExpireTime;
+ (void)PBArrayAdd_nsActivityId;
+ (void)PBArrayAdd_uiBizType;
+ (void)PBArrayAdd_ui64SvrMsgId;
- (void).cxx_destruct;
@property(nonatomic) long long nsJumpWeappVersion; // @synthesize nsJumpWeappVersion;
@property(retain, nonatomic) NSString *nsJumpWeappPath; // @synthesize nsJumpWeappPath;
@property(retain, nonatomic) NSString *nsJumpWeapp; // @synthesize nsJumpWeapp;
@property(nonatomic) unsigned int uiTitleExpireTime; // @synthesize uiTitleExpireTime;
@property(nonatomic) unsigned int uiTitleStartTime; // @synthesize uiTitleStartTime;
@property(retain, nonatomic) NSString *nsTitle; // @synthesize nsTitle;
@property(retain, nonatomic) NSString *nsIcon; // @synthesize nsIcon;
@property(nonatomic) unsigned int uiUrlExpireTime; // @synthesize uiUrlExpireTime;
@property(nonatomic) unsigned int uiUrlStartTime; // @synthesize uiUrlStartTime;
@property(nonatomic) unsigned int uiStartTime; // @synthesize uiStartTime;
@property(nonatomic) _Bool bHasRead; // @synthesize bHasRead;
@property(retain, nonatomic) NSString *nsCancelWording; // @synthesize nsCancelWording;
@property(retain, nonatomic) NSString *nsConfirmWording; // @synthesize nsConfirmWording;
@property(retain, nonatomic) NSString *nsAlertViewWording; // @synthesize nsAlertViewWording;
@property(retain, nonatomic) NSString *nsJumpUrl; // @synthesize nsJumpUrl;
@property(retain, nonatomic) NSString *nsPushContent; // @synthesize nsPushContent;
@property(retain, nonatomic) NSString *nsCellTitle; // @synthesize nsCellTitle;
@property(nonatomic) _Bool bCellShowRedDot; // @synthesize bCellShowRedDot;
@property(nonatomic) _Bool bFindNeedShowRedDot; // @synthesize bFindNeedShowRedDot;
@property(nonatomic) unsigned int uiExpireTime; // @synthesize uiExpireTime;
@property(retain, nonatomic) NSString *nsActivityId; // @synthesize nsActivityId;
@property(nonatomic) unsigned int uiBizType; // @synthesize uiBizType;
@property(nonatomic) unsigned long long ui64SvrMsgId; // @synthesize ui64SvrMsgId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

