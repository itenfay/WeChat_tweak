//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBContactLocal : NSObject
{
    unsigned int _chatState;
    unsigned int _needUpdate;
    unsigned int _metaFlag;
    unsigned int _lastUpdateTime;
    unsigned int _lastModifyTime;
    unsigned int _localCommonFlag;
    unsigned int _localAddContactTime;
    NSString *_mobileIdentify;
    NSString *_openIMPrivacyAgreementUrl;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_localAddContactTime;
+ (void)PBArrayAdd_openIMPrivacyAgreementUrl;
+ (void)PBArrayAdd_localCommonFlag;
+ (void)PBArrayAdd_lastModifyTime;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_metaFlag;
+ (void)PBArrayAdd_mobileIdentify;
+ (void)PBArrayAdd_needUpdate;
+ (void)PBArrayAdd_chatState;
- (void).cxx_destruct;
@property(nonatomic) unsigned int localAddContactTime; // @synthesize localAddContactTime=_localAddContactTime;
@property(retain, nonatomic) NSString *openIMPrivacyAgreementUrl; // @synthesize openIMPrivacyAgreementUrl=_openIMPrivacyAgreementUrl;
@property(nonatomic) unsigned int localCommonFlag; // @synthesize localCommonFlag=_localCommonFlag;
@property(nonatomic) unsigned int lastModifyTime; // @synthesize lastModifyTime=_lastModifyTime;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(nonatomic) unsigned int metaFlag; // @synthesize metaFlag=_metaFlag;
@property(retain, nonatomic) NSString *mobileIdentify; // @synthesize mobileIdentify=_mobileIdentify;
@property(nonatomic) unsigned int needUpdate; // @synthesize needUpdate=_needUpdate;
@property(nonatomic) unsigned int chatState; // @synthesize chatState=_chatState;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

