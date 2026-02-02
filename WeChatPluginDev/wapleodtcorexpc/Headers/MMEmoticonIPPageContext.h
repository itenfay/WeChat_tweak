//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmotionBannerSet, StoreEmotionAllListReportInfo;

@interface MMEmoticonIPPageContext
{
    EmotionBannerSet *_bannerSet;
    StoreEmotionAllListReportInfo *_reportInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) StoreEmotionAllListReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(retain, nonatomic) EmotionBannerSet *bannerSet; // @synthesize bannerSet=_bannerSet;
- (_Bool)allowsInEmoticonLimited;
- (id)pageCreator;
- (_Bool)isValid;

@end

