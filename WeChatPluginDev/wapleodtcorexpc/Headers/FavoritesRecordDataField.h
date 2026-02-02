//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface FavoritesRecordDataField
{
    unsigned int _msgLocalId;
    unsigned int _msgCreateTime;
    NSString *_chatName;
}

+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int msgCreateTime; // @synthesize msgCreateTime=_msgCreateTime;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
- (id)GetMiddleDataPath;
- (id)GetDataPath;
- (id)GetThumbPath;

@end

