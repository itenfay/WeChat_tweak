//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ABAReportPrams, FinderVideoTemplateInfo, NSDictionary, WCFinderPostSessionModel;

@interface MMShortVideoParamModel : NSObject
{
    _Bool _immediately;
    _Bool _isMuted;
    _Bool _frontCamera;
    _Bool _hasMutation;
    WCFinderPostSessionModel *_finderPostModel;
    ABAReportPrams *_videoScoreParams;
    FinderVideoTemplateInfo *_tempalteInfo;
    NSDictionary *_userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) FinderVideoTemplateInfo *tempalteInfo; // @synthesize tempalteInfo=_tempalteInfo;
@property(retain, nonatomic) ABAReportPrams *videoScoreParams; // @synthesize videoScoreParams=_videoScoreParams;
@property(retain, nonatomic) WCFinderPostSessionModel *finderPostModel; // @synthesize finderPostModel=_finderPostModel;
@property(nonatomic) _Bool hasMutation; // @synthesize hasMutation=_hasMutation;
@property(nonatomic) _Bool frontCamera; // @synthesize frontCamera=_frontCamera;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(nonatomic) _Bool immediately; // @synthesize immediately=_immediately;
- (id)init;

@end

