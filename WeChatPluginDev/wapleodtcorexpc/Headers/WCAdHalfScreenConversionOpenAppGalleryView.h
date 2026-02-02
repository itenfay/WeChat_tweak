//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FixTitleColorButton, MMUIButton, MMUILabel, WCAdAppImageGalleryView, WCAdSchemaJumpInfo, WCAdURLImageView;

@interface WCAdHalfScreenConversionOpenAppGalleryView
{
    WCAdSchemaJumpInfo *_schemaJumpInfo;
    CDUnknownBlockType _resultBlock;
    WCAdURLImageView *_appIconView;
    MMUILabel *_appNameView;
    MMUILabel *_appDescView;
    WCAdAppImageGalleryView *_appImageGalleryView;
    FixTitleColorButton *_confirmButtonView;
    MMUIButton *_maskButtonView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *maskButtonView; // @synthesize maskButtonView=_maskButtonView;
@property(retain, nonatomic) FixTitleColorButton *confirmButtonView; // @synthesize confirmButtonView=_confirmButtonView;
@property(retain, nonatomic) WCAdAppImageGalleryView *appImageGalleryView; // @synthesize appImageGalleryView=_appImageGalleryView;
@property(retain, nonatomic) MMUILabel *appDescView; // @synthesize appDescView=_appDescView;
@property(retain, nonatomic) MMUILabel *appNameView; // @synthesize appNameView=_appNameView;
@property(retain, nonatomic) WCAdURLImageView *appIconView; // @synthesize appIconView=_appIconView;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(retain, nonatomic) WCAdSchemaJumpInfo *schemaJumpInfo; // @synthesize schemaJumpInfo=_schemaJumpInfo;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)onConfirmButtonClick:(id)arg1;
- (id)createLabel:(id)arg1 height:(double)arg2 font:(id)arg3 textColor:(id)arg4;
- (void)initDetailUI;
- (void)initCommonUI;
- (id)initWithSchemaJumpInfo:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end

