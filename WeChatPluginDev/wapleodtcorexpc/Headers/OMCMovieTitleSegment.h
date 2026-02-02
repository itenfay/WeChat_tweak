//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface OMCMovieTitleSegment
{
}

@property(readonly, nonatomic) SharedPtr_ba8d92ee backingMovieTitleSegment;
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
- (_Bool)updateTitleFontName:(id)arg1;
- (_Bool)updateStyleWithMaterialID:(id)arg1;
- (_Bool)updateTitle:(id)arg1;
@property(readonly, nonatomic) NSString *colorStyleID;
@property(readonly, nonatomic) NSString *titleFontNameInMaterial;
@property(readonly, nonatomic) NSString *titleFontName;
@property(readonly, nonatomic) NSString *displayingTitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *materialID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

