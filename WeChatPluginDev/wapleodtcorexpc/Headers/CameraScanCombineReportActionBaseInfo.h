//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CameraScanCombineReportActionBaseInfo : NSObject
{
    unsigned int _enterScene;
    unsigned int _pageSessionId;
    unsigned int _tabSessionId;
    unsigned int _scanSessionId;
    unsigned long long _enterTabTs;
    unsigned long long _actionTs;
}

@property(nonatomic) unsigned int scanSessionId; // @synthesize scanSessionId=_scanSessionId;
@property(nonatomic) unsigned int tabSessionId; // @synthesize tabSessionId=_tabSessionId;
@property(nonatomic) unsigned int pageSessionId; // @synthesize pageSessionId=_pageSessionId;
@property(nonatomic) unsigned long long actionTs; // @synthesize actionTs=_actionTs;
@property(nonatomic) unsigned long long enterTabTs; // @synthesize enterTabTs=_enterTabTs;
@property(nonatomic) unsigned int enterScene; // @synthesize enterScene=_enterScene;

@end

