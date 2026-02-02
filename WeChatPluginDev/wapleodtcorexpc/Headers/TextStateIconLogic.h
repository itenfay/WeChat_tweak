//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TextStateExperimentTable, TextStateIconStorage, TextStatePassthroughIconList, WCCgiBlockHelper;
@protocol OS_dispatch_queue;

@interface TextStateIconLogic : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    WCCgiBlockHelper *_cgiBlockHelper;
    TextStateIconStorage *_iconStorage;
    TextStateIconStorage *_emojiIconStorage;
    CDUnknownBlockType _iconUpdateHandler;
    TextStatePassthroughIconList *_passthroughIconList;
    TextStateExperimentTable *_experimentTable;
    CDUnknownBlockType _experimentUpdateHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType experimentUpdateHandler; // @synthesize experimentUpdateHandler=_experimentUpdateHandler;
@property(retain, nonatomic) TextStateExperimentTable *experimentTable; // @synthesize experimentTable=_experimentTable;
@property(retain, nonatomic) TextStatePassthroughIconList *passthroughIconList; // @synthesize passthroughIconList=_passthroughIconList;
@property(copy, nonatomic) CDUnknownBlockType iconUpdateHandler; // @synthesize iconUpdateHandler=_iconUpdateHandler;
@property(retain, nonatomic) TextStateIconStorage *emojiIconStorage; // @synthesize emojiIconStorage=_emojiIconStorage;
@property(retain, nonatomic) TextStateIconStorage *iconStorage; // @synthesize iconStorage=_iconStorage;
@property(retain, nonatomic) WCCgiBlockHelper *cgiBlockHelper; // @synthesize cgiBlockHelper=_cgiBlockHelper;
- (void)expirePassthroughIcon;
- (id)expiredPassthroughIconIdentifier;
- (id)privateActivePassthroughIcon;
- (id)activePassthroughIcon;
- (unsigned long long)mainResourceShowIconMaxCount;
- (unsigned long long)minIntervalBetweenIconUpdate;
- (void)privateUpdateIconWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceUpdateIconWithFlags:(unsigned int)arg1;
- (void)checkAndUpdateIcon;
- (id)init;

@end

