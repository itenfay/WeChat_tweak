//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@protocol MagicSclRequest
- (NSString *)getFrameSetCoverPathRootId:(NSString *)arg1 frameSetId:(NSString *)arg2 error:(id *)arg3;
- (void)clickFrameSetRootId:(NSString *)arg1 frameSetId:(NSString *)arg2 magicbrushViewId:(NSString *)arg3 error:(id *)arg4;
- (void)scrollFrameSetRootId:(NSString *)arg1 frameSetId:(NSString *)arg2 listViewPortHeight:(double)arg3 itemOffset:(double)arg4 error:(id *)arg5;
- (void)resizeFrameSetRootId:(NSString *)arg1 frameSetId:(NSString *)arg2 width:(double)arg3 height:(double)arg4 error:(id *)arg5;
- (void)redrawFrameSetRootId:(NSString *)arg1 frameSetId:(NSString *)arg2 error:(id *)arg3;
- (void)detachFrameSetRootId:(NSString *)arg1 frameSetId:(NSString *)arg2 error:(id *)arg3;
- (void)attachFrameSetRootId:(NSString *)arg1 frameSetId:(NSString *)arg2 extra:(NSString *)arg3 error:(id *)arg4;
- (void)destroyFrameSetRootId:(NSString *)arg1 frameSetId:(NSString *)arg2 error:(id *)arg3;
- (NSString *)createFrameSetRootId:(NSString *)arg1 name:(NSString *)arg2 viewId:(long long)arg3 error:(id *)arg4;
- (void)preInitFrameSetRootId:(NSString *)arg1 name:(NSString *)arg2 data:(NSString *)arg3 extInfo:(NSString *)arg4 completion:(void (^)(NSNumber *, FlutterError *))arg5;
- (void)changeFrameSetDataRootId:(NSString *)arg1 data:(NSString *)arg2 extInfo:(NSString *)arg3 error:(id *)arg4;
- (void)redrawFrameSetRootRootId:(NSString *)arg1 error:(id *)arg2;
- (void)resumeFrameSetRootRootId:(NSString *)arg1 error:(id *)arg2;
- (void)pauseFrameSetRootRootId:(NSString *)arg1 error:(id *)arg2;
- (void)destroyFrameSetRootRootId:(NSString *)arg1 error:(id *)arg2;
- (NSString *)createFrameSetRootBizName:(NSString *)arg1 path:(NSString *)arg2 query:(NSString *)arg3 error:(id *)arg4;
@end

