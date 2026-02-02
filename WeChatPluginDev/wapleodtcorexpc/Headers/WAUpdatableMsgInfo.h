//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAUpdatableMsgInfo : NSObject
{
    _Bool _shouldUseUpdatableMsg;
    _Bool _shouldUseChattoolMsg;
    _Bool _isSystemPushFinished;
    int _updatableContentUpdateInterval;
    unsigned int _lastUpdateTime;
    unsigned int _updatableMsgType;
    NSString *_shareKey;
    NSString *_appId;
    unsigned long long _subscriptionEntryState;
    NSString *_subscriptionEntryContent;
    NSString *_subscriptionEntryButtonWording;
    NSString *_subscriptionConfirmedContent;
    NSString *_expiredSubscribeWording;
    NSString *_updatableContentText;
    NSString *_updatableContentColor;
}

+ (id)infoFromResp:(id)arg1;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (id)swift_shouldUseChattoolMsg;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)shouldUseChattoolMsg;
+ (id)swift_updatableMsgType;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)updatableMsgType;
+ (id)swift_expiredSubscribeWording;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)expiredSubscribeWording;
+ (id)swift_lastUpdateTime;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)lastUpdateTime;
+ (id)swift_updatableContentUpdateInterval;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)updatableContentUpdateInterval;
+ (id)swift_updatableContentColor;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)updatableContentColor;
+ (id)swift_updatableContentText;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)updatableContentText;
+ (id)swift_subscriptionConfirmedContent;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)subscriptionConfirmedContent;
+ (id)swift_subscriptionEntryButtonWording;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)subscriptionEntryButtonWording;
+ (id)swift_subscriptionEntryContent;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)subscriptionEntryContent;
+ (id)swift_isSystemPushFinished;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)isSystemPushFinished;
+ (id)swift_subscriptionEntryState;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)subscriptionEntryState;
+ (id)swift_appId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)appId;
+ (id)swift_shouldUseUpdatableMsg;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)shouldUseUpdatableMsg;
+ (id)swift_shareKey;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)shareKey;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int updatableMsgType; // @synthesize updatableMsgType=_updatableMsgType;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(nonatomic) int updatableContentUpdateInterval; // @synthesize updatableContentUpdateInterval=_updatableContentUpdateInterval;
@property(retain, nonatomic) NSString *updatableContentColor; // @synthesize updatableContentColor=_updatableContentColor;
@property(retain, nonatomic) NSString *updatableContentText; // @synthesize updatableContentText=_updatableContentText;
@property(retain, nonatomic) NSString *expiredSubscribeWording; // @synthesize expiredSubscribeWording=_expiredSubscribeWording;
@property(retain, nonatomic) NSString *subscriptionConfirmedContent; // @synthesize subscriptionConfirmedContent=_subscriptionConfirmedContent;
@property(retain, nonatomic) NSString *subscriptionEntryButtonWording; // @synthesize subscriptionEntryButtonWording=_subscriptionEntryButtonWording;
@property(retain, nonatomic) NSString *subscriptionEntryContent; // @synthesize subscriptionEntryContent=_subscriptionEntryContent;
@property(nonatomic) _Bool isSystemPushFinished; // @synthesize isSystemPushFinished=_isSystemPushFinished;
@property(nonatomic) unsigned long long subscriptionEntryState; // @synthesize subscriptionEntryState=_subscriptionEntryState;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) _Bool shouldUseChattoolMsg; // @synthesize shouldUseChattoolMsg=_shouldUseChattoolMsg;
@property(nonatomic) _Bool shouldUseUpdatableMsg; // @synthesize shouldUseUpdatableMsg=_shouldUseUpdatableMsg;
@property(retain, nonatomic) NSString *shareKey; // @synthesize shareKey=_shareKey;
- (unsigned int)nextTimeToUpdate;
- (_Bool)isUpdateAllowed;
- (_Bool)shouldUpdateNow;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

