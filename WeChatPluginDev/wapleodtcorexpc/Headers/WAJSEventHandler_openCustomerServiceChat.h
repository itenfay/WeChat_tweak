//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface WAJSEventHandler_openCustomerServiceChat
{
    NSString *m_url;
    int m_scene;
    NSString *m_entityId;
    _Bool m_showMessageCard;
    NSString *m_sendMsgTitle;
    NSString *m_sendMsgPath;
    NSString *m_sendMsgImageURL;
    NSDictionary *m_sendMsgParam;
    NSString *m_sendMsgHintTitle;
    _Bool _bSkipBindStateCheck;
    _Bool _bShouldUseEntityInParam;
    _Bool _bCanHandleQuickMsgByBusiness;
    NSString *_finderContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *finderContext; // @synthesize finderContext=_finderContext;
@property(nonatomic) _Bool bCanHandleQuickMsgByBusiness; // @synthesize bCanHandleQuickMsgByBusiness=_bCanHandleQuickMsgByBusiness;
@property(nonatomic) _Bool bShouldUseEntityInParam; // @synthesize bShouldUseEntityInParam=_bShouldUseEntityInParam;
@property(nonatomic) _Bool bSkipBindStateCheck; // @synthesize bSkipBindStateCheck=_bSkipBindStateCheck;
- (CDUnknownBlockType)getOnClickQuickSendBtnHandleBlockWithWeappContact:(id)arg1 title:(id)arg2 path:(id)arg3 extraParam:(id)arg4;
- (void)openCustomerServiceChat;
- (void)onCheckBindEntityCgiResponse:(id)arg1;
- (_Bool)checkIsBindEntityWithAppId:(id)arg1 corpId:(id)arg2 url:(id)arg3;
- (id)getImageDataWithImageUrl:(id)arg1;
- (void)handleJSEvent:(id)arg1;

@end

