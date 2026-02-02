//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTimelineEditBehaviorInfo;

@interface WCTimelineEditBehaviorReporter : NSObject
{
    WCTimelineEditBehaviorInfo *_info;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTimelineEditBehaviorInfo *info; // @synthesize info=_info;
- (void)kvDataReport;
- (void)didSelectTagCountFromSearchForImport:(unsigned long long)arg1;
- (void)didSelectTagFromSearch:(id)arg1 privacy:(long long)arg2;
- (void)didLeaveSelectTagPage;
- (void)didEnterSelectTagPage;
- (void)didLeaveSelectFriendFromTagPage;
- (void)didEnterSelectFriendFromTagPage;
- (void)didLeaveSelectFriendFromGroupPage;
- (void)didEnterSelectFriendFromGroupPage;
- (void)didLeaveSelectFriendPage;
- (void)didEnterSelectFriendPage;
- (void)didLeavePrivacySettingPage;
- (void)didEnterPrivacySettingPage;
- (void)addTagsToSelectFriendFromTags:(id)arg1;
- (void)updatePreviousPrivacy:(long long)arg1;
- (void)updateEditEnterScene:(unsigned long long)arg1;
- (void)updateDynamicTagFlag:(_Bool)arg1;
- (void)updatePublishID:(id)arg1;
- (void)clickLatestSetting;
- (void)importFromChatroomClickCount;
- (void)importFromContactClickCount;
- (void)visibleSettingClickCount;
- (void)chatroomDetailClickCount:(id)arg1;
- (void)updateSelectedContactlabel:(id)arg1;
- (void)updateSelectedContact:(id)arg1;
- (void)updateSelectedChatroom:(id)arg1;
- (void)updateTimelineStatusPost;
- (void)updateTimelineStatueCancel:(_Bool)arg1;
- (long long)convertPostPrivacy:(long long)arg1;
- (void)updatePostPrivacy:(long long)arg1;
- (void)resetReporterStatusWithPostReportSession:(id)arg1;
- (void)resetReporterStatus;

@end

