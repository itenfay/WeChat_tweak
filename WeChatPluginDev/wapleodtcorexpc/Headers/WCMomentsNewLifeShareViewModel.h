//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NewLifePostInfo;

@interface WCMomentsNewLifeShareViewModel
{
    _Bool _hasRecordedDisplay;
    _Bool _hasRecordedClick;
    NewLifePostInfo *_currentNewLifePostInfo;
    long long _newlifePostShareScene;
    NSString *_newlifeShareFeedId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *newlifeShareFeedId; // @synthesize newlifeShareFeedId=_newlifeShareFeedId;
@property(nonatomic) long long newlifePostShareScene; // @synthesize newlifePostShareScene=_newlifePostShareScene;
@property(copy, nonatomic) NewLifePostInfo *currentNewLifePostInfo; // @synthesize currentNewLifePostInfo=_currentNewLifePostInfo;
- (void)willStartSharing;
- (void)didClickShareButton;
- (void)willDisplayShareButton;
- (_Bool)hasPosted;
- (void)processImage:(id)arg1 endAction:(CDUnknownBlockType)arg2;
- (id)generateNewLifePhotoInfos;
- (_Bool)_shareImagesToFinderFromViewController:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_goToNewLifeFlutterFlow:(CDUnknownBlockType)arg1;
- (_Bool)reallyShareFromViewController:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)hasActionRecordForShowingShareButton;
- (_Bool)shouldShowShareButton;
- (id)tips;
- (id)svgIconColor;
- (id)svgIconName;
- (void)setUpJumpFlowReportInfo:(id)arg1 withAction:(long long)arg2;
- (void)setUpReportInfo:(id)arg1 withAction:(long long)arg2;
- (void)dr_reportView:(id)arg1 action:(long long)arg2 inScene:(long long)arg3;
- (void)dr_bindShareButton:(id)arg1;

@end

