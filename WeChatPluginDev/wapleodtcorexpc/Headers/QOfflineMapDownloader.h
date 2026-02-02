//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface QOfflineMapDownloader : NSObject
{
    NSMutableDictionary *_downloadingTasks;
    NSMutableArray *_downloadingItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *downloadingItems; // @synthesize downloadingItems=_downloadingItems;
@property(retain, nonatomic) NSMutableDictionary *downloadingTasks; // @synthesize downloadingTasks=_downloadingTasks;
- (id)init;
- (void)saveOfflineItemZip:(id)arg1 withItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dowloadCDNOfflineConfig:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getDownloadItems;
- (void)removeDownloadTask:(id)arg1;
- (void)cancelDownload:(id)arg1;
- (void)removeOfflineDownloadItem:(id)arg1;
- (void)addOfflineDownloadItem:(id)arg1;
- (void)downloadData:(id)arg1 withURL:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

