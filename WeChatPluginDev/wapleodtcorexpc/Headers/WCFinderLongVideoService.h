//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WCFinderLongVideoService
{
    NSMutableDictionary *_compressWatch;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSMutableArray *_preloadArray;
}

+ (void)deleteItemLocal:(id)arg1;
+ (void)saveItemLocal:(id)arg1;
+ (id)encodeTagPath:(id)arg1;
+ (void)stopAllPreloadVideos;
+ (void)preloadVideos:(id)arg1;
+ (id)playInfoForLocalVideoInfo:(id)arg1;
+ (id)playInfoForVideo:(id)arg1 playRate:(double)arg2 commentScene:(int)arg3;
+ (_Bool)checkHadEncodingForDataItem:(id)arg1;
+ (void)updateShortVideoPath:(id)arg1 forItem:(id)arg2;
+ (void)updateLongVideoPath:(id)arg1 forItem:(id)arg2;
+ (void)ensureLongVideoCompress:(CDUnknownBlockType)arg1 forPostSession:(id)arg2;
+ (void)registerCompressCallback:(CDUnknownBlockType)arg1 forPostSession:(id)arg2 saveToLocal:(_Bool)arg3;
+ (void)stopEncodeForDataItem:(id)arg1;
+ (void)encodeSummaryFor:(id)arg1 offsetY:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)encodeSummaryWith:(id)arg1 offsetY:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (_Bool)checkLongVideoResourceValid:(id)arg1;
+ (void)encodeFullFor:(id)arg1;
+ (_Bool)hadExistLongEncoding;
+ (id)encodeLongWithPostSession:(id)arg1;
+ (_Bool)dataItemIsEnableToEncode:(id)arg1;
+ (id)encodeLongWithoutShortVideoPostSession:(id)arg1 config:(id)arg2;
+ (id)assetForUrl:(id)arg1;
+ (id)encodingOutputPath:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *preloadArray; // @synthesize preloadArray=_preloadArray;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain, nonatomic) NSMutableDictionary *compressWatch; // @synthesize compressWatch=_compressWatch;
- (void)checkExistedItems;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

