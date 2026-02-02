//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TemplateMsgExposeLogic, TemplateMsgSubViewController, WAContactGetter;

@interface TemplateMsgSubLogicController
{
    WAContactGetter *m_contactGetter;
    TemplateMsgExposeLogic *m_exposeLogic;
    NSString *_templateSessionId;
    TemplateMsgSubViewController *_templateVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TemplateMsgSubViewController *templateVC; // @synthesize templateVC=_templateVC;
@property(retain, nonatomic) NSString *templateSessionId; // @synthesize templateSessionId=_templateSessionId;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)onOpenWeappProfileWithAppid:(id)arg1 appBrandType:(unsigned int)arg2 msgWrap:(id)arg3;
- (void)headerImageClickedWithMsg:(id)arg1;
- (void)onExposeTemplateMsg:(id)arg1 extraData:(id)arg2;
- (void)OpenChatView:(id)arg1;
- (void)OpenContactInfo:(id)arg1;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (_Bool)ShouldShowSearchCompleteRightBarButton;
- (id)GetUsrTitle;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (_Bool)isShowHeadImage:(id)arg1;
- (unsigned int)getMsgCountToLoad;
- (void)dealloc;
- (void)initViewController;
- (void)onWillEnterRoom;

@end

