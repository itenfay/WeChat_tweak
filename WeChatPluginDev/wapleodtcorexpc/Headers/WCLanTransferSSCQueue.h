//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, WCLanTransferSSCDelegate;

@interface WCLanTransferSSCQueue : NSObject
{
    id <WCLanTransferSSCDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_sscQueue;
    NSMutableDictionary *_taskInfoDict;
    NSMutableDictionary *_taskInfoStartDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *taskInfoStartDict; // @synthesize taskInfoStartDict=_taskInfoStartDict;
@property(retain, nonatomic) NSMutableDictionary *taskInfoDict; // @synthesize taskInfoDict=_taskInfoDict;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sscQueue; // @synthesize sscQueue=_sscQueue;
@property(nonatomic) __weak id <WCLanTransferSSCDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleDownload:(const void *)arg1 withStatus:(const void *)arg2;
- (void)handleDownloadProgress:(const void *)arg1 total:(unsigned long long)arg2 complete:(unsigned long long)arg3 tryShow:(_Bool)arg4;
- (void)stopTaskInfo:(id)arg1;
- (void)addTaskInfo:(id)arg1;

@end

