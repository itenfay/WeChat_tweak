//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WeNoteFlutterInstance : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct WeNoteFlutterInstanceCppCover cpp_cover;
    struct weak_ptr<wenote::WeNoteFlutterInstanceDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reloadNoteAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadNoteAsync:(CDUnknownBlockType)arg1;
- (void)getToolViewHeightAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getToolViewHeightAsync:(CDUnknownBlockType)arg1;
- (void)insertTextAsync:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertTextAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)insertAttributeInfosAsync:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertAttributeInfosAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAttachmentVisibleAsync:(id)arg1 visible:(_Bool)arg2 on:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setAttachmentVisibleAsync:(id)arg1 visible:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)convertToImageAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)convertToImageAsync:(CDUnknownBlockType)arg1;
- (void)openContentSearchBarAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openContentSearchBarAsync:(CDUnknownBlockType)arg1;
- (void)getAttachmentRectAsync:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAttachmentRectAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showTranslationTitleBtnAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showTranslationTitleBtnAsync:(CDUnknownBlockType)arg1;
- (void)onChangeTranslationLanguageFinishedAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onChangeTranslationLanguageFinishedAsync:(CDUnknownBlockType)arg1;
- (void)cancelTranslateAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelTranslateAsync:(CDUnknownBlockType)arg1;
- (void)translateFullContentAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)translateFullContentAsync:(CDUnknownBlockType)arg1;
- (void)beginParseHTMLAsync:(id)arg1 htmlDownloadTime:(long long)arg2 on:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)beginParseHTMLAsync:(id)arg1 htmlDownloadTime:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onUpdateRecordDetailAsync:(int)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onUpdateRecordDetailAsync:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onVoicePlayingAsync:(id)arg1 offsetInMs:(float)arg2 on:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)onVoicePlayingAsync:(id)arg1 offsetInMs:(float)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onStartPlayVoiceAsync:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onStartPlayVoiceAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onEndPlayVoiceAsync:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onEndPlayVoiceAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadAttachmentAsync:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadAttachmentAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)zidlObjToHolder;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)initWithZidlImpl:(id)arg1;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_921967b6)getDispatcher;

@end

