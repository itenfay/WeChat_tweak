//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface HLLiteHttps : NSObject
{
    _Bool _newUser;
    NSString *_appVersion;
    long long _appID;
    NSOperationQueue *_operateQueue;
    NSMutableDictionary *_mapIDToPacket;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSMutableDictionary *mapIDToPacket; // @synthesize mapIDToPacket=_mapIDToPacket;
@property(readonly, nonatomic) NSOperationQueue *operateQueue; // @synthesize operateQueue=_operateQueue;
@property(nonatomic) _Bool newUser; // @synthesize newUser=_newUser;
@property(nonatomic) long long appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)doHttp:(id)arg1 data:(id)arg2;
- (void)cancel:(unsigned long long)arg1;
- (void)asyncCancel:(unsigned long long)arg1;
- (void)asyncDoHttp:(id)arg1;
- (id)doBlockAsync:(_Bool)arg1 inOperateQueue:(CDUnknownBlockType)arg2;
- (id)doBlockInOperateQueue:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

