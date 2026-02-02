//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingAudioRadioSquareDataServiceCpp
{
}

+ (int)feedItemSourceType:(id)arg1;
+ (id)sharedInstance;
- (id)radioShutdownController;
- (void)editSectionMixFeedItem:(id)arg1 categoryId:(id)arg2 index:(int)arg3 operation:(int)arg4;
- (int)getSectionUnreadCount:(id)arg1;
- (id)getAllSectionData;
- (id)getCacheSectionData;
- (void)initSectionReq:(id)arg1 clearData:(_Bool)arg2 reportSession:(id)arg3;
- (void)initSectionData:(id)arg1;
- (void)updateRadioItemSession:(id)arg1;
- (void)playCurrentPage:(int)arg1;
- (void)onCurrentPageChanged:(int)arg1 reason:(int)arg2;
- (void)previous;
- (void)autoNext;
- (void)next;
- (int)getLoadingStatus;
- (_Bool)hasMore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

