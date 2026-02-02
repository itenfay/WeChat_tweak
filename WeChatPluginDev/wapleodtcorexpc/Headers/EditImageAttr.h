//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CALayer, EditFinderImageAttr, EditStoryImageAttr, EditVideoBGMSelectedMusicInfo, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSURL, UIImage, WCLocationInfo;

@interface EditImageAttr
{
    _Bool _isEdited;
    NSString *_url;
    UIImage *_editedImage;
    NSArray *_editedWidgetStateList;
    NSMutableArray *_editedImages;
    UIImage *_unCropImage;
    NSMutableDictionary *_editImageAttrDic;
    NSMutableArray *_drawViewArray;
    CALayer *_overlayLayer;
    WCLocationInfo *_locationInfo;
    NSString *_poiReportStr4Commit;
    unsigned long long _startEditTimeInMs;
    EditStoryImageAttr *_storyAttr;
    EditVideoBGMSelectedMusicInfo *_musicInfo;
    NSURL *_patMusicURL;
    EditFinderImageAttr *_finderAttr;
    NSString *_imageEditId;
    UIImage *_originalImage;
    NSMutableDictionary *_userInfo;
    NSMutableArray *_assets;
    struct CGRect _cropRect;
}

+ (id)generateMergedImageFromImageList:(id)arg1 forSize:(struct CGSize)arg2;
+ (id)generateWidgetCanvasAnimateLayerFromView:(id)arg1 forSize:(struct CGSize)arg2;
+ (id)generateWidgetCanvasViewThumbFromView:(id)arg1 atTimeOffsetSec:(double)arg2 forSize:(struct CGSize)arg3;
+ (id)generateWidgetCanvasViewFromWidgetViewList:(id)arg1 forCanvasSize:(struct CGSize)arg2;
+ (id)generateWidgetViewListFromWidgetStateList:(id)arg1 forCanvasSize:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(copy, nonatomic) NSString *imageEditId; // @synthesize imageEditId=_imageEditId;
@property(retain, nonatomic) EditFinderImageAttr *finderAttr; // @synthesize finderAttr=_finderAttr;
@property(retain, nonatomic) NSURL *patMusicURL; // @synthesize patMusicURL=_patMusicURL;
@property(retain, nonatomic) EditVideoBGMSelectedMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(retain, nonatomic) EditStoryImageAttr *storyAttr; // @synthesize storyAttr=_storyAttr;
@property(nonatomic) unsigned long long startEditTimeInMs; // @synthesize startEditTimeInMs=_startEditTimeInMs;
@property(retain, nonatomic) NSString *poiReportStr4Commit; // @synthesize poiReportStr4Commit=_poiReportStr4Commit;
@property(retain, nonatomic) WCLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(retain, nonatomic) CALayer *overlayLayer; // @synthesize overlayLayer=_overlayLayer;
@property(nonatomic) _Bool isEdited; // @synthesize isEdited=_isEdited;
@property(retain, nonatomic) NSMutableArray *drawViewArray; // @synthesize drawViewArray=_drawViewArray;
@property(retain, nonatomic) NSMutableDictionary *editImageAttrDic; // @synthesize editImageAttrDic=_editImageAttrDic;
@property(retain, nonatomic) UIImage *unCropImage; // @synthesize unCropImage=_unCropImage;
@property(retain, nonatomic) NSMutableArray *editedImages; // @synthesize editedImages=_editedImages;
@property(retain, nonatomic) NSArray *editedWidgetStateList; // @synthesize editedWidgetStateList=_editedWidgetStateList;
@property(retain, nonatomic) UIImage *editedImage; // @synthesize editedImage=_editedImage;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)generateWidgetCanvasAnimateLayerForSize:(struct CGSize)arg1;
- (id)generateWidgetCanvasViewForSize:(struct CGSize)arg1;
- (id)generateWidgetViewListForCanvasSize:(struct CGSize)arg1;
- (void)getTexts:(id)arg1 andEmotionMd5s:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAssetUrl:(id)arg1 withImage:(id)arg2 withDrawLayer:(id)arg3 withEdited:(_Bool)arg4;
- (id)getImagePickerByPassInfo;
- (void)setImagePickerByPassInfo:(id)arg1;
- (id)getByPassInfoObjectForKey:(id)arg1;

@end

