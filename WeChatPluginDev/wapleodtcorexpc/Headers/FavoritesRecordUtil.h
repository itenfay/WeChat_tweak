//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface FavoritesRecordUtil
{
}

+ (id)ConvertFavData2MsgWrap:(id)arg1;
+ (id)convertFinderLiveThemeShare2MsgWrap:(id)arg1;
+ (id)ConvertLiteApp2MsgWrap:(id)arg1;
+ (id)ConvertEmoji2MsgWrap:(id)arg1;
+ (id)ConvertText2MsgWrap:(id)arg1;
+ (id)ConvertFinderProductShare2MsgWrap:(id)arg1;
+ (id)ConvertFinderShopWindowShareV22MsgWrap:(id)arg1;
+ (id)ConvertFinderShopWindowShare2MsgWrap:(id)arg1;
+ (id)ConvertFinderNameCard2MsgWrap:(id)arg1;
+ (id)ConvertNote2MsgWrap:(id)arg1;
+ (id)ConvertRecord2MsgWrap:(id)arg1;
+ (id)ConvertWeApp2MsgWrap:(id)arg1;
+ (id)ConvertTingList2MsgWrap:(id)arg1;
+ (id)ConvertTingAudio2MsgWrap:(id)arg1;
+ (id)ConvertMV2MsgWrap:(id)arg1;
+ (id)ConvertOpenImKFShareCard2MsgWrap:(id)arg1;
+ (id)ConvertShareCard2MsgWrap:(id)arg1;
+ (id)ConvertLoc2MsgWrap:(id)arg1;
+ (id)ConvertFile2MsgWrap:(id)arg1;
+ (id)ConvertFinderLive2MsgWrap:(id)arg1;
+ (id)ConvertFinder2MsgWrap:(id)arg1;
+ (id)ConvertWebPage2MsgWrap:(id)arg1;
+ (id)ConvertVideo2MsgWrap:(id)arg1;
+ (id)ConvertImg2MsgWrap:(id)arg1 shouldSetImage:(_Bool)arg2;
+ (id)ConvertImg2MsgWrap:(id)arg1;
+ (id)genNoteConflictTitle:(id)arg1 atTime:(unsigned int)arg2;
+ (id)getWebpageFavDataUrl:(id)arg1;
+ (id)ConvertFavDataList:(id)arg1 toMsgWrap:(id)arg2 inFavItem:(id)arg3;
+ (void)clearSenderUserName:(id)arg1;
+ (id)Convert2AppFileMsg:(id)arg1;
+ (id)ConvertFinderFavItem2MsgWrap:(id)arg1;
+ (id)ConvertRecordFavItem2MsgWrap:(id)arg1;
+ (id)ConvertLocFavData2MsgWrap:(id)arg1;
+ (id)ConvertVideoData2MsgWrap:(id)arg1 videoPath:(id)arg2;
+ (id)ConvertVideoFavData2VideoInfo:(id)arg1;
+ (id)getMessageWrapTitleFromMsgList:(id)arg1;
+ (id)ConvertMsgList2MsgWrap:(id)arg1;
+ (id)convertNoteDataWrap2FavItem:(id)arg1;
+ (id)ConvertFavData2FavItem:(id)arg1 fromMessage:(id)arg2;
+ (id)ConvertFavData2FavItem:(id)arg1;
+ (id)ConvertFinderLiveThemeShare2FavData:(id)arg1;
+ (id)ConvertLiteApp2FavData:(id)arg1;
+ (id)ConvertEmojiMsg2FavData:(id)arg1;
+ (id)ConvertAppBrandMsg2FavData:(id)arg1;
+ (id)ConvertFinderTopic2FavData:(id)arg1;
+ (id)ConvertFinderColumn2FavData:(id)arg1;
+ (id)ConvertFinderNameCard2FavData:(id)arg1;
+ (id)ConvertFinderProductShare2FavData:(id)arg1;
+ (id)ConvertFinderShopWindowShareV22FavData:(id)arg1;
+ (id)ConvertFinderShopWindowShare2FavData:(id)arg1;
+ (id)ConvertFinderLiveMsg2FavData:(id)arg1;
+ (id)ConvertFinderLongVideoMsg2FavData:(id)arg1;
+ (id)ConvertFinderFeedMsg2FavData:(id)arg1;
+ (id)convertMsgDataListToFavItemDataList:(id)arg1 removeVoice:(_Bool)arg2;
+ (id)ConvertNoteMsg2FavData:(id)arg1 forFav:(_Bool)arg2;
+ (id)ConvertRecordMsg2FavData:(id)arg1 forFav:(_Bool)arg2;
+ (id)ConvertShortVideoMsg2FavData:(id)arg1;
+ (id)ConvertOpenImKFShareCardMsg2FavData:(id)arg1;
+ (id)ConvertShareCardMsg2FavData:(id)arg1;
+ (id)ConvertReaderWrap2FavData:(id)arg1;
+ (id)ConvertTVMsg2FavData:(id)arg1;
+ (id)ConvertProductMsg2FavData:(id)arg1;
+ (id)ConvertFileMsg2FavData:(id)arg1;
+ (id)ConvertTingList2FavData:(id)arg1;
+ (id)ConvertTingAudio2FavData:(id)arg1;
+ (id)ConvertMVMsg2FavData:(id)arg1;
+ (id)ConvertMusicMsg2FavData:(id)arg1;
+ (id)ConvertLocationMsg2FavData:(id)arg1;
+ (id)ConvertUrlMsg2FavData:(id)arg1;
+ (id)ConvertVideoMsg2FavData:(id)arg1;
+ (id)ConvertVoiceMsg2FavData:(id)arg1;
+ (id)ConvertImgMsg2FavData:(id)arg1;
+ (id)ConvertReferMsg2FavData:(id)arg1;
+ (void)clipReferMsgContent:(id)arg1;
+ (id)ConvertTextMsg2FavData:(id)arg1;
+ (id)ConvertMsg2FavData:(id)arg1 forFav:(_Bool)arg2;
+ (id)ConvertNotSupportMsg2FavData:(id)arg1;
+ (id)GetRecordForwardReportInfo:(id)arg1;
+ (id)noteDefaultTitleSet;
+ (id)GetRecordDesc:(id)arg1 fromFav:(_Bool)arg2;
+ (id)GetRecordDesc:(id)arg1;
+ (void)GetTextTitleAndDesc:(id)arg1 toTitle:(id *)arg2 toDesc:(id *)arg3 needBreakLines:(_Bool)arg4;
+ (id)GetNoteDescForSession:(id)arg1;
+ (void)GetNoteTitleAndDesc:(id)arg1 toTitle:(id *)arg2 toDesc:(id *)arg3 needDefaultTitle:(_Bool)arg4 needBreakLines:(_Bool)arg5;
+ (void)GetNoteTitleAndDesc:(id)arg1 toTitle:(id *)arg2 toDesc:(id *)arg3;
+ (id)GetNoteDesc:(id)arg1;
+ (id)GetRecordDataDesc:(id)arg1 needBreakLines:(_Bool)arg2;
+ (id)GetRecordDataDesc:(id)arg1;
+ (id)GetRecordForwardTitleByUser:(id)arg1 brand:(id)arg2;
+ (id)GetRecordForwardTitle:(id)arg1;
+ (id)getGroupDispName:(id)arg1 NeedSelf:(_Bool)arg2;
+ (id)GetFavDetailTitle:(id)arg1;
+ (id)GetRecordDataTimeByMsg:(id)arg1;
+ (id)GetSenderHeadUrlByMsg:(id)arg1;
+ (id)GetRecordRealChatNameByMsg:(id)arg1;
+ (id)GetRecordDataNameByMsg:(id)arg1;
+ (id)getContactHeadImage:(id)arg1;
+ (id)getContactNickName:(id)arg1;
+ (id)getContactDisplayName:(id)arg1;
+ (void)UpdateFavDataItemSource:(id)arg1 ByMsg:(id)arg2 AndReader:(id)arg3;
+ (void)UpdateFavDataItemSource:(id)arg1 ByMsg:(id)arg2;

@end

