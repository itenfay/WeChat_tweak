//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCDataItem;

@interface WCMomentsStarGuideViewModel : NSObject
{
    _Bool _hasRecordedDisplay;
    _Bool _hasRecordedClick;
    _Bool _canShowStarGuideButton;
    WCDataItem *_dataItem;
    long long _scene;
    NSString *_starGuideTips;
    NSString *_starGuideActionTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *starGuideActionTitle; // @synthesize starGuideActionTitle=_starGuideActionTitle;
@property(copy, nonatomic) NSString *starGuideTips; // @synthesize starGuideTips=_starGuideTips;
@property(nonatomic) _Bool canShowStarGuideButton; // @synthesize canShowStarGuideButton=_canShowStarGuideButton;
@property(readonly, nonatomic) long long scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)didClickGuideButton;
- (void)willDisplayGuideButton;
- (_Bool)hasActionRecordForShowingStarGuideButton;
- (_Bool)shouldShowStarGuideButton;
- (_Bool)validateMediaItemListForScene;
- (_Bool)validateMediaItemList;
- (_Bool)validateDataItem;
- (_Bool)validateDevice;
- (void)updateDataItem:(id)arg1;
- (id)initWithDataItem:(id)arg1 scene:(long long)arg2;

@end

