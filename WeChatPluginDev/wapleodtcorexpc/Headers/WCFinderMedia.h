//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderExtendedReading, FinderFromAppInfo, FinderLocation, FinderTopic, FinderVideoTemplateInfo, NSArray, NSMutableArray, NSString, WCFinderMediaInfo, WCFinderObjectBGMInfo, WCFinderParseContentModel;

@interface WCFinderMedia : NSObject
{
    _Bool _isLowBitRateMedia;
    _Bool _feedIsRisky;
    _Bool _hasUploadCDNSuc;
    NSString *_title;
    NSArray *_mediaArray;
    NSArray *_selectedAssetIDs;
    unsigned long long _mediaType;
    FinderLocation *_location;
    FinderExtendedReading *_extReading;
    FinderTopic *_topic;
    NSString *_contentHighlightString;
    WCFinderParseContentModel *_parseContentModel;
    NSMutableArray *_mentionContactArray;
    NSMutableArray *_mentionNicknameArray;
    WCFinderObjectBGMInfo *_finderObjectBGMInfo;
    FinderFromAppInfo *_fromAppInfo;
    FinderVideoTemplateInfo *_videoTemplateInfo;
    NSString *_flowCardDesc;
    NSMutableArray *_shortTitleArray;
    NSString *_highLightDescription;
    NSString *_liveDescriptionExtend;
    unsigned long long _LbsFlagType;
    unsigned long long _subLbsFlagType;
    double _feedLatitude;
    double _feedLongitude;
}

+ (void)backfillReportInfoFromOld:(id)arg1 newModel:(id)arg2;
+ (id)finderMediaFromObject:(id)arg1;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_liveDescriptionExtend;
+ (void)PBArrayAdd_highLightDescription;
+ (void)PBArrayAdd_feedLongitude;
+ (void)PBArrayAdd_feedLatitude;
+ (void)PBArrayAdd_subLbsFlagType;
+ (void)PBArrayAdd_LbsFlagType;
+ (void)PBArrayAdd_shortTitleArray;
+ (void)PBArrayAdd_flowCardDesc;
+ (void)PBArrayAdd_videoTemplateInfo;
+ (void)PBArrayAdd_fromAppInfo;
+ (void)PBArrayAdd_finderObjectBGMInfo;
+ (void)PBArrayAdd_mentionNicknameArray;
+ (void)PBArrayAdd_mentionContactArray;
+ (void)PBArrayAdd_parseContentModel;
+ (void)PBArrayAdd_contentHighlightString;
+ (void)PBArrayAdd_topic;
+ (void)PBArrayAdd_extReading;
+ (void)PBArrayAdd_location;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_mediaArray;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(nonatomic) double feedLongitude; // @synthesize feedLongitude=_feedLongitude;
@property(nonatomic) double feedLatitude; // @synthesize feedLatitude=_feedLatitude;
@property(nonatomic) unsigned long long subLbsFlagType; // @synthesize subLbsFlagType=_subLbsFlagType;
@property(nonatomic) unsigned long long LbsFlagType; // @synthesize LbsFlagType=_LbsFlagType;
@property(copy, nonatomic) NSString *liveDescriptionExtend; // @synthesize liveDescriptionExtend=_liveDescriptionExtend;
@property(retain, nonatomic) NSString *highLightDescription; // @synthesize highLightDescription=_highLightDescription;
@property(nonatomic) _Bool hasUploadCDNSuc; // @synthesize hasUploadCDNSuc=_hasUploadCDNSuc;
@property(retain, nonatomic) NSMutableArray *shortTitleArray; // @synthesize shortTitleArray=_shortTitleArray;
@property(nonatomic) _Bool feedIsRisky; // @synthesize feedIsRisky=_feedIsRisky;
@property(nonatomic) _Bool isLowBitRateMedia; // @synthesize isLowBitRateMedia=_isLowBitRateMedia;
@property(retain, nonatomic) NSString *flowCardDesc; // @synthesize flowCardDesc=_flowCardDesc;
@property(retain, nonatomic) FinderVideoTemplateInfo *videoTemplateInfo; // @synthesize videoTemplateInfo=_videoTemplateInfo;
@property(retain, nonatomic) FinderFromAppInfo *fromAppInfo; // @synthesize fromAppInfo=_fromAppInfo;
@property(retain, nonatomic) WCFinderObjectBGMInfo *finderObjectBGMInfo; // @synthesize finderObjectBGMInfo=_finderObjectBGMInfo;
@property(retain, nonatomic) NSMutableArray *mentionNicknameArray; // @synthesize mentionNicknameArray=_mentionNicknameArray;
@property(retain, nonatomic) NSMutableArray *mentionContactArray; // @synthesize mentionContactArray=_mentionContactArray;
@property(retain, nonatomic) WCFinderParseContentModel *parseContentModel; // @synthesize parseContentModel=_parseContentModel;
@property(retain, nonatomic) NSString *contentHighlightString; // @synthesize contentHighlightString=_contentHighlightString;
@property(retain, nonatomic) FinderTopic *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) FinderExtendedReading *extReading; // @synthesize extReading=_extReading;
@property(retain, nonatomic) FinderLocation *location; // @synthesize location=_location;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSArray *selectedAssetIDs; // @synthesize selectedAssetIDs=_selectedAssetIDs;
@property(copy, nonatomic) NSArray *mediaArray; // @synthesize mediaArray=_mediaArray;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)hasPlayMusicInfo;
- (id)getMaterialLbsLocation;
- (_Bool)isCompleteLocalRes;
- (id)getDisplayLocation;
@property(copy, nonatomic) NSString *postShortTitle;
- (void)setfeedIsRisky:(_Bool)arg1;
@property(readonly, copy) NSString *description;
- (id)genObjectDesc;
- (id)init;
@property(readonly, nonatomic) WCFinderMediaInfo *currentMedia;
- (id)archivedWCTValue;
@property(nonatomic) struct CLLocationCoordinate2D feedLocation;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

