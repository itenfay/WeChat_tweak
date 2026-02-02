//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveResDownloadManager, NSString;

@interface MMFinderLiveFloatMsgResourceManager : NSObject
{
    MMFinderLiveResDownloadManager *_downloadMgr;
}

+ (id)cacheFolder;
+ (void)cleanUnusedResources;
+ (void)refreshResourceUsageAtPath:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveResDownloadManager *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
- (id)zipPath:(id)arg1;
- (id)cachePath:(id)arg1;
- (void)getFloatMsgResourceWithUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

