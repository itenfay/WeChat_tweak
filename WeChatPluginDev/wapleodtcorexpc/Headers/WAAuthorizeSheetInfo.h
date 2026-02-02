//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WAAuthorizePageSheetReportItem, WAAuthorizeSheetPrivacyInfo, WAAuthorizeSheetPrivacyProtectInfo;

@interface WAAuthorizeSheetInfo : NSObject
{
    _Bool _showPrivacyInfo;
    NSString *_iconUrl;
    NSString *_appName;
    NSString *_applyDescription;
    WAAuthorizeSheetPrivacyInfo *_privacyInfo;
    NSString *_authTitle;
    NSString *_authSubTitle;
    NSString *_acceptWording;
    NSString *_rejectWording;
    WAAuthorizeSheetPrivacyProtectInfo *_privacyProtectInfo;
    WAAuthorizePageSheetReportItem *_reportItem;
}

+ (id)createWithUserIdPageSheetInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WAAuthorizePageSheetReportItem *reportItem; // @synthesize reportItem=_reportItem;
@property(retain, nonatomic) WAAuthorizeSheetPrivacyProtectInfo *privacyProtectInfo; // @synthesize privacyProtectInfo=_privacyProtectInfo;
@property(retain, nonatomic) NSString *rejectWording; // @synthesize rejectWording=_rejectWording;
@property(retain, nonatomic) NSString *acceptWording; // @synthesize acceptWording=_acceptWording;
@property(retain, nonatomic) NSString *authSubTitle; // @synthesize authSubTitle=_authSubTitle;
@property(retain, nonatomic) NSString *authTitle; // @synthesize authTitle=_authTitle;
@property(nonatomic) _Bool showPrivacyInfo; // @synthesize showPrivacyInfo=_showPrivacyInfo;
@property(retain, nonatomic) WAAuthorizeSheetPrivacyInfo *privacyInfo; // @synthesize privacyInfo=_privacyInfo;
@property(retain, nonatomic) NSString *applyDescription; // @synthesize applyDescription=_applyDescription;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;

@end

