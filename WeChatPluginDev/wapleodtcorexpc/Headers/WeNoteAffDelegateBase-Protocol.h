//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString, RTEAttachmentNativeItem, WeNoteCPPInstance;

@protocol WeNoteAffDelegateBase <NSObject>

@optional
- (_Bool)isOnRecording:(NSString *)arg1;
- (void)onRecordClick:(_Bool)arg1;
- (void)onSelectFile;
- (void)onSelectFav;
- (_Bool)isUsingVoiceInput;
- (void)closeVoiceInput;
- (void)onVoiceInput;
- (void)onSelectLocation;
- (void)onOpenCamera;
- (void)onSelectPhoto;
- (void)onCloseMediaDetailsAnimationComplete:(NSString *)arg1;
- (void)setCPPInstance:(WeNoteCPPInstance *)arg1;
- (void)reportILogs:(int)arg1 reportContent:(NSString *)arg2;
- (void)onGeneratedContentFinished:(NSString *)arg1;
- (void)onChangeTranslateLanguage;
- (void)onClickMoreBtn;
- (RTEAttachmentNativeItem *)onPasteAttachment:(NSString *)arg1;
- (RTEAttachmentNativeItem *)onCopyAttachment:(NSString *)arg1;
- (void)onCopyContent:(NSArray *)arg1 sectionWrap:(NSData *)arg2;
- (void)onClickLink:(NSString *)arg1;
- (void)onClickExpose;
- (void)onPauseVoice:(NSString *)arg1;
- (void)onPlayVoice:(NSString *)arg1 progress:(float)arg2;
- (void)onClickFile:(NSString *)arg1;
- (void)onClickLocation:(NSString *)arg1;
- (void)onClickMedia:(NSArray *)arg1 index:(int)arg2 needEdit:(_Bool)arg3 originRect:(NSData *)arg4;
- (RTEAttachmentNativeItem *)getRTEAttachmentNativeItem:(NSString *)arg1;
@end

