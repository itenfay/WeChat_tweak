//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface OMCCaptionSegment
{
}

@property(readonly, nonatomic) SharedPtr_ee0693f7 backingCaptionSegment;
- (_Bool)updateCaptionItems:(id)arg1 withLanguage:(id)arg2;
- (id)getCaptionItemsWithLanguage:(id)arg1;
@property(retain, nonatomic) NSString *secondaryCaptionLanguage;
@property(retain, nonatomic) NSString *mainCaptionLanguage;
- (_Bool)isEditingState;
- (void)leaveEditingState;
- (void)enterEditingState;
- (_Bool)updateAllCaptionsFontName:(id)arg1;
- (_Bool)updateSecondaryCaptionFontName:(id)arg1;
- (_Bool)updateMainCaptionFontName:(id)arg1;
- (_Bool)updateColorStyleWithID:(id)arg1;
- (_Bool)updateStyleWithMaterialID:(id)arg1;
@property(readonly, nonatomic) NSString *secondaryCaptionFontNameInMaterial;
@property(readonly, nonatomic) NSString *secondaryCaptionFontName;
@property(readonly, nonatomic) NSString *mainCaptionFontNameInMaterial;
@property(readonly, nonatomic) NSString *mainCaptionFontName;
@property(readonly, nonatomic) NSString *colorStyleID;
@property(readonly, nonatomic) NSString *materialID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

