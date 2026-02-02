//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveResourceFetcherRootFlowAction;

@interface MMLiveResourceFetcherLegacyApiAdapter : NSObject
{
    MMLiveResourceFetcherRootFlowAction *_rootAction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveResourceFetcherRootFlowAction *rootAction; // @synthesize rootAction=_rootAction;
- (void)start:(id)arg1 fileMD5:(id)arg2 enforceIntegrityCheck:(_Bool)arg3 pathManager:(id)arg4 completion:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) unsigned long long pendingTaskCount;
- (id)init;

@end

