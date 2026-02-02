//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdvertiseInfo;
@protocol WCAdFinderLiveNoticePolymericLogicDelegate;

@interface WCAdFinderLiveNoticePolymericLogic
{
    unsigned int _finderLiveStartTime;
    id <WCAdFinderLiveNoticePolymericLogicDelegate> _delegate;
    NSString *_finderUsername;
    NSString *_finderLiveNoticeId;
    WCAdvertiseInfo *_adData;
    NSString *_snsId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *snsId; // @synthesize snsId=_snsId;
@property(retain, nonatomic) WCAdvertiseInfo *adData; // @synthesize adData=_adData;
@property(nonatomic) unsigned int finderLiveStartTime; // @synthesize finderLiveStartTime=_finderLiveStartTime;
@property(retain, nonatomic) NSString *finderLiveNoticeId; // @synthesize finderLiveNoticeId=_finderLiveNoticeId;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) __weak id <WCAdFinderLiveNoticePolymericLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isFinderLiveExpired;
- (_Bool)isFinderLiveAvailable;
- (void)reportFinderLiveNoticeReserveResult:(int)arg1;
- (void)jumpToProfile;
- (void)submitNotice;
- (void)onFinderLiveNoticeStatusUpdatedWith:(int)arg1;
- (void)updateFinderLiveNoticeStatusRemote;
- (void)doLogic;
- (_Bool)willJumpToFinderProfile;
- (void)tryToUpdateFinderLiveNoticeStatus;
- (id)initWithFinderUsername:(id)arg1 finderLiveNoticeId:(id)arg2 finderLiveStartTime:(unsigned int)arg3 adData:(id)arg4 snsId:(id)arg5;

@end

