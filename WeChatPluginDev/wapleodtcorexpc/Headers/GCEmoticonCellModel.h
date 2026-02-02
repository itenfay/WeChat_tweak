//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CEmoticonWrap, CMessageWrap, ChatroomMsgEmoji;

@interface GCEmoticonCellModel
{
    ChatroomMsgEmoji *_emojiMsg;
    CEmoticonWrap *_emoticonWrap;
    CMessageWrap *_messageWrap;
    unsigned long long _msgDownloadStatus;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long msgDownloadStatus; // @synthesize msgDownloadStatus=_msgDownloadStatus;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
@property(retain, nonatomic) ChatroomMsgEmoji *emojiMsg; // @synthesize emojiMsg=_emojiMsg;
- (void)startDownloadImageIsFirstTime:(_Bool)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)logWithForamt:(id)arg1;
- (void)logStr:(id)arg1;
- (void)emotionViewClick;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)measurebubbleViewSize:(struct CGSize)arg1;
- (id)emojiInfoObjFromGCEmojiMsg:(id)arg1;
- (void)onChatroomMessageInitEnd;
- (Class)bindCellClass;
- (id)initWithChatroomMessage:(id)arg1;

@end

