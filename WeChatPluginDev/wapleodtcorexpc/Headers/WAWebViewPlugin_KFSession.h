//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAWebViewPlugin_KFSession
{
    NSString *_userName;
    unsigned int _lastUnreadCount;
}

- (void).cxx_destruct;
- (void)OnUnReadCountChange:(id)arg1;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)checkUnreadCountChange;
- (void)notifyUnreadCountChangeTo:(unsigned int)arg1;
- (unsigned int)getSessionUnreadCount;

@end

