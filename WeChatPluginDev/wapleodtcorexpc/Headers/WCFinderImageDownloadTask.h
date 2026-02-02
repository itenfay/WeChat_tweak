//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol WCFImageOperation;

@interface WCFinderImageDownloadTask : NSObject
{
    long long _priority;
    NSString *_groupId;
    unsigned long long _timestamp;
    long long _batchIndex;
    CDUnknownBlockType _completionForBiz;
    NSString *_url;
    id <WCFImageOperation> _downloadOp;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) id <WCFImageOperation> downloadOp; // @synthesize downloadOp=_downloadOp;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) CDUnknownBlockType completionForBiz; // @synthesize completionForBiz=_completionForBiz;
@property(nonatomic) long long batchIndex; // @synthesize batchIndex=_batchIndex;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
- (void)pauseDownload;
- (void)resumeDownload;
- (void)stopDownload;
- (void)startDownload;
- (id)identifierKey;
- (id)initWithUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

