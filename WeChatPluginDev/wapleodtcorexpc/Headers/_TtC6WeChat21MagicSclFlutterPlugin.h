//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC6WeChat21MagicSclFlutterPlugin : NSObject
{
    MISSING_TYPE *handlers;
    MISSING_TYPE *rootIdToHandlerName;
    MISSING_TYPE *weakEngine;
}

- (void).cxx_destruct;
- (id)init;
- (void)invokeBizName:(id)arg1 apiName:(id)arg2 data:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)getFrameSetCoverPathRootId:(id)arg1 frameSetId:(id)arg2 error:(id *)arg3;
- (void)clickFrameSetRootId:(id)arg1 frameSetId:(id)arg2 magicbrushViewId:(id)arg3 error:(id *)arg4;
- (void)scrollFrameSetRootId:(id)arg1 frameSetId:(id)arg2 listViewPortHeight:(double)arg3 itemOffset:(double)arg4 error:(id *)arg5;
- (void)resizeFrameSetRootId:(id)arg1 frameSetId:(id)arg2 width:(double)arg3 height:(double)arg4 error:(id *)arg5;
- (void)redrawFrameSetRootId:(id)arg1 frameSetId:(id)arg2 error:(id *)arg3;
- (void)detachFrameSetRootId:(id)arg1 frameSetId:(id)arg2 error:(id *)arg3;
- (void)attachFrameSetRootId:(id)arg1 frameSetId:(id)arg2 extra:(id)arg3 error:(id *)arg4;
- (void)destroyFrameSetRootId:(id)arg1 frameSetId:(id)arg2 error:(id *)arg3;
- (id)createFrameSetRootId:(id)arg1 name:(id)arg2 viewId:(long long)arg3 error:(id *)arg4;
- (void)preInitFrameSetRootId:(id)arg1 name:(id)arg2 data:(id)arg3 extInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)changeFrameSetDataRootId:(id)arg1 data:(id)arg2 extInfo:(id)arg3 error:(id *)arg4;
- (void)redrawFrameSetRootRootId:(id)arg1 error:(id *)arg2;
- (void)resumeFrameSetRootRootId:(id)arg1 error:(id *)arg2;
- (void)pauseFrameSetRootRootId:(id)arg1 error:(id *)arg2;
- (void)destroyFrameSetRootRootId:(id)arg1 error:(id *)arg2;
- (id)createFrameSetRootBizName:(id)arg1 path:(id)arg2 query:(id)arg3 error:(id *)arg4;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

@end

