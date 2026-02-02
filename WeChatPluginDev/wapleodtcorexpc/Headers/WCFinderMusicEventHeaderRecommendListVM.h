//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderMusicTopicInfo;

@interface WCFinderMusicEventHeaderRecommendListVM : NSObject
{
    FinderMusicTopicInfo *_musicTopicInfo;
}

+ (unsigned long long)templateListCountOfMusicTopicInfo:(id)arg1;
+ (unsigned long long)recommendMusicListCountOfMusicTopicInfo:(id)arg1;
+ (unsigned long long)dataCountOfMusicTopicInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderMusicTopicInfo *musicTopicInfo; // @synthesize musicTopicInfo=_musicTopicInfo;
- (_Bool)isTemplateIndex:(unsigned long long)arg1;
- (id)recommendMusicOfIndex:(unsigned long long)arg1;
- (_Bool)isRecommendMusicIndex:(unsigned long long)arg1;
- (id)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)templateListCount;
- (unsigned long long)recommendMusicListCount;
- (unsigned long long)dataCount;
- (void)updateWithMusicTopicInfo:(id)arg1;

@end

