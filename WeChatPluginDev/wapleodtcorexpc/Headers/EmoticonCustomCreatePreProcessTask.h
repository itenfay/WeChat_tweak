//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAsset, NSString, VideoCompositionAttr;

@interface EmoticonCustomCreatePreProcessTask
{
    CDUnknownBlockType _cropStartBlock;
    CDUnknownBlockType _cropSucBlock;
    CDUnknownBlockType _cropFailBlock;
    unsigned long long _autoSizeCrop;
    NSString *_localVideoPath;
    VideoCompositionAttr *_compositionAttr;
    MMAsset *_mmAsset;
    struct CGRect _cropFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMAsset *mmAsset; // @synthesize mmAsset=_mmAsset;
@property(retain, nonatomic) VideoCompositionAttr *compositionAttr; // @synthesize compositionAttr=_compositionAttr;
@property(retain, nonatomic) NSString *localVideoPath; // @synthesize localVideoPath=_localVideoPath;
@property(nonatomic) unsigned long long autoSizeCrop; // @synthesize autoSizeCrop=_autoSizeCrop;
@property(nonatomic) struct CGRect cropFrame; // @synthesize cropFrame=_cropFrame;
@property(copy, nonatomic) CDUnknownBlockType cropFailBlock; // @synthesize cropFailBlock=_cropFailBlock;
@property(copy, nonatomic) CDUnknownBlockType cropSucBlock; // @synthesize cropSucBlock=_cropSucBlock;
@property(copy, nonatomic) CDUnknownBlockType cropStartBlock; // @synthesize cropStartBlock=_cropStartBlock;
- (_Bool)isCropLengthSafe:(double)arg1;
- (_Bool)isCropRectSafe:(struct CGRect)arg1;
- (struct CGSize)getMediaSize:(id)arg1;
- (void)startComposing;
- (void)prepareForComposition:(CDUnknownBlockType)arg1;
- (_Bool)isValid;
- (void)startPreprocess;
- (id)initWithLocalVideoPath:(id)arg1;

@end

