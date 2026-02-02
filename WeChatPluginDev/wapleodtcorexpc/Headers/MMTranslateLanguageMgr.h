//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMTranslateLanguageMgr
{
}

- (id)setTranslateLanguage:(id)arg1 followSystemLanguage:(_Bool)arg2;
- (id)getSupportedTranslateLanguageDisplayNames;
- (id)getSupportedTranslateLanguages;
- (id)currentTranslateLanguageDisplayName;
- (id)currentTranslateLanguage;
- (_Bool)isFollowSystemLanguage;
- (id)setFollowSystemLanguage;
- (id)setTranslateLanguage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

