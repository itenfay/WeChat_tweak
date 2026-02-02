//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCFinderPickerTemplateParams : NSObject
{
    _Bool _forbidChangeMusic;
    _Bool _showLegalTipsViewIfNeed;
    NSMutableArray *_omjTemplates;
    unsigned long long _selectedIndex;
    unsigned long long _eventId;
    NSString *_followFeedId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *followFeedId; // @synthesize followFeedId=_followFeedId;
@property(nonatomic) unsigned long long eventId; // @synthesize eventId=_eventId;
@property(nonatomic) _Bool showLegalTipsViewIfNeed; // @synthesize showLegalTipsViewIfNeed=_showLegalTipsViewIfNeed;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSMutableArray *omjTemplates; // @synthesize omjTemplates=_omjTemplates;
@property(nonatomic) _Bool forbidChangeMusic; // @synthesize forbidChangeMusic=_forbidChangeMusic;
- (id)currentSelectedTemplateId;

@end

