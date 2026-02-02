//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, OMJID, OMJMusicInfo;

@interface OMJTemplateBuildResult : NSObject
{
    _Bool _usingBlankTemplate;
    NSString *_templateID;
    OMJMusicInfo *_seletecedMusicInfo;
    NSArray *_templateMusicInfos;
    NSArray *_recommendedMusicInfos;
    OMJID *_resultID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) OMJID *resultID; // @synthesize resultID=_resultID;
@property(readonly, nonatomic) NSArray *recommendedMusicInfos; // @synthesize recommendedMusicInfos=_recommendedMusicInfos;
@property(readonly, nonatomic) NSArray *templateMusicInfos; // @synthesize templateMusicInfos=_templateMusicInfos;
@property(readonly, nonatomic) OMJMusicInfo *seletecedMusicInfo; // @synthesize seletecedMusicInfo=_seletecedMusicInfo;
@property(readonly, nonatomic) _Bool usingBlankTemplate; // @synthesize usingBlankTemplate=_usingBlankTemplate;
@property(readonly, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
- (id)description;
- (id)initWithBackingResult:(const void *)arg1;

@end

