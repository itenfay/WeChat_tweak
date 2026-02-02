//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

#import "NSObject-Protocol.h"

@class NSString, TingShareCategoryItem, TingShareListenItem, TingShareLyricsItem, WCActionAreaVM, WCFinderLiveShareItem, WCFinderShareToMomentsItem, WCMegaVideoShareItem, WCMicroMerchantFeedsGroup;

@interface WCTimeLineCellShowItem : NSObject <NSObject>
{
    _Bool m_showWithInfo;
    _Bool m_showLocationInfo;
    _Bool m_showActionInfo;
    _Bool m_isUploadFailed;
    NSString *m_dataItemID;
    unsigned int m_rewardCount;
    _Bool m_isSightThumbImageDownloaded;
    _Bool _isNewLife;
    _Bool _isWeishange;
    _Bool _isNewMusicStyle;
    _Bool _isTigerStyle;
    double _cacheTime;
    WCActionAreaVM *_actionAreaVM;
    WCFinderLiveShareItem *_finderLiveShareItem;
    WCMegaVideoShareItem *_finderLongVideoShareItem;
    WCFinderShareToMomentsItem *_finderShareToMomentsItem;
    WCMicroMerchantFeedsGroup *_wsGroup;
    NSString *_adInfoUpdateFlag;
    NSString *_adDescription;
    long long _adSocialLikeDisplayType;
    TingShareListenItem *_tingListenItem;
    TingShareCategoryItem *_tingCategoryItem;
    TingShareLyricsItem *_tingLyricsItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingShareLyricsItem *tingLyricsItem; // @synthesize tingLyricsItem=_tingLyricsItem;
@property(retain, nonatomic) TingShareCategoryItem *tingCategoryItem; // @synthesize tingCategoryItem=_tingCategoryItem;
@property(retain, nonatomic) TingShareListenItem *tingListenItem; // @synthesize tingListenItem=_tingListenItem;
@property(nonatomic) _Bool isTigerStyle; // @synthesize isTigerStyle=_isTigerStyle;
@property(nonatomic) long long adSocialLikeDisplayType; // @synthesize adSocialLikeDisplayType=_adSocialLikeDisplayType;
@property(retain, nonatomic) NSString *adDescription; // @synthesize adDescription=_adDescription;
@property(retain, nonatomic) NSString *adInfoUpdateFlag; // @synthesize adInfoUpdateFlag=_adInfoUpdateFlag;
@property(nonatomic) _Bool isNewMusicStyle; // @synthesize isNewMusicStyle=_isNewMusicStyle;
@property(retain, nonatomic) WCMicroMerchantFeedsGroup *wsGroup; // @synthesize wsGroup=_wsGroup;
@property(nonatomic) _Bool isWeishange; // @synthesize isWeishange=_isWeishange;
@property(nonatomic) _Bool isNewLife; // @synthesize isNewLife=_isNewLife;
@property(retain, nonatomic) WCFinderShareToMomentsItem *finderShareToMomentsItem; // @synthesize finderShareToMomentsItem=_finderShareToMomentsItem;
@property(retain, nonatomic) WCMegaVideoShareItem *finderLongVideoShareItem; // @synthesize finderLongVideoShareItem=_finderLongVideoShareItem;
@property(retain, nonatomic) WCFinderLiveShareItem *finderLiveShareItem; // @synthesize finderLiveShareItem=_finderLiveShareItem;
@property(readonly, nonatomic) WCActionAreaVM *actionAreaVM; // @synthesize actionAreaVM=_actionAreaVM;
@property(nonatomic) double cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) _Bool m_isSightThumbImageDownloaded; // @synthesize m_isSightThumbImageDownloaded;
@property(nonatomic) unsigned int m_rewardCount; // @synthesize m_rewardCount;
@property(nonatomic) _Bool m_isUploadFailed; // @synthesize m_isUploadFailed;
@property(nonatomic) _Bool m_showActionInfo; // @synthesize m_showActionInfo;
@property(nonatomic) _Bool m_showLocationInfo; // @synthesize m_showLocationInfo;
@property(nonatomic) _Bool m_showWithInfo; // @synthesize m_showWithInfo;
- (_Bool)isDifferentTingCategoryWithDataItem:(id)arg1;
- (_Bool)isDifferentTingAudioWithDataItem:(id)arg1;
- (_Bool)isDifferentMusicWithDataItem:(id)arg1;
- (_Bool)isDifferentWsSateWithDataItem:(id)arg1;
- (_Bool)isDifferentAdInfoWithDataItem:(id)arg1;
- (id)fetchAdDescriptionWithDataItem:(id)arg1;
- (id)fetchAdInfoUpdateFlagWithDataItem:(id)arg1;
- (_Bool)isDifferentWithDataItem:(id)arg1 actionAreaVM:(id)arg2;
- (id)initWithDataItem:(id)arg1 actionAreaVM:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

