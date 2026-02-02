//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, WCAdConventionalHalfScreenReportVideoInfo;

@interface WCAdConventionalHalfScreenReportModel
{
    int _pinToTop;
    unsigned long long _stayTime;
    unsigned long long _clickToFullScreenCount;
    unsigned long long _dragToFullScreenCount;
    WCAdConventionalHalfScreenReportVideoInfo *_videoInfo;
    NSMutableArray *_gridItems;
}

+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *gridItems; // @synthesize gridItems=_gridItems;
@property(retain, nonatomic) WCAdConventionalHalfScreenReportVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) int pinToTop; // @synthesize pinToTop=_pinToTop;
@property(nonatomic) unsigned long long dragToFullScreenCount; // @synthesize dragToFullScreenCount=_dragToFullScreenCount;
@property(nonatomic) unsigned long long clickToFullScreenCount; // @synthesize clickToFullScreenCount=_clickToFullScreenCount;
@property(nonatomic) unsigned long long stayTime; // @synthesize stayTime=_stayTime;
- (void)increaseGridExposureCountWithIndex:(long long)arg1;

@end

