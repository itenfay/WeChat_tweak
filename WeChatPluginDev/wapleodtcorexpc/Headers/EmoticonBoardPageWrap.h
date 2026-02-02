//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonTabRecommendItem, NSString, OrderedDictionary;

@interface EmoticonBoardPageWrap
{
    unsigned long long _pageType;
    NSString *_pid;
    NSString *_packageName;
    unsigned long long _packEmoticonCount;
    EmoticonTabRecommendItem *_recommendItem;
    OrderedDictionary *_packedIPDictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OrderedDictionary *packedIPDictionary; // @synthesize packedIPDictionary=_packedIPDictionary;
@property(retain, nonatomic) EmoticonTabRecommendItem *recommendItem; // @synthesize recommendItem=_recommendItem;
@property(nonatomic) unsigned long long packEmoticonCount; // @synthesize packEmoticonCount=_packEmoticonCount;
@property(retain, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;

@end

