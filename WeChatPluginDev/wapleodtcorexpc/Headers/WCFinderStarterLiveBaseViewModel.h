//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderLiveStartePublicModel;

@interface WCFinderStarterLiveBaseViewModel : NSObject
{
    WCFinderLiveStartePublicModel *_publicModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveStartePublicModel *publicModel; // @synthesize publicModel=_publicModel;
- (long long)getLiveSubMode;
- (id)getVisibilityUsernameList;
- (id)getVisibilityChatRoomIdList;
- (id)getVisibilityFileIdLists;
- (void)updateCurrentLiveStarterVC:(id)arg1;
- (void)checkLoadSelfHeadImg;
- (void)updateLiveBulletinInfo:(id)arg1;
- (id)toLiveCreateParamsModel;
- (void)updateVisibilityMode:(long long)arg1;
- (void)updateLiveNoticeInfo;
- (void)updateLiveNoticeList:(id)arg1;
- (void)updateLiveShareItem:(id)arg1;
- (void)udpateDataItemMediaType;
- (void)updateDataItemMedia:(id)arg1;
- (void)setLiveChargableWithFlag:(long long)arg1 liveMode:(int)arg2 chargeUnitPriceInWecoin:(unsigned int)arg3 purchaseLivePreviewType:(long long)arg4 trialTimeHour:(unsigned int)arg5 trialTimeMinute:(unsigned int)arg6 freeOfChargeChatroomIdList:(id)arg7 freeOfChargeUsernameList:(id)arg8 fullFreeOfChargeContactList:(id)arg9 selectedFreeRosterList:(id)arg10 memberFree:(_Bool)arg11;
- (void)setVisibilityMode:(long long)arg1 liveMode:(int)arg2 andIdList:(id)arg3 chatRoomIdList:(id)arg4 visibleUsernameList:(id)arg5;
- (void)udpateDefaultDescriptionPromptWording;
- (id)getCurrentTagInfo;
- (void)setCurrentTagInfo:(id)arg1;
- (void)setPOIInfo:(id)arg1;
- (id)getPOIInfo;
- (void)createLivePrepareSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;

@end

