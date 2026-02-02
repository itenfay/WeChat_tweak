//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJPublisherContext, OMJPublisherSessionMetrics, OrderedDictionary;

@interface MJMovieTemplateViewModel
{
    OMJPublisherSessionMetrics *_publisherSessionMetrics;
    MJPublisherContext *_publisherContext;
    OrderedDictionary *_showedTemplateListMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OrderedDictionary *showedTemplateListMap; // @synthesize showedTemplateListMap=_showedTemplateListMap;
@property(retain, nonatomic) MJPublisherContext *publisherContext; // @synthesize publisherContext=_publisherContext;
@property(retain, nonatomic) OMJPublisherSessionMetrics *publisherSessionMetrics; // @synthesize publisherSessionMetrics=_publisherSessionMetrics;
- (void)didExportWithTemplateInfo:(id)arg1 musicInfo:(id)arg2;
- (void)didStartEditingSegmentWithTemplateInfo:(id)arg1;
- (void)didSelectMusicSearchResult:(id)arg1 atIndex:(long long)arg2;
- (void)didEnterSearchingMusic;
- (void)didSelectMusic:(id)arg1 atIndex:(long long)arg2 fromBelonger:(long long)arg3;
- (void)didSwitchOST:(_Bool)arg1 fromBelonger:(long long)arg2;
- (void)didSwitchBGM:(_Bool)arg1 fromBelonger:(long long)arg2;
- (void)didSelectTemplate:(id)arg1 atIndex:(long long)arg2 fromBelonger:(long long)arg3;
- (void)_reportExposeTemplate:(id)arg1 atIndex:(long long)arg2;
- (void)didShowTemplate:(id)arg1 atIndex:(long long)arg2 fromBelonger:(long long)arg3;
- (id)initWithAssetInfoList:(id)arg1 options:(id)arg2;

@end

