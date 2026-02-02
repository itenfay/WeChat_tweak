//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderMention, FinderObject, NSMutableArray, NSString, NewLifeAutoShowInfo, NewLifeDetailReportInfo, NewLifeDetailThumbInfo, NewLifeFinderPostInfo;

@interface NewLifeDetailInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NewLifeAutoShowInfo *autoShowInfo; // @dynamic autoShowInfo;
@property(nonatomic) _Bool canOperateDiscoverSearch; // @dynamic canOperateDiscoverSearch;
@property(retain, nonatomic) NewLifeDetailThumbInfo *detailThumbInfo; // @dynamic detailThumbInfo;
@property(nonatomic) _Bool disableEdgeSlide; // @dynamic disableEdgeSlide;
@property(nonatomic) unsigned int enterScene; // @dynamic enterScene;
@property(nonatomic) unsigned int entryScene; // @dynamic entryScene;
@property(retain, nonatomic) FinderMention *finderMention; // @dynamic finderMention;
@property(retain, nonatomic) FinderObject *finderObj; // @dynamic finderObj;
@property(nonatomic) _Bool isAuthorStatus; // @dynamic isAuthorStatus;
@property(nonatomic) _Bool isDiscoverSearchEnabled; // @dynamic isDiscoverSearchEnabled;
@property(nonatomic) _Bool isInitWithLoading; // @dynamic isInitWithLoading;
@property(nonatomic) _Bool isPreview; // @dynamic isPreview;
@property(nonatomic) _Bool isShowSkipHome; // @dynamic isShowSkipHome;
@property(nonatomic) _Bool needGetDetail; // @dynamic needGetDetail;
@property(nonatomic) _Bool needRecommendStream; // @dynamic needRecommendStream;
@property(retain, nonatomic) NewLifeFinderPostInfo *postInfo; // @dynamic postInfo;
@property(retain, nonatomic) NSMutableArray *relatedStreamLastBuffer; // @dynamic relatedStreamLastBuffer;
@property(retain, nonatomic) NewLifeDetailReportInfo *reportInfo; // @dynamic reportInfo;
@property(retain, nonatomic) NSString *udfKv; // @dynamic udfKv;

@end

