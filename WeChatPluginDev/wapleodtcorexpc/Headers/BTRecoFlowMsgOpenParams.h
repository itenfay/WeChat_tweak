//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BTRecoFlowMsgOpenParams
{
    _Bool _isOpenAggregationUrl;
    _Bool _hasItemShowType;
    unsigned int _itemShowType;
    unsigned int _style;
    NSString *_aggregationUrl;
    NSString *_contentUrl;
    NSString *_title;
    NSString *_digest;
    NSString *_userName;
    NSString *_nickName;
    NSString *_finderFeedXml;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *finderFeedXml; // @synthesize finderFeedXml=_finderFeedXml;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(nonatomic) _Bool hasItemShowType; // @synthesize hasItemShowType=_hasItemShowType;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *digest; // @synthesize digest=_digest;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *contentUrl; // @synthesize contentUrl=_contentUrl;
@property(retain, nonatomic) NSString *aggregationUrl; // @synthesize aggregationUrl=_aggregationUrl;
@property(nonatomic) _Bool isOpenAggregationUrl; // @synthesize isOpenAggregationUrl=_isOpenAggregationUrl;
- (id)genWithRecommendItemMsg:(id)arg1;
- (_Bool)isOpenAggregationValid;
- (_Bool)isValid;

@end

