//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderSyncDecorationInfoResp, MMLiveResourceFetcherLegacyApiAdapter, MMLiveStorageCleanupPinningToken, MMTimer, NSString;

@interface MMFinderLiveAnniversaryDecorationViewModel : NSObject
{
    _Bool _shouldHideHeaderDecorationView;
    _Bool _shouldHideAtmosphereDecorationView;
    _Bool _shouldPlayAtmosphereDecorationView;
    NSString *_atmosphereLotAnimationViewUrl;
    NSString *_avatarLotAnimationViewUrl;
    FinderSyncDecorationInfoResp *_resp;
    MMLiveResourceFetcherLegacyApiAdapter *_downloadManager;
    MMTimer *_timer;
    long long _defaultVerifyTime;
    MMLiveStorageCleanupPinningToken *_resourcesPinningToken;
    struct CGRect _rect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveStorageCleanupPinningToken *resourcesPinningToken; // @synthesize resourcesPinningToken=_resourcesPinningToken;
@property(nonatomic) long long defaultVerifyTime; // @synthesize defaultVerifyTime=_defaultVerifyTime;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MMLiveResourceFetcherLegacyApiAdapter *downloadManager; // @synthesize downloadManager=_downloadManager;
@property(retain, nonatomic) FinderSyncDecorationInfoResp *resp; // @synthesize resp=_resp;
@property(nonatomic) _Bool shouldPlayAtmosphereDecorationView; // @synthesize shouldPlayAtmosphereDecorationView=_shouldPlayAtmosphereDecorationView;
@property(nonatomic) _Bool shouldHideAtmosphereDecorationView; // @synthesize shouldHideAtmosphereDecorationView=_shouldHideAtmosphereDecorationView;
@property(nonatomic) _Bool shouldHideHeaderDecorationView; // @synthesize shouldHideHeaderDecorationView=_shouldHideHeaderDecorationView;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) NSString *avatarLotAnimationViewUrl; // @synthesize avatarLotAnimationViewUrl=_avatarLotAnimationViewUrl;
@property(retain, nonatomic) NSString *atmosphereLotAnimationViewUrl; // @synthesize atmosphereLotAnimationViewUrl=_atmosphereLotAnimationViewUrl;
- (id)md5From:(id)arg1;
- (id)downloadUrlFrom:(id)arg1;
- (void)playAtmosphereAnimationEnd;
- (void)triggerTimer;
- (void)setupData;
- (void)updateModel:(id)arg1;
- (void)setup;
- (id)init;

@end

