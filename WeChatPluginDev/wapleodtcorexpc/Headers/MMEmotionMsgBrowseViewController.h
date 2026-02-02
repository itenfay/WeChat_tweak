//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap;

@interface MMEmotionMsgBrowseViewController
{
    CMessageWrap *_wrapMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *wrapMsg; // @synthesize wrapMsg=_wrapMsg;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnEmoticonDownload:(unsigned int)arg1 withMsgWrap:(id)arg2;
- (_Bool)isInChatroom;
- (id)msgWrapForOperation;
- (id)emoticonWrapForAdd;
- (id)getChatName;
- (id)getReportFromUsr;
- (id)getDesc;
- (void)removeSmallLoadingView;
- (void)addSmallLoadingView;
- (void)initImageViewWithFrame:(struct CGRect)arg1;
- (void)viewDidLoad;
- (void)setMsgWrap:(id)arg1;
- (id)initWithMsgWrap:(id)arg1;

@end

