//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveDiscoverPreloadConfig, FinderLivePreloadInfo, FinderLiveSquareStyleInfo, FinderLiveStreamGetAsyncLoadInfoConfig, FinderLiveStreamJumpNavPrefetchControl, FinderNavLiveStreamPreloadControlConfig, FinderQuitLiveGuidePagePreloadConfig, NSData, NSMutableArray;

@interface FinderNavLiveStreamResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveStreamGetAsyncLoadInfoConfig *asyncLoadInfoConfig; // @dynamic asyncLoadInfoConfig;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *containerList; // @dynamic containerList;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSData *debugMessage; // @dynamic debugMessage;
@property(nonatomic) unsigned int flags; // @dynamic flags;
@property(retain, nonatomic) FinderLiveStreamJumpNavPrefetchControl *jumpNavPrefetchControl; // @dynamic jumpNavPrefetchControl;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) unsigned int liveCardAutoPlayFlag; // @dynamic liveCardAutoPlayFlag;
@property(retain, nonatomic) FinderLiveDiscoverPreloadConfig *liveDiscoverPreloadConfig; // @dynamic liveDiscoverPreloadConfig;
@property(retain, nonatomic) FinderLivePreloadInfo *livePreloadInfo; // @dynamic livePreloadInfo;
@property(retain, nonatomic) NSData *moreLiveObjectsBuffer; // @dynamic moreLiveObjectsBuffer;
@property(retain, nonatomic) FinderLiveDiscoverPreloadConfig *noReddotPreloadConfig; // @dynamic noReddotPreloadConfig;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(nonatomic) unsigned int prefechMinInterval; // @dynamic prefechMinInterval;
@property(retain, nonatomic) FinderNavLiveStreamPreloadControlConfig *preloadControlConfig; // @dynamic preloadControlConfig;
@property(retain, nonatomic) FinderQuitLiveGuidePagePreloadConfig *quitLiveGuidePagePreloadConfig; // @dynamic quitLiveGuidePagePreloadConfig;
@property(nonatomic) unsigned int refreshInterval; // @dynamic refreshInterval;
@property(nonatomic) _Bool skipAsyncLoadLiveInfo; // @dynamic skipAsyncLoadLiveInfo;
@property(nonatomic) _Bool skipFeedsReport; // @dynamic skipFeedsReport;
@property(nonatomic) _Bool skipGetAllLiveTabs; // @dynamic skipGetAllLiveTabs;
@property(retain, nonatomic) FinderLiveSquareStyleInfo *styleInfo; // @dynamic styleInfo;

@end

