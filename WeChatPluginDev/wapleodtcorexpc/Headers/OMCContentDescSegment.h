//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OMJID;

@interface OMCContentDescSegment
{
}

@property(readonly, nonatomic) SharedPtr_30bb3be5 backingContentDescSegment;
- (void)clearSpeech;
- (_Bool)replaceSpeechWithFilePath:(id)arg1;
- (_Bool)buildSpeechWithFilePath:(id)arg1;
- (void)updateRoleID:(id)arg1 roleName:(id)arg2;
- (void)resetRole;
@property(readonly, nonatomic) NSString *speechText;
@property(readonly, nonatomic) NSString *roleName;
@property(readonly, nonatomic) NSString *roleID;
@property(readonly, nonatomic) NSString *audioFilePath;
- (_Bool)isEditingState;
- (void)leaveEditingState;
- (void)enterEditingState;
- (_Bool)updateColorStyleWithID:(id)arg1;
- (_Bool)updateTextFontName:(id)arg1;
- (_Bool)updateStyleWithMaterialID:(id)arg1;
- (_Bool)updateText:(id)arg1;
@property(readonly, nonatomic) NSString *displayingText;
@property(readonly, nonatomic) NSString *colorStyleID;
@property(readonly, nonatomic) NSString *textFontNameInMaterial;
@property(readonly, nonatomic) NSString *textFontName;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) NSString *materialID;
@property(readonly, nonatomic) OMJID *belongingSegmentID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

