//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface UpdateWechatRedDotConfig : NSObject
{
    unsigned int _uiHasShowReddotlevel;
    unsigned int _uiClientVersion;
    unsigned int _uiReddotlevel;
    unsigned int _uiExpireTime;
    NSString *_nsNewXml;
    NSString *_nsWording;
    NSString *_nsUrl;
}

+ (id)getUpdateWechatRedDotConfig;
+ (void)saveUpdateWechatRedDotCofig:(id)arg1;
+ (id)loadUpdateWechatRedDotConfig;
+ (id)updateWechatRedDotPath;
+ (void)receiveUpdateWechatRedDot:(id)arg1;
+ (void)reportConfig:(id)arg1 Opcode:(unsigned int)arg2 OldConfig:(id)arg3;
+ (void)initialize;
+ (void)PBArrayAdd_nsNewXml;
+ (void)PBArrayAdd_uiHasShowReddotlevel;
- (void).cxx_destruct;
@property(nonatomic) unsigned int uiExpireTime; // @synthesize uiExpireTime=_uiExpireTime;
@property(nonatomic) unsigned int uiReddotlevel; // @synthesize uiReddotlevel=_uiReddotlevel;
@property(nonatomic) unsigned int uiClientVersion; // @synthesize uiClientVersion=_uiClientVersion;
@property(retain, nonatomic) NSString *nsUrl; // @synthesize nsUrl=_nsUrl;
@property(retain, nonatomic) NSString *nsWording; // @synthesize nsWording=_nsWording;
@property(nonatomic) unsigned int uiHasShowReddotlevel; // @synthesize uiHasShowReddotlevel=_uiHasShowReddotlevel;
@property(retain, nonatomic) NSString *nsNewXml; // @synthesize nsNewXml=_nsNewXml;
- (void)setUpdateHasShowUpdateWechatRedDot;
- (void)setAboutHasShowUpdateWechatRedDot;
- (void)setSettingHasShowUpdateWechatRedDot;
- (void)setMoreHasShowUpdateWechatRedDot;
- (id)getUpdateWechatCellWording;
- (_Bool)shouldUpdateShowUpdateWechatRedDot;
- (_Bool)shouldAboutShowUpdateWechatRedDot;
- (_Bool)shouldSettingShowUpdateWechatRedDot;
- (_Bool)shouldMoreShowUpdateWechatRedDot;
- (void)parseUpdateWechatRedDot:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

