//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WATaskBarCloseInfo : NSObject
{
    NSString *_sessionId;
    unsigned long long _actionType;
    unsigned long long _duration;
    unsigned long long _pageType;
    unsigned long long _page;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;

@end

