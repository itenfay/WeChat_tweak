//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, WCFinderGroupLiveChatSaveToLocalBaseHandler;
@protocol OS_dispatch_queue;

@interface WCFinderGroupLiveChatSaveToLocalManager : NSObject
{
    WCFinderGroupLiveChatSaveToLocalBaseHandler *_handler;
    NSString *_liveId;
    NSString *_roomId;
    NSMutableSet *_saveDataSet;
    NSObject<OS_dispatch_queue> *_kQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *kQueue; // @synthesize kQueue=_kQueue;
@property(retain, nonatomic) NSMutableSet *saveDataSet; // @synthesize saveDataSet=_saveDataSet;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) WCFinderGroupLiveChatSaveToLocalBaseHandler *handler; // @synthesize handler=_handler;
- (id)currentGroupLivePath;
- (id)packHistoryModel:(id)arg1;
- (void)loadHistoryChat:(CDUnknownBlockType)arg1 filePath:(id)arg2 roomId:(id)arg3;
- (_Bool)checkFileAvailable:(id)arg1;
- (void)loadLastBufferDict:(CDUnknownBlockType)arg1 filePath:(id)arg2 roomId:(id)arg3;
- (void)saveLastBufferDict:(id)arg1 filePath:(id)arg2;
- (void)saveHistoryChat:(id)arg1 filePath:(id)arg2;
- (void)clearHistoryChat;
- (void)switchChatRoom:(id)arg1;
- (void)reset;
- (id)initWithHandler:(id)arg1 liveId:(id)arg2;
- (void)dealloc;

@end

