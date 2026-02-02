//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmojiInfoObj, EmoticonCustomManageAddLogic, NSData, NSString;

@interface WebviewJSEventHandler_emoticonAPICollection
{
    _Bool _showDesignerEntry;
    EmoticonCustomManageAddLogic *_emoticonAddLogic;
    NSString *_md5;
    NSData *_imageData;
    long long _opType;
    long long _silentAction;
    long long _operationScene;
    EmojiInfoObj *_emojiInfoObj;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showDesignerEntry; // @synthesize showDesignerEntry=_showDesignerEntry;
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj=_emojiInfoObj;
@property(nonatomic) long long operationScene; // @synthesize operationScene=_operationScene;
@property(nonatomic) long long silentAction; // @synthesize silentAction=_silentAction;
@property(nonatomic) long long opType; // @synthesize opType=_opType;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) EmoticonCustomManageAddLogic *emoticonAddLogic; // @synthesize emoticonAddLogic=_emoticonAddLogic;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (id)getViewController;
- (void)AddEmoticonFinishedWithWrap:(id)arg1 IsSuccessed:(_Bool)arg2;
- (void)endWithOK;
- (void)addWithEmojiInfoObj:(id)arg1 addScene:(long long)arg2;
- (void)forwardWithMD5:(id)arg1 emojiInfoObj:(id)arg2 imageData:(id)arg3;
- (_Bool)checkImageDataMd5AndSave:(id)arg1;
- (_Bool)decodeImageDataFrom:(id)arg1;
- (void)realDoAction;
- (void)startDownloadEmoji;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

