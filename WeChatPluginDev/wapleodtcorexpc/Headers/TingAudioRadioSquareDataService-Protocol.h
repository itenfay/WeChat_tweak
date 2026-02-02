//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class AudioRadioPullLineReportData, AudioRadioSectionCachePacket, MMListenAudioMixFeedItem, NSArray, NSString, SdkUIContext;
@protocol TingPlayerShutdownController;

@protocol TingAudioRadioSquareDataService <NSObject, UnitRCBaseProtocol>
- (id <TingPlayerShutdownController>)radioShutdownController;
- (void)editSectionMixFeedItem:(MMListenAudioMixFeedItem *)arg1 categoryId:(NSString *)arg2 index:(int)arg3 operation:(int)arg4;
- (int)getSectionUnreadCount:(NSString *)arg1;
- (NSArray *)getAllSectionData;
- (AudioRadioSectionCachePacket *)getCacheSectionData;
- (void)initSectionReq:(NSArray *)arg1 clearData:(_Bool)arg2 reportSession:(AudioRadioPullLineReportData *)arg3;
- (void)initSectionData:(NSArray *)arg1;
- (void)updateRadioItemSession:(SdkUIContext *)arg1;
- (void)playCurrentPage:(int)arg1;
- (void)onCurrentPageChanged:(int)arg1 reason:(int)arg2;
- (void)previous;
- (void)autoNext;
- (void)next;
- (int)getLoadingStatus;
- (_Bool)hasMore;
@end

