//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WCFinderFullMultiMediaTableViewCellDelegate;

@interface WCFinderTableViewParamModel : NSObject
{
    _Bool _isSubScene;
    _Bool _isHiddenFollowTips;
    _Bool _isShowRecommend;
    _Bool _isHiddendComment;
    _Bool _isDisplayPostDate;
    _Bool _isForceDisableLikeAction;
    _Bool _showFoldFeed;
    _Bool _showLargeSpearator;
    _Bool _enableShowLiveState;
    _Bool _hiddenLiveNoticeTableView;
    _Bool _hiddenAuthorAppendDescLabel;
    _Bool _alwaysShowFollowBtn;
    _Bool _alwaysShowFollowLikeBtn;
    _Bool _showMoreAction;
    _Bool _showMentionGuide;
    _Bool _hiddenHotwordLabel;
    _Bool _showAdSelectGuide;
    _Bool _hiddenDoubleLikeEduView;
    _Bool _shouldCheckAntiAddict;
    _Bool _hiddenSetRingToneEntry;
    _Bool _notShowFollowBtnAfterPlayOver;
    _Bool _hiddenLiveAppointmentState;
    _Bool _notShowTemplateBubbleEntry;
    unsigned long long _toolBarStyle;
    long long _dataOffset;
    unsigned long long _toolbarDisableConfig;
    id <WCFinderFullMultiMediaTableViewCellDelegate> _delegate;
    unsigned long long _forceToolBarStyle;
    struct CGRect _tableViewFrame;
}

+ (id)defaultParamModelWithContentVM:(id)arg1 isSubScene:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long forceToolBarStyle; // @synthesize forceToolBarStyle=_forceToolBarStyle;
@property(nonatomic) struct CGRect tableViewFrame; // @synthesize tableViewFrame=_tableViewFrame;
@property(nonatomic) _Bool notShowTemplateBubbleEntry; // @synthesize notShowTemplateBubbleEntry=_notShowTemplateBubbleEntry;
@property(nonatomic) _Bool hiddenLiveAppointmentState; // @synthesize hiddenLiveAppointmentState=_hiddenLiveAppointmentState;
@property(nonatomic) _Bool notShowFollowBtnAfterPlayOver; // @synthesize notShowFollowBtnAfterPlayOver=_notShowFollowBtnAfterPlayOver;
@property(nonatomic) _Bool hiddenSetRingToneEntry; // @synthesize hiddenSetRingToneEntry=_hiddenSetRingToneEntry;
@property(nonatomic) __weak id <WCFinderFullMultiMediaTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldCheckAntiAddict; // @synthesize shouldCheckAntiAddict=_shouldCheckAntiAddict;
@property(nonatomic) _Bool hiddenDoubleLikeEduView; // @synthesize hiddenDoubleLikeEduView=_hiddenDoubleLikeEduView;
@property(nonatomic) _Bool showAdSelectGuide; // @synthesize showAdSelectGuide=_showAdSelectGuide;
@property(nonatomic) _Bool hiddenHotwordLabel; // @synthesize hiddenHotwordLabel=_hiddenHotwordLabel;
@property(nonatomic) unsigned long long toolbarDisableConfig; // @synthesize toolbarDisableConfig=_toolbarDisableConfig;
@property(nonatomic) _Bool showMentionGuide; // @synthesize showMentionGuide=_showMentionGuide;
@property(nonatomic) _Bool showMoreAction; // @synthesize showMoreAction=_showMoreAction;
@property(nonatomic) _Bool alwaysShowFollowLikeBtn; // @synthesize alwaysShowFollowLikeBtn=_alwaysShowFollowLikeBtn;
@property(nonatomic) _Bool alwaysShowFollowBtn; // @synthesize alwaysShowFollowBtn=_alwaysShowFollowBtn;
@property(nonatomic) _Bool hiddenAuthorAppendDescLabel; // @synthesize hiddenAuthorAppendDescLabel=_hiddenAuthorAppendDescLabel;
@property(nonatomic) _Bool hiddenLiveNoticeTableView; // @synthesize hiddenLiveNoticeTableView=_hiddenLiveNoticeTableView;
@property(nonatomic) _Bool enableShowLiveState; // @synthesize enableShowLiveState=_enableShowLiveState;
@property(nonatomic) _Bool showLargeSpearator; // @synthesize showLargeSpearator=_showLargeSpearator;
@property(nonatomic) _Bool showFoldFeed; // @synthesize showFoldFeed=_showFoldFeed;
@property(nonatomic) _Bool isForceDisableLikeAction; // @synthesize isForceDisableLikeAction=_isForceDisableLikeAction;
@property(nonatomic) _Bool isDisplayPostDate; // @synthesize isDisplayPostDate=_isDisplayPostDate;
@property(nonatomic) _Bool isHiddendComment; // @synthesize isHiddendComment=_isHiddendComment;
@property(nonatomic) _Bool isShowRecommend; // @synthesize isShowRecommend=_isShowRecommend;
@property(nonatomic) _Bool isHiddenFollowTips; // @synthesize isHiddenFollowTips=_isHiddenFollowTips;
@property(nonatomic) long long dataOffset; // @synthesize dataOffset=_dataOffset;
@property(nonatomic) unsigned long long toolBarStyle; // @synthesize toolBarStyle=_toolBarStyle;
@property(nonatomic) _Bool isSubScene; // @synthesize isSubScene=_isSubScene;
- (void)updateUnpublishedShowSwitchState;

@end

