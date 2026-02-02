//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray;

@interface MMFinderLivePaymentVisivilitySettingInfo
{
    _Bool _hasTrialTimeManuallyModified;
    unsigned int _curPriceInWecoin;
    unsigned int _curTrialTimeHour;
    unsigned int _curTrialTimeMinute;
    long long _purchaseLivePreviewType;
    NSMutableArray *_chooseFreeContactChatroomList;
    NSMutableArray *_chooseFreeContactUsernameList;
    NSArray *_chooseFreeContactListForDigestDisplay;
    NSMutableArray *_selectedFreeFileLists;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *selectedFreeFileLists; // @synthesize selectedFreeFileLists=_selectedFreeFileLists;
@property(retain, nonatomic) NSArray *chooseFreeContactListForDigestDisplay; // @synthesize chooseFreeContactListForDigestDisplay=_chooseFreeContactListForDigestDisplay;
@property(retain, nonatomic) NSMutableArray *chooseFreeContactUsernameList; // @synthesize chooseFreeContactUsernameList=_chooseFreeContactUsernameList;
@property(retain, nonatomic) NSMutableArray *chooseFreeContactChatroomList; // @synthesize chooseFreeContactChatroomList=_chooseFreeContactChatroomList;
@property(nonatomic) _Bool hasTrialTimeManuallyModified; // @synthesize hasTrialTimeManuallyModified=_hasTrialTimeManuallyModified;
@property(nonatomic) unsigned int curTrialTimeMinute; // @synthesize curTrialTimeMinute=_curTrialTimeMinute;
@property(nonatomic) unsigned int curTrialTimeHour; // @synthesize curTrialTimeHour=_curTrialTimeHour;
@property(nonatomic) unsigned int curPriceInWecoin; // @synthesize curPriceInWecoin=_curPriceInWecoin;
@property(nonatomic) long long purchaseLivePreviewType; // @synthesize purchaseLivePreviewType=_purchaseLivePreviewType;
- (_Bool)shouldDisplayLiveMemberAndSuperfanFree;
- (id)getFormatTrialTimeDesc;
- (id)getDefaultDescription;
- (id)getDescriptionForCurrentSetting;
- (_Bool)isSettingEnabled;
- (void)recoverInfosToInitParam:(id)arg1;
- (void)copyInfosFromSettingInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

