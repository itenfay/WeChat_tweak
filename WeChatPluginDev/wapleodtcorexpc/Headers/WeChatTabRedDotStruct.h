//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WeChatTabRedDotStruct : NSObject
{
    _Bool _isBadgeAtTab;
    _Bool _hadNoteInfo;
    unsigned int _tabIndex;
    unsigned long long _unread;
}

@property(nonatomic) _Bool hadNoteInfo; // @synthesize hadNoteInfo=_hadNoteInfo;
@property(nonatomic) unsigned long long unread; // @synthesize unread=_unread;
@property(nonatomic) _Bool isBadgeAtTab; // @synthesize isBadgeAtTab=_isBadgeAtTab;
@property(nonatomic) unsigned int tabIndex; // @synthesize tabIndex=_tabIndex;
- (id)description;
- (id)initWithIndex:(unsigned int)arg1;

@end

