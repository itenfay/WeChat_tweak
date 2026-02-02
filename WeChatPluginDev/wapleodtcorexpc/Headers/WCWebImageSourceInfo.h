//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, NSString, NSURL;

@interface WCWebImageSourceInfo
{
    unsigned int _type;
    NSString *_sourceName;
    NSString *_sourceTitle;
    NSURL *_sourceIconUrl;
    NSObject *_sourceData;
    NSString *_searchReqKey;
    long long _searchScene;
}

+ (id)imageSourceInfoFromDictionary:(id)arg1;
+ (id)imageSourceInfoForPlaceHolder;
- (void).cxx_destruct;
@property(nonatomic) long long searchScene; // @synthesize searchScene=_searchScene;
@property(copy, nonatomic) NSString *searchReqKey; // @synthesize searchReqKey=_searchReqKey;
@property(retain, nonatomic) NSObject *sourceData; // @synthesize sourceData=_sourceData;
@property(retain, nonatomic) NSURL *sourceIconUrl; // @synthesize sourceIconUrl=_sourceIconUrl;
@property(copy, nonatomic) NSString *sourceTitle; // @synthesize sourceTitle=_sourceTitle;
@property(copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(nonatomic) unsigned int type; // @synthesize type=_type;

@end

