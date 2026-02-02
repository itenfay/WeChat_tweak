//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderClientStatus, FinderLivePermissionVerifyInfo, FinderLiveReportBaseInfo, NSString, StreamTabTipsInfo, WCFinderGetDetailDataItemCGIConfig, WCFinderPushFeedViewProductParams;

@interface WCFinderGetCommentDetailDataItemCGIParams : NSObject
{
    _Bool _preloadFirstFrameInWIFI;
    _Bool _isPrefetchRequest;
    StreamTabTipsInfo *_tabTipsInfo;
    WCFinderPushFeedViewProductParams *_productInfo;
    NSString *_fluencyReportSceneKey;
    WCFinderGetDetailDataItemCGIConfig *_config;
    FinderLivePermissionVerifyInfo *_verifyInfo;
    FinderClientStatus *_clientStatus;
    FinderLiveReportBaseInfo *_liveReportBaseInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo; // @synthesize liveReportBaseInfo=_liveReportBaseInfo;
@property(retain, nonatomic) FinderClientStatus *clientStatus; // @synthesize clientStatus=_clientStatus;
@property(retain, nonatomic) FinderLivePermissionVerifyInfo *verifyInfo; // @synthesize verifyInfo=_verifyInfo;
@property(retain, nonatomic) WCFinderGetDetailDataItemCGIConfig *config; // @synthesize config=_config;
@property(copy, nonatomic) NSString *fluencyReportSceneKey; // @synthesize fluencyReportSceneKey=_fluencyReportSceneKey;
@property(nonatomic) _Bool isPrefetchRequest; // @synthesize isPrefetchRequest=_isPrefetchRequest;
@property(nonatomic) _Bool preloadFirstFrameInWIFI; // @synthesize preloadFirstFrameInWIFI=_preloadFirstFrameInWIFI;
@property(retain, nonatomic) WCFinderPushFeedViewProductParams *productInfo; // @synthesize productInfo=_productInfo;
@property(retain, nonatomic) StreamTabTipsInfo *tabTipsInfo; // @synthesize tabTipsInfo=_tabTipsInfo;

@end

