//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface CircleToSearchMgr
{
}

- (int)transferTimeoutSeconds;
- (float)preferredImageCompressionQuality;
- (float)preferredImageRatioLimit;
- (int)preferredImageSize;
- (id)businessNameForScene:(unsigned long long)arg1 andEntrance:(unsigned long long)arg2;
- (_Bool)isEnabledForScene:(unsigned long long)arg1 andEntrance:(unsigned long long)arg2;
- (void)startCircleToSearchWithImage:(id)arg1 andScene:(unsigned long long)arg2 andEntrance:(unsigned long long)arg3 andEntityBlock:(CDUnknownBlockType)arg4;
- (void)startCircleToSearchOnViewController:(id)arg1 withImage:(id)arg2 andScene:(unsigned long long)arg3 andEntrance:(unsigned long long)arg4 andEntityBlock:(CDUnknownBlockType)arg5;
- (void)startCircleToSearchWithEntity:(id)arg1 onViewController:(id)arg2;
- (void)exposeWithScene:(unsigned long long)arg1 andEntrance:(unsigned long long)arg2;
- (id)getImageFromMediaItem:(id)arg1 withDefault:(id)arg2;
- (id)getImageFromMessageWrap:(id)arg1 withDefault:(id)arg2;
- (_Bool)isImageSatisfactoryWithPath:(id)arg1 andExisted:(_Bool *)arg2;
- (id)savePartialImage:(id)arg1 withNormalizedRect:(struct CGRect)arg2;
- (void)uploadImageWithFilePath:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)saveImageForUploading:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (id)genImageFilePath;
- (void)asyncGenerateImageInfo:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)onMenuControllerDidShow;
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

