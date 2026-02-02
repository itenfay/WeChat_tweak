//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WeNoteAffDelegate : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct WeNoteAffDelegateCppCover cpp_cover;
    struct weak_ptr<wenote::WeNoteAffDelegateDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isOnRecording:(id)arg1;
- (void)onRecordClick:(_Bool)arg1;
- (void)onSelectFile;
- (void)onSelectFav;
- (_Bool)isUsingVoiceInput;
- (void)closeVoiceInput;
- (void)onVoiceInput;
- (void)onSelectLocation;
- (void)onOpenCamera;
- (void)onSelectPhoto;
- (void)onCloseMediaDetailsAnimationComplete:(id)arg1;
- (void)setCPPInstance:(id)arg1;
- (void)reportILogs:(int)arg1 reportContent:(id)arg2;
- (void)onGeneratedContentFinished:(id)arg1;
- (void)onChangeTranslateLanguage;
- (void)onClickMoreBtn;
- (id)onPasteAttachment:(id)arg1;
- (id)onCopyAttachment:(id)arg1;
- (void)onCopyContent:(id)arg1 sectionWrap:(id)arg2;
- (void)onClickLink:(id)arg1;
- (void)onClickExpose;
- (void)onPauseVoice:(id)arg1;
- (void)onPlayVoice:(id)arg1 progress:(float)arg2;
- (void)onClickFile:(id)arg1;
- (void)onClickLocation:(id)arg1;
- (void)onClickMedia:(id)arg1 index:(int)arg2 needEdit:(_Bool)arg3 originRect:(id)arg4;
- (id)getRTEAttachmentNativeItem:(id)arg1;
- (id)zidlObjToHolder;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)initWithZidlImpl:(id)arg1;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_fbed05fd)getDispatcher;

@end

