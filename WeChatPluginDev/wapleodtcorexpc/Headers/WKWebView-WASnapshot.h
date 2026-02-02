//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <WebKit/WKWebView.h>

@interface WKWebView (WASnapshot)
- (void)setSnapshotImgView:(id)arg1;
- (id)snapshotImgView;
- (unsigned long long)getAvailableMemorySize;
- (_Bool)checkMemoryAvailableForContentSize:(struct CGSize)arg1 scale:(double *)arg2 freeMem:(unsigned long long *)arg3 isCompress:(_Bool *)arg4 predictImgMemSize:(unsigned long long *)arg5;
- (_Bool)extendSnapshotOnWindowByTimeout:(double)arg1;
- (void)removeSnapshotImageOnWindow;
- (void)addSnapshotImage:(id)arg1 timeout:(double)arg2;
- (void)addSnapshotByTimeout:(double)arg1;
- (_Bool)recursiveDrawViewAtPage:(unsigned int)arg1 firstPageOffset:(double)arg2 totalHeight:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)drawViewHierarchyPageByPageWithFirstPageOffset:(double)arg1 totalHeight:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)__takeSnapshotInRenderModeWithFrame:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (void)takeSnapshotInRenderModeWithFrame:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (void)takeSnapshotInCurrentFrame:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (void)captureFullScreenshotWithFrame:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (void)captureFullScreenshotWithCompletion:(CDUnknownBlockType)arg1;
@end

