//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, NSString;
@protocol _TtP6WeChat26IMBSclExternalViewDelegate_;

@interface _TtC6WeChat17MagicWeAppCardBiz
{
    MISSING_TYPE *mbCommonAdapter;
    MISSING_TYPE *mbVConsoleHelper;
    MISSING_TYPE *pkgMgr;
    MISSING_TYPE *pubResLogic;
    MISSING_TYPE *runtimeBinding;
    MISSING_TYPE *pixelBufferPlugin;
    MISSING_TYPE *frameSetRootId;
    MISSING_TYPE *fileSystemRelativePath;
    MISSING_TYPE *jsapiContextImpl;
    MISSING_TYPE *frameSetId2View;
}

- (void).cxx_destruct;
- (void)bindWAMagicBrushFrameRuntime:(id)arg1;
- (id)getAppId;
- (id)getParentViewController;
- (unsigned int)getDebugModeType;
- (void)mappingFrameSetId:(id)arg1 view:(id)arg2;
- (long long)addCustomViewWithView:(id)arg1;
- (id)bizPkgInfo;
- (id)bizVersionInfo;
- (void)destroy;
- (void)start;
@property(nonatomic, readonly) id <_TtP6WeChat26IMBSclExternalViewDelegate_> externalViewDelegate;
- (id)init;
- (id)getMagicBrushBiz;
@property(nonatomic, copy) NSString *fileSystemRelativePath;
@property(nonatomic, copy) NSString *frameSetRootId;

@end

