//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCStorySetting
{
    _Bool _hasClearCameraRedDot;
    _Bool _hasShowCameraGuide;
    _Bool _hasDragDownStoryTeachView;
    _Bool _hasAutoPlayVideoFirst;
    _Bool _hasTakePhotoAfterShowGuide;
    _Bool _hasAlwaysShowFriendsStoryCellInTimeline;
    _Bool _hasShowEntrance;
    _Bool _hasClearAlbumRedDot;
    _Bool _hasFirstPost;
    _Bool _hasShowPrivateTips;
    _Bool _friendVisitSwitchOn;
    _Bool _hasShowCameraNewGuide;
    _Bool _friendVisitUnreadCommentRedPointOn;
    _Bool _hasReadFriendVisitVersionCameraRedPoint;
    _Bool _newVersionFriendVisitSwitchOn;
    unsigned int _canBubbleTipsShowedCount;
    unsigned int _canCameraTipsShowedCount;
    unsigned int _dragDownStoryProfileCount;
    unsigned int _showTimelineTipsCount;
    unsigned long long _lastReadTimelineMaxTid;
}

+ (void)initialize;
+ (void)PBArrayAdd_newVersionFriendVisitSwitchOn;
+ (void)PBArrayAdd_hasReadFriendVisitVersionCameraRedPoint;
+ (void)PBArrayAdd_friendVisitUnreadCommentRedPointOn;
+ (void)PBArrayAdd_hasShowCameraNewGuide;
+ (void)PBArrayAdd_showTimelineTipsCount;
+ (void)PBArrayAdd_friendVisitSwitchOn;
+ (void)PBArrayAdd_hasShowPrivateTips;
+ (void)PBArrayAdd_hasFirstPost;
+ (void)PBArrayAdd_hasClearAlbumRedDot;
+ (void)PBArrayAdd_hasShowEntrance;
+ (void)PBArrayAdd_lastReadTimelineMaxTid;
+ (void)PBArrayAdd_hasAlwaysShowFriendsStoryCellInTimeline;
+ (void)PBArrayAdd_hasTakePhotoAfterShowGuide;
+ (void)PBArrayAdd_dragDownStoryProfileCount;
+ (void)PBArrayAdd_hasAutoPlayVideoFirst;
+ (void)PBArrayAdd_hasDragDownStoryTeachView;
+ (void)PBArrayAdd_hasShowCameraGuide;
+ (void)PBArrayAdd_canCameraTipsShowedCount;
+ (void)PBArrayAdd_hasClearCameraRedDot;
+ (void)PBArrayAdd_canBubbleTipsShowedCount;
@property(nonatomic) _Bool newVersionFriendVisitSwitchOn; // @synthesize newVersionFriendVisitSwitchOn=_newVersionFriendVisitSwitchOn;
@property(nonatomic) _Bool hasReadFriendVisitVersionCameraRedPoint; // @synthesize hasReadFriendVisitVersionCameraRedPoint=_hasReadFriendVisitVersionCameraRedPoint;
@property(nonatomic) _Bool friendVisitUnreadCommentRedPointOn; // @synthesize friendVisitUnreadCommentRedPointOn=_friendVisitUnreadCommentRedPointOn;
@property(nonatomic) _Bool hasShowCameraNewGuide; // @synthesize hasShowCameraNewGuide=_hasShowCameraNewGuide;
@property(nonatomic) unsigned int showTimelineTipsCount; // @synthesize showTimelineTipsCount=_showTimelineTipsCount;
@property(nonatomic) _Bool friendVisitSwitchOn; // @synthesize friendVisitSwitchOn=_friendVisitSwitchOn;
@property(nonatomic) _Bool hasShowPrivateTips; // @synthesize hasShowPrivateTips=_hasShowPrivateTips;
@property(nonatomic) _Bool hasFirstPost; // @synthesize hasFirstPost=_hasFirstPost;
@property(nonatomic) _Bool hasClearAlbumRedDot; // @synthesize hasClearAlbumRedDot=_hasClearAlbumRedDot;
@property(nonatomic) _Bool hasShowEntrance; // @synthesize hasShowEntrance=_hasShowEntrance;
@property(nonatomic) unsigned long long lastReadTimelineMaxTid; // @synthesize lastReadTimelineMaxTid=_lastReadTimelineMaxTid;
@property(nonatomic) _Bool hasAlwaysShowFriendsStoryCellInTimeline; // @synthesize hasAlwaysShowFriendsStoryCellInTimeline=_hasAlwaysShowFriendsStoryCellInTimeline;
@property(nonatomic) _Bool hasTakePhotoAfterShowGuide; // @synthesize hasTakePhotoAfterShowGuide=_hasTakePhotoAfterShowGuide;
@property(nonatomic) unsigned int dragDownStoryProfileCount; // @synthesize dragDownStoryProfileCount=_dragDownStoryProfileCount;
@property(nonatomic) _Bool hasAutoPlayVideoFirst; // @synthesize hasAutoPlayVideoFirst=_hasAutoPlayVideoFirst;
@property(nonatomic) _Bool hasDragDownStoryTeachView; // @synthesize hasDragDownStoryTeachView=_hasDragDownStoryTeachView;
@property(nonatomic) _Bool hasShowCameraGuide; // @synthesize hasShowCameraGuide=_hasShowCameraGuide;
@property(nonatomic) unsigned int canCameraTipsShowedCount; // @synthesize canCameraTipsShowedCount=_canCameraTipsShowedCount;
@property(nonatomic) _Bool hasClearCameraRedDot; // @synthesize hasClearCameraRedDot=_hasClearCameraRedDot;
@property(nonatomic) unsigned int canBubbleTipsShowedCount; // @synthesize canBubbleTipsShowedCount=_canBubbleTipsShowedCount;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

