//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface QVisualLayerDataDownloader : NSObject
{
    NSMutableDictionary *_downloadingTasks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *downloadingTasks; // @synthesize downloadingTasks=_downloadingTasks;
- (void)sendVisLayerTaskCancellation:(id)arg1;
- (id)getDownloadTaskFromKey:(id)arg1;
- (void)removeDownloadTask:(id)arg1;
- (void)cancelDownload:(id)arg1;
- (void)requestData:(id)arg1 withRequestKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadModelLayerData:(id)arg1 withURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadVisualLayerData:(id)arg1 withURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

