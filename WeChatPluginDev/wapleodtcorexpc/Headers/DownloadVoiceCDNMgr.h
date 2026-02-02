//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSMutableDictionary, NSRecursiveLock;
@protocol DownloadVoiceDelegate;

@interface DownloadVoiceCDNMgr : NSObject
{
    _Bool _bDownloading;
    id <DownloadVoiceDelegate> _delegate;
    MMTimer *_timerCheck;
    MMTimer *_timerCheckTimeout;
    NSMutableDictionary *_readyDownloadItems;
    NSRecursiveLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool bDownloading; // @synthesize bDownloading=_bDownloading;
@property(retain, nonatomic) NSMutableDictionary *readyDownloadItems; // @synthesize readyDownloadItems=_readyDownloadItems;
@property(retain, nonatomic) MMTimer *timerCheckTimeout; // @synthesize timerCheckTimeout=_timerCheckTimeout;
@property(retain, nonatomic) MMTimer *timerCheck; // @synthesize timerCheck=_timerCheck;
@property(nonatomic) __weak id <DownloadVoiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportDownloadCDNSuccess:(id)arg1;
- (void)reportDownloadCDNFail:(id)arg1;
- (void)handleDownloadCDNSuccess:(id)arg1;
- (void)handleDownloadCDNFail:(id)arg1;
- (void)downloadVoiceFromCDN:(id)arg1;
- (void)startDownload:(id)arg1;
- (void)startDownload;
- (void)OnSyncDownload:(id)arg1 LocalID:(unsigned int)arg2 n64SvrID:(long long)arg3 CreateTime:(unsigned int)arg4 Xml:(id)arg5 Voice:(id)arg6;
- (void)updateItemToPB;
- (void)loadItemFromPB;
- (id)getPBPath;
- (void)TimerCheckTimeout;
- (void)TimerCheckUpload;
- (void)Stop;
- (void)Start;
- (id)init;

@end

