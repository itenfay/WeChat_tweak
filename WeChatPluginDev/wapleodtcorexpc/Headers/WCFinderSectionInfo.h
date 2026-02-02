//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderGetRelatedListResp, FinderGetTopicListResponse, FinderStreamResponse, NSString;

@interface WCFinderSectionInfo : NSObject
{
    int _sectionType;
    int _iconType;
    int _moreActionType;
    unsigned int _recommendType;
    NSString *_sectionTitle;
    NSString *_sectionId;
    NSString *_sectionDesc;
    NSString *_sectionSubTitle;
    NSString *_iconUrlLight;
    NSString *_iconUrlDark;
    FinderGetTopicListResponse *_topicResp;
    FinderStreamResponse *_streamResp;
    FinderGetRelatedListResp *_relatedResp;
    unsigned long long _refreshTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) unsigned int recommendType; // @synthesize recommendType=_recommendType;
@property(retain, nonatomic) FinderGetRelatedListResp *relatedResp; // @synthesize relatedResp=_relatedResp;
@property(retain, nonatomic) FinderStreamResponse *streamResp; // @synthesize streamResp=_streamResp;
@property(retain, nonatomic) FinderGetTopicListResponse *topicResp; // @synthesize topicResp=_topicResp;
@property(nonatomic) int moreActionType; // @synthesize moreActionType=_moreActionType;
@property(retain, nonatomic) NSString *iconUrlDark; // @synthesize iconUrlDark=_iconUrlDark;
@property(retain, nonatomic) NSString *iconUrlLight; // @synthesize iconUrlLight=_iconUrlLight;
@property(retain, nonatomic) NSString *sectionSubTitle; // @synthesize sectionSubTitle=_sectionSubTitle;
@property(nonatomic) int iconType; // @synthesize iconType=_iconType;
@property(nonatomic) int sectionType; // @synthesize sectionType=_sectionType;
@property(retain, nonatomic) NSString *sectionDesc; // @synthesize sectionDesc=_sectionDesc;
@property(retain, nonatomic) NSString *sectionId; // @synthesize sectionId=_sectionId;
@property(retain, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
- (id)genPBSectionInfo;

@end

