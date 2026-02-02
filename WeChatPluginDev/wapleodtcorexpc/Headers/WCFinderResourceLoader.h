//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface WCFinderResourceLoader : NSObject
{
    unsigned long long _maxDownloadCount;
    NSMutableDictionary *_taskDict;
    NSMutableArray *_waitingQueue;
    NSMutableDictionary *_waitingListenerDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *waitingListenerDict; // @synthesize waitingListenerDict=_waitingListenerDict;
@property(retain, nonatomic) NSMutableArray *waitingQueue; // @synthesize waitingQueue=_waitingQueue;
@property(retain, nonatomic) NSMutableDictionary *taskDict; // @synthesize taskDict=_taskDict;
@property(nonatomic) unsigned long long maxDownloadCount; // @synthesize maxDownloadCount=_maxDownloadCount;
- (void)OnCdnDownload:(id)arg1;
- (id)waitingListenerWithUid:(id)arg1;
- (void)callCompleteBlockWithTask:(id)arg1 ret:(_Bool)arg2;
- (void)retryDownloadTask:(id)arg1;
- (void)startDownloadIfCan;
- (_Bool)cancelLoadTask:(id)arg1;
- (_Bool)addLoadTask:(id)arg1;
- (id)init;

@end

