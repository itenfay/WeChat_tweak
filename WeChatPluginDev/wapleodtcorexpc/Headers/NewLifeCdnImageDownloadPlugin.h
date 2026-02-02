//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NewLifeCdnDownloaderCallback;

@interface NewLifeCdnImageDownloadPlugin : NSObject
{
    NewLifeCdnDownloaderCallback *_downloadCallback;
}

+ (void)setup;
+ (id)plugin;
- (void).cxx_destruct;
@property(retain, nonatomic) NewLifeCdnDownloaderCallback *downloadCallback; // @synthesize downloadCallback=_downloadCallback;
- (void)startCdnDownloadReq:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelCdnDownloadMediaId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

