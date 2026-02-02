//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdAppointmentInfo : NSObject
{
    _Bool _requestPhoneNumber;
    unsigned int _expiredTime;
    unsigned long long _appointmentId;
    NSString *_btnTitleAfterAppointment;
    NSString *_nickname;
    NSString *_headImageUrl;
    NSString *_title;
    NSString *_content;
    NSString *_extraContent;
    NSString *_submitBtnTitle;
    NSString *_cancelBtnTitle;
    NSString *_submitSucToast;
    NSString *_submitFailedToast;
    NSString *_cancelSucToast;
    NSString *_cancelFailedToast;
    NSString *_expiredBtnTitle;
    NSString *_phoneNumberRequestIcon;
    NSString *_phoneNumberRequestName;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *phoneNumberRequestName; // @synthesize phoneNumberRequestName=_phoneNumberRequestName;
@property(retain, nonatomic) NSString *phoneNumberRequestIcon; // @synthesize phoneNumberRequestIcon=_phoneNumberRequestIcon;
@property(nonatomic) _Bool requestPhoneNumber; // @synthesize requestPhoneNumber=_requestPhoneNumber;
@property(retain, nonatomic) NSString *expiredBtnTitle; // @synthesize expiredBtnTitle=_expiredBtnTitle;
@property(nonatomic) unsigned int expiredTime; // @synthesize expiredTime=_expiredTime;
@property(retain, nonatomic) NSString *cancelFailedToast; // @synthesize cancelFailedToast=_cancelFailedToast;
@property(retain, nonatomic) NSString *cancelSucToast; // @synthesize cancelSucToast=_cancelSucToast;
@property(retain, nonatomic) NSString *submitFailedToast; // @synthesize submitFailedToast=_submitFailedToast;
@property(retain, nonatomic) NSString *submitSucToast; // @synthesize submitSucToast=_submitSucToast;
@property(retain, nonatomic) NSString *cancelBtnTitle; // @synthesize cancelBtnTitle=_cancelBtnTitle;
@property(retain, nonatomic) NSString *submitBtnTitle; // @synthesize submitBtnTitle=_submitBtnTitle;
@property(retain, nonatomic) NSString *extraContent; // @synthesize extraContent=_extraContent;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *btnTitleAfterAppointment; // @synthesize btnTitleAfterAppointment=_btnTitleAfterAppointment;
@property(nonatomic) unsigned long long appointmentId; // @synthesize appointmentId=_appointmentId;
- (_Bool)needRequestPhoneNumber;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

