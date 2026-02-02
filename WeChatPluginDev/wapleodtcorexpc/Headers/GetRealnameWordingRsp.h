//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, JumpRemind, NSMutableArray, NSString, SpecialFindPwdInfo;

@interface GetRealnameWordingRsp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bindCardSubTitle; // @dynamic bindCardSubTitle;
@property(retain, nonatomic) NSString *bindCardTitle; // @dynamic bindCardTitle;
@property(retain, nonatomic) NSString *bindCardVerifyAlertViewContent; // @dynamic bindCardVerifyAlertViewContent;
@property(retain, nonatomic) NSString *bindCardVerifyAlertViewRightButtonText; // @dynamic bindCardVerifyAlertViewRightButtonText;
@property(retain, nonatomic) NSString *bindCardVerifySubtitle; // @dynamic bindCardVerifySubtitle;
@property(retain, nonatomic) NSString *bindCardVerifyTitle; // @dynamic bindCardVerifyTitle;
@property(retain, nonatomic) NSString *bindIdSubTitle; // @dynamic bindIdSubTitle;
@property(retain, nonatomic) NSString *bindIdTitle; // @dynamic bindIdTitle;
@property(nonatomic) int cacheTime; // @dynamic cacheTime;
@property(retain, nonatomic) NSString *capitalSecurityWording; // @dynamic capitalSecurityWording;
@property(retain, nonatomic) NSString *extralWording; // @dynamic extralWording;
@property(retain, nonatomic) NSMutableArray *headerTitles; // @dynamic headerTitles;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(nonatomic) _Bool isShowBindCard; // @dynamic isShowBindCard;
@property(nonatomic) _Bool isShowBindCardVerify; // @dynamic isShowBindCardVerify;
@property(nonatomic) _Bool isShowBindCardVerifyAlertView; // @dynamic isShowBindCardVerifyAlertView;
@property(nonatomic) _Bool isShowBindId; // @dynamic isShowBindId;
@property(nonatomic) _Bool isShowBindcardPage; // @dynamic isShowBindcardPage;
@property(nonatomic) _Bool isShowCapitalSecurity; // @dynamic isShowCapitalSecurity;
@property(nonatomic) _Bool isVerifySmsWithoutBandCard; // @dynamic isVerifySmsWithoutBandCard;
@property(nonatomic) _Bool isnewrouter; // @dynamic isnewrouter;
@property(retain, nonatomic) JumpRemind *jumpRemindInfo; // @dynamic jumpRemindInfo;
@property(nonatomic) _Bool needAgreeDuty; // @dynamic needAgreeDuty;
@property(nonatomic) _Bool questionAnswerSwitch; // @dynamic questionAnswerSwitch;
@property(retain, nonatomic) NSString *questionAnswerUrl; // @dynamic questionAnswerUrl;
@property(retain, nonatomic) NSString *realnameWordDesc; // @dynamic realnameWordDesc;
@property(retain, nonatomic) NSString *realnameWordTitle; // @dynamic realnameWordTitle;
@property(nonatomic) int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSMutableArray *session; // @dynamic session;
@property(retain, nonatomic) SpecialFindPwdInfo *specialFindPwdInfo; // @dynamic specialFindPwdInfo;

@end

