//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OrderedDictionary;

@interface MMBGMSelectedTemplateTabViewModel
{
    NSString *_templateID;
    OrderedDictionary *_musicInfoDictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OrderedDictionary *musicInfoDictionary; // @synthesize musicInfoDictionary=_musicInfoDictionary;
@property(copy, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
- (void)videoProducerViewModel:(id)arg1 didGetExtRecommendMusics:(id)arg2 forTemplateID:(id)arg3;
- (_Bool)isReccommentdTabModel;
- (void)addMusicInfos:(id)arg1;
- (unsigned long long)indexOfMusicInfo:(id)arg1;
- (void)setMusicDataToFirst:(id)arg1;
- (void)addMusicData:(id)arg1;
- (id)dataAtIndex:(unsigned long long)arg1;
- (_Bool)hasMoreData;
- (void)loadMoreData;
- (unsigned long long)dataCount;
- (id)initWithTemplateID:(id)arg1 musicInfos:(id)arg2;

@end

