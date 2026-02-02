//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BrandTemplateMsgAuthSettingPageModel
{
    unsigned int _opType;
    unsigned int _totalSwitch;
    NSString *_userName;
    unsigned long long _templateSize;
    NSString *_templateIdListStr;
    NSString *_templateOriginStatusListStr;
    NSString *_templateTitleListStr;
    NSString *_templateTypeListStr;
    NSString *_templateSelectStatusListStr;
    unsigned long long _enterScene;
    unsigned long long _enterTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long enterTimestamp; // @synthesize enterTimestamp=_enterTimestamp;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) NSString *templateSelectStatusListStr; // @synthesize templateSelectStatusListStr=_templateSelectStatusListStr;
@property(retain, nonatomic) NSString *templateTypeListStr; // @synthesize templateTypeListStr=_templateTypeListStr;
@property(retain, nonatomic) NSString *templateTitleListStr; // @synthesize templateTitleListStr=_templateTitleListStr;
@property(retain, nonatomic) NSString *templateOriginStatusListStr; // @synthesize templateOriginStatusListStr=_templateOriginStatusListStr;
@property(retain, nonatomic) NSString *templateIdListStr; // @synthesize templateIdListStr=_templateIdListStr;
@property(nonatomic) unsigned long long templateSize; // @synthesize templateSize=_templateSize;
@property(nonatomic) unsigned int totalSwitch; // @synthesize totalSwitch=_totalSwitch;
@property(nonatomic) unsigned int opType; // @synthesize opType=_opType;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)generateTemplateStatusListStr:(id)arg1;
- (id)generateTemplateTypeListStr:(id)arg1;
- (id)generateTemplateTitleListStr:(id)arg1;
- (id)generateTemplateIdListStr:(id)arg1;
- (void)updateTotolSwitchWithScopeCache:(id)arg1;
- (void)updateSelectInfoWithScopeCache:(id)arg1;
- (void)updateOriginInfoWithScopeCache:(id)arg1;

@end

