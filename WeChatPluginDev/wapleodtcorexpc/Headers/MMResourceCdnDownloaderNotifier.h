//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString;
@protocol MMResourceCdnDownloaderNotifierDelegate;

@interface MMResourceCdnDownloaderNotifier
{
    id <MMResourceCdnDownloaderNotifierDelegate> _delegate;
    NSString *_identifier;
    MMTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <MMResourceCdnDownloaderNotifierDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTimeout;
- (void)invalidateTimer;
- (void)scheduleTimer;
- (void)OnDownloadCompleted:(id)arg1 response:(id)arg2;
- (void)unregisterExtension;
- (void)registerExtension;
- (void)notifyWithDownloadInfo:(id)arg1;
- (void)stop;
- (void)startWithDelegate:(id)arg1 identifier:(id)arg2;
- (void)dealloc;

@end

