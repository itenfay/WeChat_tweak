//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderWindowProductInfo, NSSet, NSString, WCFinderFeedBindEventInfo, WCFinderFeedContentVM, WCFinderObjectHotTopic, WCFinderTableViewParamModel;

@interface WCFinderInteractivePanelConfigParamsModel : NSObject
{
    _Bool _isAuthorView;
    _Bool _forceShowCreateTime;
    _Bool _isEnableMediaHeaderShowFollowTips;
    _Bool _hiddenAuthorAppendDescLabel;
    _Bool _showLiveState;
    _Bool _hideFriendLikeInfo;
    _Bool _hasCompletelyPlay;
    _Bool _isTimeShowGuideItem;
    _Bool _hiddenSetRingToneEntry;
    _Bool _notShowFollowBtnAfterPlayOver;
    _Bool _hiddenLiveAppointmentState;
    _Bool _emitCarouselAfterHotCommentUpdate;
    int _scene;
    WCFinderFeedContentVM *_contentVM;
    NSString *_createTime;
    WCFinderFeedBindEventInfo *_eventInfo;
    WCFinderObjectHotTopic *_hotTopicInfo;
    FinderWindowProductInfo *_goodsProductInfo;
    NSSet *_feedSourceShowSceneSet;
    WCFinderTableViewParamModel *_tableViewParamModel;
    struct CGRect _mediaCollectionViewFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderTableViewParamModel *tableViewParamModel; // @synthesize tableViewParamModel=_tableViewParamModel;
@property(nonatomic) _Bool emitCarouselAfterHotCommentUpdate; // @synthesize emitCarouselAfterHotCommentUpdate=_emitCarouselAfterHotCommentUpdate;
@property(retain, nonatomic) NSSet *feedSourceShowSceneSet; // @synthesize feedSourceShowSceneSet=_feedSourceShowSceneSet;
@property(nonatomic) _Bool hiddenLiveAppointmentState; // @synthesize hiddenLiveAppointmentState=_hiddenLiveAppointmentState;
@property(nonatomic) _Bool notShowFollowBtnAfterPlayOver; // @synthesize notShowFollowBtnAfterPlayOver=_notShowFollowBtnAfterPlayOver;
@property(nonatomic) _Bool hiddenSetRingToneEntry; // @synthesize hiddenSetRingToneEntry=_hiddenSetRingToneEntry;
@property(nonatomic) _Bool isTimeShowGuideItem; // @synthesize isTimeShowGuideItem=_isTimeShowGuideItem;
@property(retain, nonatomic) FinderWindowProductInfo *goodsProductInfo; // @synthesize goodsProductInfo=_goodsProductInfo;
@property(nonatomic) _Bool hasCompletelyPlay; // @synthesize hasCompletelyPlay=_hasCompletelyPlay;
@property(nonatomic) _Bool hideFriendLikeInfo; // @synthesize hideFriendLikeInfo=_hideFriendLikeInfo;
@property(nonatomic) _Bool showLiveState; // @synthesize showLiveState=_showLiveState;
@property(nonatomic) _Bool hiddenAuthorAppendDescLabel; // @synthesize hiddenAuthorAppendDescLabel=_hiddenAuthorAppendDescLabel;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool isEnableMediaHeaderShowFollowTips; // @synthesize isEnableMediaHeaderShowFollowTips=_isEnableMediaHeaderShowFollowTips;
@property(nonatomic) struct CGRect mediaCollectionViewFrame; // @synthesize mediaCollectionViewFrame=_mediaCollectionViewFrame;
@property(retain, nonatomic) WCFinderObjectHotTopic *hotTopicInfo; // @synthesize hotTopicInfo=_hotTopicInfo;
@property(retain, nonatomic) WCFinderFeedBindEventInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(nonatomic) _Bool forceShowCreateTime; // @synthesize forceShowCreateTime=_forceShowCreateTime;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(nonatomic) _Bool isAuthorView; // @synthesize isAuthorView=_isAuthorView;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
- (_Bool)enableShowSmartCollectionBubble;
- (unsigned long long)getOperatingComponentLevel:(id)arg1;
- (unsigned long long)getOperatingComponentLevelWithShowPosition:(int)arg1;
- (id)init;

@end

