//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderMsgChangeRoleViewItem : NSObject
{
    _Bool _selected;
    _Bool _isGlobalSelected;
    _Bool _isFinderContact;
    _Bool _disableSelect;
    NSString *_headURL;
    NSString *_nickname;
    NSString *_descTitle;
    long long _roleType;
}

- (void).cxx_destruct;
@property(nonatomic) long long roleType; // @synthesize roleType=_roleType;
@property(nonatomic) _Bool disableSelect; // @synthesize disableSelect=_disableSelect;
@property(nonatomic) _Bool isFinderContact; // @synthesize isFinderContact=_isFinderContact;
@property(nonatomic) _Bool isGlobalSelected; // @synthesize isGlobalSelected=_isGlobalSelected;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *descTitle; // @synthesize descTitle=_descTitle;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *headURL; // @synthesize headURL=_headURL;

@end

