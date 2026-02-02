//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface ForwardMsgUtil
{
}

+ (_Bool)IsWeAppMsgWithMessageWrap:(id)arg1;
+ (id)GenerateClassifiedStatFromMsgList:(id)arg1;
+ (unsigned int)ForwardStatSceneFrom:(unsigned long long)arg1;
+ (void)StatForwardMultiMsgs:(id)arg1 targets:(id)arg2 scene:(unsigned long long)arg3 didSend:(_Bool)arg4 isRecord:(_Bool)arg5 isToWeWork:(_Bool)arg6 hasMessage:(_Bool)arg7;
+ (id)getDataSizeDescription:(unsigned int)arg1;
+ (double)getTotalSize:(id)arg1;
+ (id)GenForwardVideoFromMsgWrap:(id)arg1;
+ (id)readerAppMsgFromReaderWrap:(id)arg1;
+ (id)locMsgFromMsgWrap:(id)arg1;
+ (id)cardMsgFromMsgWrap:(id)arg1;
+ (id)emojiMsgFromMsgWrap:(id)arg1;
+ (id)checkSourcePathFileFromMsg:(id)arg1 withDataList:(id)arg2;
+ (id)genForwardAppRecordItemFromMsg:(id)arg1;
+ (id)appMsgFromMsgWrap:(id)arg1;
+ (id)imgMsgFromMsgWrap:(id)arg1;
+ (id)GenTextMsgWithContent:(id)arg1;
+ (id)textMsgFromMsgWrap:(id)arg1;
+ (void)copySecInfoFromMsg:(id)arg1 toMsg:(id)arg2;
+ (id)GenForwardMsgFromMsgWrap:(id)arg1 ToContact:(id)arg2;
+ (id)getContactHeadImage:(id)arg1;
+ (id)getContactNickName:(id)arg1;
+ (id)getMsgRealFrom:(id)arg1;
+ (_Bool)IsMsgCanSend:(id)arg1;
+ (id)ConvertMsgToTextIfCannotSend:(id)arg1;
+ (id)GetMsgForbiddenBriefDesc:(id)arg1;
+ (void)ForwardMsg:(id)arg1 ToContact:(id)arg2 Scene:(unsigned int)arg3 forwardType:(unsigned int)arg4 uiIDKeyScene:(unsigned int)arg5 editImageAttr:(id)arg6 roomTodoFlag:(_Bool)arg7;
+ (void)ForwardMsg:(id)arg1 ToContact:(id)arg2 Scene:(unsigned int)arg3 forwardType:(unsigned int)arg4 uiIDKeyScene:(unsigned int)arg5 editImageAttr:(id)arg6;
+ (id)SendMsgWithOriMsg:(id)arg1 Contact:(id)arg2 ForwardType:(unsigned int)arg3 EditImageAttr:(id)arg4;
+ (void)ForwardMsg:(id)arg1 ToContact:(id)arg2 Scene:(unsigned int)arg3 forwardType:(unsigned int)arg4;
+ (void)ForwardMsg:(id)arg1 ToContact:(id)arg2 Scene:(unsigned int)arg3;
+ (void)ForwardMsgList:(id)arg1 ToContact:(id)arg2 Scene:(unsigned int)arg3;

@end

