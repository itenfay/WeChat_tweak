//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FeedsPreviewJoinLiveMultiStyleInfo_ManueTriggerJoinLive, MMFinderLiveFeedTransferLogic, MMLiveEnterRoomActionModel;

@interface WCFinderFeedStreamLiveCellRouterModel : NSObject
{
    MMLiveEnterRoomActionModel *_enterActionModel;
    FeedsPreviewJoinLiveMultiStyleInfo_ManueTriggerJoinLive *_feedStreamJoinLiveStyleInfo;
    MMFinderLiveFeedTransferLogic *_transferCtx;
    unsigned long long _fromSource;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long fromSource; // @synthesize fromSource=_fromSource;
@property(retain, nonatomic) MMFinderLiveFeedTransferLogic *transferCtx; // @synthesize transferCtx=_transferCtx;
@property(retain, nonatomic) FeedsPreviewJoinLiveMultiStyleInfo_ManueTriggerJoinLive *feedStreamJoinLiveStyleInfo; // @synthesize feedStreamJoinLiveStyleInfo=_feedStreamJoinLiveStyleInfo;
@property(retain, nonatomic) MMLiveEnterRoomActionModel *enterActionModel; // @synthesize enterActionModel=_enterActionModel;

@end

