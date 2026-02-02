//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MMChatContentUploadLogic
{
    _Bool _validSync;
    unsigned int _reportToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_savedSessionInfoArr;
    NSMutableArray *_reportSessionInfoArr;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int reportToken; // @synthesize reportToken=_reportToken;
@property(nonatomic) _Bool validSync; // @synthesize validSync=_validSync;
@property(retain, nonatomic) NSMutableArray *reportSessionInfoArr; // @synthesize reportSessionInfoArr=_reportSessionInfoArr;
@property(retain, nonatomic) NSMutableArray *savedSessionInfoArr; // @synthesize savedSessionInfoArr=_savedSessionInfoArr;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)onExtChatUploadReplyChat:(id)arg1;
- (void)onExtChatUploadLeaveChat:(id)arg1;
- (void)onExtChatUploadEnterChat:(id)arg1;
- (void)onNewSyncEnd;
- (void)onPreQuit;
- (void)WillTerminate:(id)arg1;
- (void)DidEnterForeground:(id)arg1;
- (void)DidEnterBackground:(id)arg1;
- (void)report:(_Bool)arg1 withToken:(unsigned int)arg2;
- (void)checkAndCompareData:(id)arg1;
- (void)saveCurrentData:(id)arg1;
- (void)recoverFormerData;
- (_Bool)shouldUpload;
- (void)startLogic;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

