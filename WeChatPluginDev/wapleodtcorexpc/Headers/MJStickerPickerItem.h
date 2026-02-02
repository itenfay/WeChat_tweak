//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, OMJMaterialInfo, UIImage;

@interface MJStickerPickerItem : NSObject
{
    _Bool _isLocal;
    _Bool _isMultiSubtitlesSupported;
    UIImage *_previewImage;
    unsigned long long _type;
    OMJMaterialInfo *_material;
}

+ (id)defaultTextAnimItem;
+ (id)noneTextAnimItem;
+ (id)pingFangItemWithType:(unsigned long long)arg1;
+ (unsigned long long)convertStickerItemTypeFrom:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) OMJMaterialInfo *material; // @synthesize material=_material;
@property(nonatomic) _Bool isMultiSubtitlesSupported; // @synthesize isMultiSubtitlesSupported=_isMultiSubtitlesSupported;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) NSString *materialName;
@property(readonly, nonatomic) NSString *previewImageURL;
@property(readonly, nonatomic) NSString *identifier;
- (void)configWithExtraInfo:(id)arg1;
- (id)initWithMaterial:(id)arg1 type:(unsigned long long)arg2 isLocal:(_Bool)arg3;
- (id)initWithMaterial:(id)arg1 type:(unsigned long long)arg2;

@end

