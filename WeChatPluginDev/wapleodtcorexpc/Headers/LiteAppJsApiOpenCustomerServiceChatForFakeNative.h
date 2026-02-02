//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSURLSessionDataTask;

@interface LiteAppJsApiOpenCustomerServiceChatForFakeNative
{
    NSString *m_url;
    int m_scene;
    NSString *m_entityId;
    _Bool m_showMessageCard;
    NSString *m_sendMsgTitle;
    NSString *m_sendMsgPath;
    NSString *m_sendMsgImageURL;
    NSURLSessionDataTask *m_dataTask;
}

- (void).cxx_destruct;
- (void)dealloc;
- (CDUnknownBlockType)getOnClickQuickSendBtnHandleBlockWithAppId:(id)arg1 title:(id)arg2 path:(id)arg3;
- (void)openCustomerServiceChat:(id)arg1;
- (void)getImageDataAndOpenCustomerServiceChat;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (id)init;

@end

