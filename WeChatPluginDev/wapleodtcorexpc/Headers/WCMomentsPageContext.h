//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIViewController;

@interface WCMomentsPageContext : NSObject
{
    _Bool _scrollViewMonitorEnabled;
    _Bool _canPlayLivePhotos;
    _Bool _canSaveLivePhotos;
    _Bool _livePhotoShowMutedMenu;
    UIViewController *_rootViewController;
    long long _bizMpImageDisplayStyle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool livePhotoShowMutedMenu; // @synthesize livePhotoShowMutedMenu=_livePhotoShowMutedMenu;
@property(readonly, nonatomic) _Bool canSaveLivePhotos; // @synthesize canSaveLivePhotos=_canSaveLivePhotos;
@property(readonly, nonatomic) _Bool canPlayLivePhotos; // @synthesize canPlayLivePhotos=_canPlayLivePhotos;
@property(nonatomic) long long bizMpImageDisplayStyle; // @synthesize bizMpImageDisplayStyle=_bizMpImageDisplayStyle;
@property(readonly, nonatomic) _Bool scrollViewMonitorEnabled; // @synthesize scrollViewMonitorEnabled=_scrollViewMonitorEnabled;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void)updateSpecifiedDynamicConfigsWhenTimelineWillAppear;
- (void)updateDynamicConfigs;
- (id)initWithRootViewController:(id)arg1;

@end

