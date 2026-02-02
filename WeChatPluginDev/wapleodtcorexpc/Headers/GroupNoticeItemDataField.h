//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GroupNoticeItemDataField
{
    NSString *_sourceId;
    NSString *_chatRoomName;
}

+ (id)convertFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName=_chatRoomName;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
- (id)uploadIdentifier;
- (_Bool)needDownloadThumb;
- (_Bool)needDownloadData;
- (id)GetTmpThumbPath;
- (id)GetTmpDataPath;
- (id)GetThumbPath;
- (id)GetDataPath;

@end

