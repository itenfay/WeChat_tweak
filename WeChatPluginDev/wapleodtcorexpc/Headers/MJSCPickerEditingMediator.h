//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJShootComposingViewController, NSString, RecommendedMusicInfo;

@interface MJSCPickerEditingMediator : NSObject
{
    MJShootComposingViewController *_composingVC;
    unsigned long long _fromScene;
    NSString *_shootEntryExtInfo;
    NSString *_userName;
    RecommendedMusicInfo *_patMusicInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RecommendedMusicInfo *patMusicInfo; // @synthesize patMusicInfo=_patMusicInfo;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *shootEntryExtInfo; // @synthesize shootEntryExtInfo=_shootEntryExtInfo;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) __weak MJShootComposingViewController *composingVC; // @synthesize composingVC=_composingVC;
- (void)notifyDidFinishPickAssetInfos:(id)arg1 picker:(id)arg2;
- (_Bool)shouldInterruptForAssetsDurationCheckWithAssetInfos:(id)arg1;
- (_Bool)isRedPacketEntryInNewMovieComposing;
- (_Bool)isRedPacketEntryInOldMovieComposing;
- (_Bool)isRedPacketEntry;
- (void)handleMiaoJianSourceLocalVideoAssetPickingActionWithPostSession:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (id)onImagePreviewBrowserController:(id)arg1 didCreateVideoCompositionActionFlow:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (id)customBottomComposingButtonForAssetPreviewing:(_Bool)arg1;
- (void)customBottomComposingButtonEnabledStateDidChange:(_Bool)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingWithAssetInfos:(id)arg2 isUsingTemplate:(_Bool)arg3;
- (_Bool)shouldHandlePickingActionOutsideWithAssetInfos:(id)arg1;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (unsigned long long)postEnterScene;
- (void)dismissImagePickerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissImagePickerAnimated:(_Bool)arg1;
- (void)showAlbumPickerWithEnterScene:(unsigned long long)arg1 isCurrentAIGCTemplate:(_Bool)arg2;
- (void)showAlbumPickerWithEnterScene:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

