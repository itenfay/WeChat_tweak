//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAAuthorizePageSheetReportItem : NSObject
{
    unsigned int _isShowUserPrivacyUserAgreementView;
    unsigned int _isUserPrivacyUserAgreementChecked;
    unsigned int _triggeredUserUserAgreementAlert;
    unsigned int _userAction;
    NSString *_scope;
}

@property(nonatomic) unsigned int userAction; // @synthesize userAction=_userAction;
@property(nonatomic) unsigned int triggeredUserUserAgreementAlert; // @synthesize triggeredUserUserAgreementAlert=_triggeredUserUserAgreementAlert;
@property(nonatomic) unsigned int isUserPrivacyUserAgreementChecked; // @synthesize isUserPrivacyUserAgreementChecked=_isUserPrivacyUserAgreementChecked;
@property(nonatomic) unsigned int isShowUserPrivacyUserAgreementView; // @synthesize isShowUserPrivacyUserAgreementView=_isShowUserPrivacyUserAgreementView;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
- (id)reportString;
- (int)reportID;
- (id)initWithScope:(id)arg1;

@end

