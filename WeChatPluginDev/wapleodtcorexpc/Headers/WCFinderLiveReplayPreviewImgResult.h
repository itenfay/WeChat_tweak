//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveReplayGreateTimeModel, WCFinderLiveReplayPreviewImgInfo;

@interface WCFinderLiveReplayPreviewImgResult : NSObject
{
    MMFinderLiveReplayGreateTimeModel *_greateTimeModel;
    WCFinderLiveReplayPreviewImgInfo *_previewImgInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveReplayPreviewImgInfo *previewImgInfo; // @synthesize previewImgInfo=_previewImgInfo;
@property(retain, nonatomic) MMFinderLiveReplayGreateTimeModel *greateTimeModel; // @synthesize greateTimeModel=_greateTimeModel;
- (double)getPreviewTime;
- (id)getPreviewImgTargetUrl;
- (id)getPreviewImgUrl;

@end

