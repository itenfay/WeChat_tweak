//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface FavoritesDataItemSource
{
    int _sourceType;
    NSString *_sourceId;
    NSString *_fromUsr;
    NSString *_toUsr;
    NSString *_realChatName;
    NSString *_hashUserName;
    NSString *_appId;
    NSString *_brandId;
    NSString *_link;
}

+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
+ (id)xmlAttributePropertylistForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *brandId; // @synthesize brandId=_brandId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *hashUserName; // @synthesize hashUserName=_hashUserName;
@property(retain, nonatomic) NSString *realChatName; // @synthesize realChatName=_realChatName;
@property(retain, nonatomic) NSString *toUsr; // @synthesize toUsr=_toUsr;
@property(retain, nonatomic) NSString *fromUsr; // @synthesize fromUsr=_fromUsr;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;

@end

