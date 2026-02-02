//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandTemplateMsgContentViewController, NSString, TemplateMsgExposeLogic, TemplateMsgSubLogicEnterParams;

@interface BrandTemplateMsgLogicController
{
    TemplateMsgExposeLogic *m_exposeLogic;
    NSString *_templateSessionId;
    TemplateMsgSubLogicEnterParams *_enterParams;
    BrandTemplateMsgContentViewController *_templateVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BrandTemplateMsgContentViewController *templateVC; // @synthesize templateVC=_templateVC;
@property(retain, nonatomic) TemplateMsgSubLogicEnterParams *enterParams; // @synthesize enterParams=_enterParams;
@property(retain, nonatomic) NSString *templateSessionId; // @synthesize templateSessionId=_templateSessionId;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)onExposeTemplateMsg:(id)arg1 extraData:(id)arg2;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (id)filterAndLimitMessagesWithArray:(id)arg1 maxCount:(long long)arg2;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (unsigned int)getStartCreateTime;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (_Bool)ShouldShowSearchCompleteRightBarButton;
- (id)GetUsrTitle;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (_Bool)isShowHeadImage:(id)arg1;
- (_Bool)CanShowBanner;
- (unsigned int)getMsgCountToLoad;
- (id)pageSheetModeTitle;
- (void)initViewController;
- (void)onWillEnterRoom;

@end

