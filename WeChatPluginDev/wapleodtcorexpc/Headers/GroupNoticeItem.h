//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface GroupNoticeItem
{
    NSString *_itemID;
    NSArray *_skipDownloadType;
}

+ (id)itemFromXml:(id)arg1;
+ (id)itemFromText:(id)arg1;
+ (id)itemFromFavItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *skipDownloadType; // @synthesize skipDownloadType=_skipDownloadType;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (_Bool)needDownLoad;
- (void)setMsgLocalId:(unsigned int)arg1;
- (void)setSourceId:(id)arg1;
- (void)setToUsr:(id)arg1;
- (void)moveDataFromTmpPathToFormalPathIfNeed;
- (void)bindWithMsgWrap:(id)arg1;
- (_Bool)shouldDownloadData:(id)arg1;
- (_Bool)isHtmlDataField:(id)arg1;
- (_Bool)isSameItem:(id)arg1;
- (_Bool)hasMediaItem;
- (id)generateDetailSummary;
- (id)generateAbstractSummary;
- (_Bool)isEmptyContent;
- (id)description;

@end

