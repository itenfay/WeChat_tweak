//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAAppTaskRunningEvent_WebViewMenuAction
{
    _Bool _shareMenuCanBeOperated;
    unsigned long long _menuAction;
}

@property(nonatomic) _Bool shareMenuCanBeOperated; // @synthesize shareMenuCanBeOperated=_shareMenuCanBeOperated;
@property(nonatomic) unsigned long long menuAction; // @synthesize menuAction=_menuAction;
- (id)description;
- (unsigned long long)eventType;

@end

