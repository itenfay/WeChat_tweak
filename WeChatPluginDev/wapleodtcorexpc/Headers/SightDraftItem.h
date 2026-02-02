//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditVideoAttr, NSString, UIImage, VideoCompositionAttr;

@interface SightDraftItem
{
    unsigned long long _mode;
    NSString *_videoPath;
    NSString *_videoDraftPath;
    NSString *_thumbPath;
    UIImage *_thumbImg;
    NSString *_moviePath;
    NSString *_originalAssetId;
}

+ (id)draftItemWithThumbImg:(id)arg1 andPath:(id)arg2 inMode:(unsigned long long)arg3;
+ (void)initialize;
+ (void)PBArrayAdd_originalAssetId;
+ (void)PBArrayAdd_videoPath;
+ (void)PBArrayAdd_thumbPath;
+ (void)PBArrayAdd_mode;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *originalAssetId; // @synthesize originalAssetId=_originalAssetId;
@property(retain, nonatomic) NSString *moviePath; // @synthesize moviePath=_moviePath;
@property(retain, nonatomic) UIImage *thumbImg; // @synthesize thumbImg=_thumbImg;
@property(retain, nonatomic) NSString *thumbPath; // @synthesize thumbPath=_thumbPath;
@property(retain, nonatomic) NSString *videoDraftPath; // @synthesize videoDraftPath=_videoDraftPath;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (_Bool)isValid;
@property(readonly, nonatomic) unsigned int duration;
- (id)getVideoTmpPathAndCopyIfNeeded;
- (id)getThumbPath;
- (id)getVideoPath;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;
@property(retain, nonatomic) VideoCompositionAttr *compositionAttr;
@property(retain, nonatomic) EditVideoAttr *editVideoAttr;
@property(nonatomic) _Bool isEdited;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

