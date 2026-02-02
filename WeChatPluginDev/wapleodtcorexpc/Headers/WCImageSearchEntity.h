//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, MsgImgSearchPhashMemItem, NSString, UIImage, WCDataItem, WCImageSearchReportModel, WCMediaItem;

@interface WCImageSearchEntity
{
    unsigned long long _dataType;
    CMessageWrap *_msgWrap;
    WCMediaItem *_snsMediaItem;
    WCDataItem *_snsItem;
    MsgImgSearchPhashMemItem *_phashMemItem;
    unsigned long long _chatType;
    WCImageSearchReportModel *_reporter;
    UIImage *_image;
    NSString *_messageUUID;
    unsigned long long _initiativeSearchSource;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long initiativeSearchSource; // @synthesize initiativeSearchSource=_initiativeSearchSource;
@property(copy, nonatomic) NSString *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) WCImageSearchReportModel *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) unsigned long long chatType; // @synthesize chatType=_chatType;
@property(retain, nonatomic) MsgImgSearchPhashMemItem *phashMemItem; // @synthesize phashMemItem=_phashMemItem;
@property(retain, nonatomic) WCDataItem *snsItem; // @synthesize snsItem=_snsItem;
@property(retain, nonatomic) WCMediaItem *snsMediaItem; // @synthesize snsMediaItem=_snsMediaItem;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(nonatomic) unsigned long long dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) _Bool isInitiativeSearch;
@property(readonly, copy, nonatomic) NSString *imagefilePath;
- (id)getMsgTypeImage;
- (void)setScene:(unsigned long long)arg1;
- (id)init;

@end

