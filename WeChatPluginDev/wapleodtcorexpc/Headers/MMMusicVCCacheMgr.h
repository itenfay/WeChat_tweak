//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicViewController, NSString;

@interface MMMusicVCCacheMgr
{
    NSString *_curCachedKey;
    MMMusicViewController *_curCachedVC;
    _Bool _curCachedVCReusable;
}

+ (id)openParamsWithMusicInfo:(id)arg1;
+ (id)openParamsWithMVModel:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool curCachedVCReusable; // @synthesize curCachedVCReusable=_curCachedVCReusable;
- (void)clearCachedVC;
- (void)markSelfPopedOrDismissed:(id)arg1;
- (id)popUsableViewControllerAndMayNilIfConflictWithOpenParams:(id)arg1;
- (void)commonInit;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

