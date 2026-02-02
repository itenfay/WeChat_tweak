//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NewTipsConfigCenter;

@interface NewTipsUtils : NSObject
{
    NewTipsConfigCenter *_configsCenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NewTipsConfigCenter *configsCenter; // @synthesize configsCenter=_configsCenter;
- (_Bool)canReceiveXmlWithTipsInfo:(id)arg1;
- (id)generateTipsInfoWithXml:(id)arg1;
- (id)LoadNewTipsBusinessInfos;
- (id)getAllConfigs;
- (id)getTipsConfigWithTipsId:(unsigned int)arg1;
- (void)SaveNewTipsBusinessInfos:(id)arg1;
- (id)getXLabNewTipsConfig;
- (id)GetPathOfNewTipsBusinessInfos;
- (_Bool)isLanguageValidate:(id)arg1;
- (_Bool)isRegionValidate:(id)arg1;
- (_Bool)isTipsInfoValidate:(id)arg1;
- (_Bool)isTimeValidate:(id)arg1;
- (_Bool)shouldShowTipsInfo:(id)arg1;
- (_Bool)isBlank:(id)arg1;
- (id)GetRootPathOfNewTips;
- (id)init;

@end

