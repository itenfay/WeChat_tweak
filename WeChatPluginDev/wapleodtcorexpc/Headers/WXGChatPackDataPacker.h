//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, WXGChatPackDataPackerDelegate;

@interface WXGChatPackDataPacker : NSObject
{
    _Bool _bZipFile;
    _Bool _bPacking;
    NSString *_dataDirPath;
    id <WXGChatPackDataPackerDelegate> _delegate;
    NSString *_wechatLogFile;
    NSObject<OS_dispatch_queue> *_chatPackQueue;
}

+ (_Bool)p_writeMediaDataPush:(id)arg1 toPath:(id)arg2;
+ (_Bool)p_writeMsgListDataPush:(id)arg1 toPath:(id)arg2;
- (void).cxx_destruct;
@property _Bool bPacking; // @synthesize bPacking=_bPacking;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *chatPackQueue; // @synthesize chatPackQueue=_chatPackQueue;
@property(copy, nonatomic) NSString *wechatLogFile; // @synthesize wechatLogFile=_wechatLogFile;
@property(nonatomic) _Bool bZipFile; // @synthesize bZipFile=_bZipFile;
@property(nonatomic) __weak id <WXGChatPackDataPackerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *dataDirPath; // @synthesize dataDirPath=_dataDirPath;
- (id)getValidateFilePath;
- (id)mediaPathForSession:(id)arg1 mediaID:(id)arg2;
- (id)msgListPathForSession:(id)arg1 dataID:(id)arg2;
- (id)getSessionMsgDir:(id)arg1;
- (id)getSessionMediaDir:(id)arg1;
- (id)getSessionDir:(id)arg1;
- (id)getContentPath;
- (id)getZipContentPath;
- (void)stopPackData;
- (void)startPackDataInDir:(id)arg1 withInfo:(id)arg2;
- (void)mainThreadSyncProgress:(float)arg1;
- (void)mainThreadCallDelegate:(_Bool)arg1;
- (id)init;

@end

