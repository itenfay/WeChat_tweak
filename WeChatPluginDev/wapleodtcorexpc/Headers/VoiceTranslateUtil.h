//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VoiceTranslateUtil : NSObject
{
}

+ (id)getVoiceIDFromMsg:(id)arg1;
- (id)getTranslateString:(id)arg1;
- (_Bool)isLocalTransResultExist:(id)arg1;
- (id)pathForTranslateResult:(id)arg1;
- (id)getUserTranslateRootDir;
- (id)getSessionInfoPathWithUserName:(id)arg1;
- (id)getTransInfoIDFromMsg:(id)arg1;

@end

