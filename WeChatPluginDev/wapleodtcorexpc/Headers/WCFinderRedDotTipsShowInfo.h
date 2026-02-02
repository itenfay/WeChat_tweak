//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AttributeTitle, FinderPopupShowInfo, FinderTipsShowInfo_DSLRender, FinderTipsShowInfo_IconSize, NSData, NSMutableArray, NSString, WCFinderRedDotShowInfoRenderInfo, WCFinderTipsShowClientStatsInfo;

@interface WCFinderRedDotTipsShowInfo : NSObject
{
    int _showExtInfoType;
    unsigned int _cacheChangeTabOption;
    unsigned long long _showType;
    unsigned long long _count;
    NSString *_title;
    NSString *_iconUrl;
    NSString *_path;
    unsigned long long _clearType;
    NSString *_parent;
    NSData *_showExtInfo;
    NSMutableArray *_multiIconUrls;
    WCFinderTipsShowClientStatsInfo *_clientStatsInfo;
    unsigned long long _showLiveTabId;
    unsigned long long _ignoreFreqLimit;
    unsigned long long _exposeCountLimit;
    unsigned long long _exposeLimitStrategy;
    unsigned long long _coldTime;
    AttributeTitle *_attributeTitleConfig;
    FinderTipsShowInfo_DSLRender *_dslRender;
    WCFinderRedDotShowInfoRenderInfo *_cacheDSLRenderInfo;
    WCFinderRedDotShowInfoRenderInfo *_cacheNonDSLRenderInfo;
    NSString *_language;
    NSString *_tipsUuid;
    NSMutableArray *_revokeConfigArray;
    unsigned long long _buildMsTimeStamp;
    NSString *_redDotDetailInfoReport;
    FinderPopupShowInfo *_popupShowInfo;
    FinderTipsShowInfo_IconSize *_bigCardImageSize;
}

+ (id)showInfoWith:(id)arg1 tipsUuid:(id)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_bigCardImageSize;
+ (void)PBArrayAdd_popupShowInfo;
+ (void)PBArrayAdd_buildMsTimeStamp;
+ (void)PBArrayAdd_revokeConfigArray;
+ (void)PBArrayAdd_language;
+ (void)PBArrayAdd_tipsUuid;
+ (void)PBArrayAdd_dslRender;
+ (void)PBArrayAdd_cacheChangeTabOption;
+ (void)PBArrayAdd_attributeTitleConfig;
+ (void)PBArrayAdd_coldTime;
+ (void)PBArrayAdd_exposeLimitStrategy;
+ (void)PBArrayAdd_exposeCountLimit;
+ (void)PBArrayAdd_ignoreFreqLimit;
+ (void)PBArrayAdd_showLiveTabId;
+ (void)PBArrayAdd_clientStatsInfo;
+ (void)PBArrayAdd_multiIconUrls;
+ (void)PBArrayAdd_showExtInfo;
+ (void)PBArrayAdd_showExtInfoType;
+ (void)PBArrayAdd_parent;
+ (void)PBArrayAdd_clearType;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_count;
+ (void)PBArrayAdd_showType;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderTipsShowInfo_IconSize *bigCardImageSize; // @synthesize bigCardImageSize=_bigCardImageSize;
@property(retain, nonatomic) FinderPopupShowInfo *popupShowInfo; // @synthesize popupShowInfo=_popupShowInfo;
@property(copy, nonatomic) NSString *redDotDetailInfoReport; // @synthesize redDotDetailInfoReport=_redDotDetailInfoReport;
@property(nonatomic) unsigned long long buildMsTimeStamp; // @synthesize buildMsTimeStamp=_buildMsTimeStamp;
@property(retain, nonatomic) NSMutableArray *revokeConfigArray; // @synthesize revokeConfigArray=_revokeConfigArray;
@property(copy, nonatomic) NSString *tipsUuid; // @synthesize tipsUuid=_tipsUuid;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) WCFinderRedDotShowInfoRenderInfo *cacheNonDSLRenderInfo; // @synthesize cacheNonDSLRenderInfo=_cacheNonDSLRenderInfo;
@property(retain, nonatomic) WCFinderRedDotShowInfoRenderInfo *cacheDSLRenderInfo; // @synthesize cacheDSLRenderInfo=_cacheDSLRenderInfo;
@property(retain, nonatomic) FinderTipsShowInfo_DSLRender *dslRender; // @synthesize dslRender=_dslRender;
@property(nonatomic) unsigned int cacheChangeTabOption; // @synthesize cacheChangeTabOption=_cacheChangeTabOption;
@property(retain, nonatomic) AttributeTitle *attributeTitleConfig; // @synthesize attributeTitleConfig=_attributeTitleConfig;
@property(nonatomic) unsigned long long coldTime; // @synthesize coldTime=_coldTime;
@property(nonatomic) unsigned long long exposeLimitStrategy; // @synthesize exposeLimitStrategy=_exposeLimitStrategy;
@property(nonatomic) unsigned long long exposeCountLimit; // @synthesize exposeCountLimit=_exposeCountLimit;
@property(nonatomic) unsigned long long ignoreFreqLimit; // @synthesize ignoreFreqLimit=_ignoreFreqLimit;
@property(nonatomic) unsigned long long showLiveTabId; // @synthesize showLiveTabId=_showLiveTabId;
@property(retain, nonatomic) WCFinderTipsShowClientStatsInfo *clientStatsInfo; // @synthesize clientStatsInfo=_clientStatsInfo;
@property(retain, nonatomic) NSMutableArray *multiIconUrls; // @synthesize multiIconUrls=_multiIconUrls;
@property(retain, nonatomic) NSData *showExtInfo; // @synthesize showExtInfo=_showExtInfo;
@property(nonatomic) int showExtInfoType; // @synthesize showExtInfoType=_showExtInfoType;
@property(retain, nonatomic) NSString *parent; // @synthesize parent=_parent;
@property(nonatomic) unsigned long long clearType; // @synthesize clearType=_clearType;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long showType; // @synthesize showType=_showType;
- (unsigned long long)popUpquickSwipeDownCnt;
- (unsigned long long)popUpSwipeDownCnt;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (id)displayFallbackTruncatedWording;
- (id)generateFinderShowInfo;
- (id)getKVReportIconUrl;
- (id)getKVReportContent;
- (id)getSDKReportParamsWithCtrlInfo:(id)arg1;
- (id)getSDKReportParams;
- (void)bindNonDSLRedDotModel:(id)arg1 entryAvailableWidth:(double)arg2 entryScene:(unsigned long long)arg3;
- (void)bindDSLRedDotModel:(id)arg1 entryAvailableWidth:(double)arg2 entryScene:(unsigned long long)arg3;
- (id)getEntranceReportRedDotExtInfo;
- (id)getReportRedDotExt;
- (id)checkToReturnRedDotExtReportInfo;
- (id)getRedDotExtReportInfo;
- (long long)getPersonalCenterIncreaseRedDotCountExceptPrivateMsg;
- (id)genFinderEntranceMergeDetailDic;
- (id)tipsFinderEntranceExtInfo;
- (id)tipsShowTabExtInfo;
- (id)tipsFinderMentionExtInfo;
- (id)tipsWxMentionExtInfo;
- (id)tipsShowEntranceExtInfo;
- (id)tipsShowDiscoveryExtInfo;
- (long long)multiAvatarShowCountLimit;
- (_Bool)isTitleCapsuleRedDot;
- (_Bool)isMultiAvatorRedDot;
- (_Bool)isRightCircleImageShowType;
- (_Bool)isImageIconHiddenRedDot;
- (_Bool)isTitleAtRight;
- (_Bool)isSquareIconShowType;
- (_Bool)isLittleIconShowType;
- (_Bool)isImageIconShowType;
- (_Bool)isValidAttributeTitleConfig;
- (_Bool)isVaildInfo;
- (_Bool)checkIfNeedSyncSvrColdTimeExpired;
- (id)ctrlInfoFinderExtInfo;
- (id)ctrlExtInfo;
- (unsigned long long)ctrlInfoBusinessType;
- (unsigned long long)ctrlInfoType;
- (id)tipsID;
- (id)bindCtrlInfo;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

