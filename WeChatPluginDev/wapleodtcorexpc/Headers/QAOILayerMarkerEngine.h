//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface QAOILayerMarkerEngine : NSObject
{
    NSMutableDictionary *_downloadingTasks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *downloadingTasks; // @synthesize downloadingTasks=_downloadingTasks;
- (void)removeRequestTask:(id)arg1;
- (void)removeDownloadTask:(id)arg1;
- (id)constructURLString:(id)arg1 withID:(id)arg2;
- (void)downloadPOIIconImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestAOILayerData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

