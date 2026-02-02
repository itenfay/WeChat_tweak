//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MPPageTemplateInfoContainer : NSObject
{
    unsigned int _checkInterval;
    NSMutableDictionary *_templateInfoDic;
}

+ (_Bool)saveContainer:(id)arg1 toPath:(id)arg2;
+ (id)loadContainerFromPath:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_checkInterval;
+ (void)PBArrayAdd_templateInfoDic;
- (void).cxx_destruct;
@property(nonatomic) unsigned int checkInterval; // @synthesize checkInterval=_checkInterval;
@property(retain, nonatomic) NSMutableDictionary *templateInfoDic; // @synthesize templateInfoDic=_templateInfoDic;
- (void)setTemplateInfo:(id)arg1;
- (id)getTemplateInfoWithType:(unsigned int)arg1;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

