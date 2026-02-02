//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CommonReddotNativeHandlerObjc : NSObject
{
}

+ (void)updateShowInfoTreeReddotCount:(id)arg1;
+ (id)generateClientSyncStatus:(unsigned int)arg1;
+ (void)asyncGenerateClientSyncStatus:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)asyncGenerateClientAIInfo:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)asyncGenerateSyncClientInfo:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)asyncGenerateEntranceExposeContent:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;
+ (_Bool)canSendSyncRequest:(unsigned int)arg1 request:(id)arg2;
+ (id)generateSyncClientStatus:(unsigned int)arg1;
+ (id)generateEntranceExposeContent:(unsigned int)arg1;
+ (id)generateClientAIInfo:(unsigned int)arg1;
+ (void)generateShowInfoReportJson:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)generateSyncClientInfo:(unsigned int)arg1;
+ (void)getReddotCtrlInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)disposeReddot:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)getFinderTipsShowInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)onReddotSyncResponse:(unsigned int)arg1 scene:(unsigned int)arg2 finderCommonReddotSyncResponse:(id)arg3;

@end

