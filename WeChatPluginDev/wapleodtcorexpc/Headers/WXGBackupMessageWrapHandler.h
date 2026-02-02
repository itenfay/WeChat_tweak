//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BakChatMsgItem, NSMutableArray, WXGBackupEmoticonConverter;

@interface WXGBackupMessageWrapHandler : NSObject
{
    WXGBackupEmoticonConverter *m_emoticonConverter;
    NSMutableArray *m_mediaStructArray;
    BakChatMsgItem *m_bakChatItem;
    NSMutableArray *m_mediaIDArray;
    NSMutableArray *m_mediaTypeArray;
    _Bool m_bHandleRoam;
    long long _mediaFormatSupport;
}

+ (id)_getPrefix:(id)arg1 inRecordDataFields:(id)arg2 prefix:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long mediaFormatSupport; // @synthesize mediaFormatSupport=_mediaFormatSupport;
- (id)_getMeidaIDForThumbHistoryMessageWrap:(id)arg1 withExtension:(id)arg2;
- (id)_getMeidaIDForHistoryMessageWrap:(id)arg1 withExtension:(id)arg2;
- (id)_getMediaIDForMsgWrapThumb:(id)arg1 withSuffix:(id)arg2;
- (id)_getMediaIDForMsgWrap:(id)arg1 withSuffix:(id)arg2;
- (id)_getGNDataMediaIDForMessageWrap:(id)arg1 withIndex:(unsigned int)arg2;
- (id)_getGNThumbMediaIDForMessageWrap:(id)arg1 withIndex:(unsigned int)arg2;
- (id)_getThumbMediaIDForMessageWrap:(id)arg1;
- (id)_getMediaIDForMessageWrap:(id)arg1;
- (id)_getHDMediaIDForMessageWrap:(id)arg1;
- (id)getMediaIDForMessage:(id)arg1 dataID:(id)arg2;
- (void)addMediaStructWithMediaID:(id)arg1 withMediaPath:(id)arg2 withMediaType:(int)arg3 withMessageWrap:(id)arg4;
- (void)p_innerGetMediaForHistoryDataList:(id)arg1 withPrefixExtension:(id)arg2 ofMessageWrap:(id)arg3;
- (void)p_getMediaForHistorySysNewXml:(id)arg1;
- (void)p_innerGetMediaForAppMsg:(id)arg1;
- (void)p_innerGetMediaForGroupNoticeMsg:(id)arg1;
- (void)p_innerGetMediaForAppMsgFav:(id)arg1;
- (void)p_innerGetNestedMediaForAppMsgDataList:(id)arg1 withPrefixExtension:(id)arg2 ofMsgWrap:(id)arg3;
- (void)p_getMediaForAppMsg:(id)arg1;
- (void)p_getMediaForEmoticon:(id)arg1;
- (void)p_getMediaForSight:(id)arg1;
- (void)p_getMediaForVideo:(id)arg1;
- (void)p_getMediaForVoice:(id)arg1;
- (void)p_getMediaForImg:(id)arg1;
- (void)p_getMediaInfoForMessageWrap:(id)arg1;
- (_Bool)p_messageWrapHasMedia:(id)arg1;
- (id)getBackupHEIFConvertPathWithExtension:(id)arg1;
- (id)covertSolitaireMsgToTextMsg:(id)arg1;
- (id)covertNewXmlMsgIfNeed:(id)arg1;
- (id)p_handleMessageWrap:(id)arg1;
- (id)handleMessageWrap:(id)arg1 mediaFormatSupport:(int)arg2;
- (id)handleMessageWrap:(id)arg1;
- (id)handleRoamMessageWrap:(id)arg1;
- (void)dealloc;
- (id)init;

@end

