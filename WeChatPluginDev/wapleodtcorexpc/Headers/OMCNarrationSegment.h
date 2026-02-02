//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface OMCNarrationSegment
{
}

@property(readonly, nonatomic) SharedPtr_4cfc5e71 backingNarrationSegment;
- (_Bool)replaceNarrationWithFilePath:(id)arg1 roleID:(id)arg2 roleName:(id)arg3 captionItems:(id)arg4 captionStyleID:(id)arg5 isKeepDuration:(_Bool)arg6;
- (_Bool)replaceNarrationWithFilePath:(id)arg1 roleID:(id)arg2 roleName:(id)arg3 captionItems:(id)arg4 captionStyleID:(id)arg5;
- (_Bool)resetToBlankAudioNarration;
- (_Bool)replaceNarrationSpeechWithFilePath:(id)arg1 isKeepDuration:(_Bool)arg2;
- (_Bool)replaceNarrationSpeechWithFilePath:(id)arg1;
- (void)updateRoleID:(id)arg1 roleName:(id)arg2;
- (void)resetRole;
- (_Bool)updateCaptionColorStyleWithID:(id)arg1;
- (_Bool)updateCaptionFontName:(id)arg1;
- (_Bool)updateCaptionStyleWithID:(id)arg1;
- (_Bool)updateCaptionItems:(id)arg1;
- (void)hideCaptions;
- (_Bool)showCaptions;
- (_Bool)isCaptionsEnabled;
@property(readonly, nonatomic) NSString *captionColorStyleID;
@property(readonly, nonatomic) NSString *captionFontNameInMaterial;
@property(readonly, nonatomic) NSString *captionFontName;
@property(readonly, nonatomic) NSString *captionStyleID;
@property(readonly, nonatomic) NSArray *displayingCaptionItems;
@property(readonly, nonatomic) NSArray *captionItems;
@property(readonly, nonatomic) NSString *roleName;
@property(readonly, nonatomic) NSString *roleID;
@property(readonly, nonatomic) NSString *audioFileID;
@property(readonly, nonatomic) NSString *originNarrationFilePath;
@property(readonly, nonatomic) NSString *narrationFilePath;

@end

