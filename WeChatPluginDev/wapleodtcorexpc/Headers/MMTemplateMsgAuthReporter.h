//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMTemplateMsgAuthReporter
{
}

+ (void)reportGoToSettingPageInBrandChatPage:(id)arg1 msgContentByUrlEncoded:(id)arg2;
+ (void)reportToastInBrandChatPage:(id)arg1 msgContentByUrlEncoded:(id)arg2;
+ (void)reportAlertViewInBrandChatPage:(id)arg1 msgContentByUrlEncoded:(id)arg2;
+ (void)reportPopUpInBrandChatPage:(id)arg1 msgContentByUrlEncoded:(id)arg2;
+ (id)genKVUidInBrandChatPage:(id)arg1;
+ (unsigned int)getContactTypeForUserName:(id)arg1;
+ (void)reportAlertViewInTemplateMsgBottom:(id)arg1 forUser:(id)arg2;
+ (void)reportScopeCacheModifyInSettingPage:(id)arg1;

@end

