//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FixTitleColorButton, MMUILabel, MaskButtonView, WCAdSchemaJumpInfo, WCAdURLImageView;

@interface WCAdHalfScreenConversionOpenAppView
{
    WCAdSchemaJumpInfo *_schemaJumpInfo;
    CDUnknownBlockType _resultBlock;
    WCAdURLImageView *_appIconView;
    MMUILabel *_appNameView;
    MMUILabel *_tipsView1;
    MMUILabel *_tipsView2;
    FixTitleColorButton *_confirmButtonView;
    MaskButtonView *_maskButtonView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MaskButtonView *maskButtonView; // @synthesize maskButtonView=_maskButtonView;
@property(retain, nonatomic) FixTitleColorButton *confirmButtonView; // @synthesize confirmButtonView=_confirmButtonView;
@property(retain, nonatomic) MMUILabel *tipsView2; // @synthesize tipsView2=_tipsView2;
@property(retain, nonatomic) MMUILabel *tipsView1; // @synthesize tipsView1=_tipsView1;
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

