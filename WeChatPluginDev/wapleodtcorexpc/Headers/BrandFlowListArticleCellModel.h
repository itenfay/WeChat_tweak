//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BrandFlowListArticleCellModel
{
    unsigned int _itemShowType;
    unsigned int _sceneToAppendUrl;
    unsigned int _subSceneToAppendUrl;
    unsigned int _bizUin;
    unsigned int _mid;
    unsigned int _idx;
    NSString *_url;
    NSString *_title;
}

+ (id)convertFromReaderWrap:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int idx; // @synthesize idx=_idx;
@property(nonatomic) unsigned int mid; // @synthesize mid=_mid;
@property(nonatomic) unsigned int bizUin; // @synthesize bizUin=_bizUin;
@property(nonatomic) unsigned int subSceneToAppendUrl; // @synthesize subSceneToAppendUrl=_subSceneToAppendUrl;
@property(nonatomic) unsigned int sceneToAppendUrl; // @synthesize sceneToAppendUrl=_sceneToAppendUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)getArticleUrl;

@end

