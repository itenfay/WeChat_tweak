//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, MsgDataDownloadLogic;

@interface WAMsgSelectInfo
{
    _Bool _selected;
    _Bool _expired;
    _Bool _downloading;
    _Bool _downloadingHD;
    _Bool _showPercent;
    CMessageWrap *_msg;
    double _percent;
    MsgDataDownloadLogic *_downloadLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MsgDataDownloadLogic *downloadLogic; // @synthesize downloadLogic=_downloadLogic;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(nonatomic) _Bool showPercent; // @synthesize showPercent=_showPercent;
@property(nonatomic) _Bool downloadingHD; // @synthesize downloadingHD=_downloadingHD;
@property(nonatomic) _Bool downloading; // @synthesize downloading=_downloading;
@property(nonatomic) _Bool expired; // @synthesize expired=_expired;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) CMessageWrap *msg; // @synthesize msg=_msg;
- (void)stopDownloading;

@end

