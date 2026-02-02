//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLivePreloadInfo, FinderLiveSquareStyleInfo, FinderLiveStreamGetAsyncLoadInfoConfig, FinderThemeLiveStreamAppearance, FinderThemeLiveStreamShareInfo, NSData, NSMutableArray;

@interface FinderThemeLiveStreamResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int aggrcardPrefetchInterval; // @dynamic aggrcardPrefetchInterval;
@property(retain, nonatomic) FinderLiveStreamGetAsyncLoadInfoConfig *asyncLoadInfoConfig; // @dynamic asyncLoadInfoConfig;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *containerList; // @dynamic containerList;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSData *debugMessage; // @dynamic debugMessage;
@property(nonatomic) unsigned int flags; // @dynamic flags;
@property(nonatomic) _Bool getRandomLiveEnablePreload; // @dynamic getRandomLiveEnablePreload;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) FinderLivePreloadInfo *livePreloadInfo; // @dynamic livePreloadInfo;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(nonatomic) unsigned int prefechMinInterval; // @dynamic prefechMinInterval;
@property(nonatomic) unsigned int refreshInterval; // @dynamic refreshInterval;
@property(nonatomic) _Bool skipAsyncLoadLiveInfo; // @dynamic skipAsyncLoadLiveInfo;
@property(nonatomic) _Bool skipFeedsReport; // @dynamic skipFeedsReport;
@property(nonatomic) _Bool skipGetAllLiveTabs; // @dynamic skipGetAllLiveTabs;
@property(retain, nonatomic) FinderLiveSquareStyleInfo *styleInfo; // @dynamic styleInfo;
@property(retain, nonatomic) FinderThemeLiveStreamAppearance *themeAppearance; // @dynamic themeAppearance;
@property(retain, nonatomic) FinderThemeLiveStreamShareInfo *themeShareInfo; // @dynamic themeShareInfo;

@end

