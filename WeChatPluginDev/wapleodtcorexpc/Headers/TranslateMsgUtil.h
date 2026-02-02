//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TranslateMsgUtil
{
}

+ (_Bool)isSameLanguage:(id)arg1 filterChar:(_Bool)arg2 ignoreHansT:(_Bool)arg3 lang:(id)arg4;
+ (_Bool)isSameLanguage:(id)arg1 lang:(id)arg2;
+ (_Bool)isSameLanguage:(id)arg1 filterChar:(_Bool)arg2;
+ (_Bool)isSameLanguage:(id)arg1;
+ (id)languageForContent:(id)arg1;
+ (_Bool)canShowTranslateMenuItemForText:(id)arg1;
+ (_Bool)canShowTranslateMenuItem:(id)arg1;
+ (_Bool)couldTranslateMsg:(id)arg1;
+ (_Bool)isTranslateMsgOff;
+ (id)getUserTranslateRootDir;

@end

