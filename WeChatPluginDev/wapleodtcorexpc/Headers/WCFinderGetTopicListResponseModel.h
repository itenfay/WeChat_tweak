//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderGetTopicListResponse, FinderTopicBgmInfo, NSArray, NSData, NSString, WCFinderTopicInfo;

@interface WCFinderGetTopicListResponseModel : NSObject
{
    _Bool _continueFlag;
    _Bool _upContinueFlag;
    _Bool _downContinueFlag;
    _Bool _similarFlag;
    _Bool _hasPrefetched;
    unsigned int _feedFollowPermissionFlag;
    unsigned int _disabledFlag;
    unsigned int _reviseFeedCount;
    NSData *_lastBuff;
    unsigned long long _totalCount;
    NSArray *_dataArray;
    WCFinderTopicInfo *_topicInfo;
    NSArray *_poiTopicRecommendArray;
    NSString *_subtitle;
    FinderTopicBgmInfo *_bgmInfo;
    FinderGetTopicListResponse *_resp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderGetTopicListResponse *resp; // @synthesize resp=_resp;
@property(nonatomic) _Bool hasPrefetched; // @synthesize hasPrefetched=_hasPrefetched;
@property(nonatomic) unsigned int reviseFeedCount; // @synthesize reviseFeedCount=_reviseFeedCount;
@property(nonatomic) unsigned int disabledFlag; // @synthesize disabledFlag=_disabledFlag;
@property(nonatomic) unsigned int feedFollowPermissionFlag; // @synthesize feedFollowPermissionFlag=_feedFollowPermissionFlag;
@property(retain, nonatomic) FinderTopicBgmInfo *bgmInfo; // @synthesize bgmInfo=_bgmInfo;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSArray *poiTopicRecommendArray; // @synthesize poiTopicRecommendArray=_poiTopicRecommendArray;
@property(nonatomic) _Bool similarFlag; // @synthesize similarFlag=_similarFlag;
@property(retain, nonatomic) WCFinderTopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) _Bool downContinueFlag; // @synthesize downContinueFlag=_downContinueFlag;
@property(nonatomic) _Bool upContinueFlag; // @synthesize upContinueFlag=_upContinueFlag;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;

@end

