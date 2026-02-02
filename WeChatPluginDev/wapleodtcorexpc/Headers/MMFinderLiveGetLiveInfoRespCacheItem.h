//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderGetLiveInfoModel, WCFinderLiveInfo;

@interface MMFinderLiveGetLiveInfoRespCacheItem : NSObject
{
    unsigned int _noticeType;
    WCFinderLiveInfo *_liveInfo;
    WCFinderGetLiveInfoModel *_getLiveInfoModel;
    NSString *_reportExtInfo;
    NSString *_tipsId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tipsId; // @synthesize tipsId=_tipsId;
@property(nonatomic) unsigned int noticeType; // @synthesize noticeType=_noticeType;
@property(retain, nonatomic) NSString *reportExtInfo; // @synthesize reportExtInfo=_reportExtInfo;
@property(retain, nonatomic) WCFinderGetLiveInfoModel *getLiveInfoModel; // @synthesize getLiveInfoModel=_getLiveInfoModel;
@property(retain, nonatomic) WCFinderLiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;

@end

