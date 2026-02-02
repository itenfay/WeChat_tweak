//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, GroupNoticeItem, UIViewController;

@interface GNOpenParam : NSObject
{
    _Bool _isHistory;
    int _scene;
    CContact *_chatRoomContact;
    UIViewController *_parentViewController;
    GroupNoticeItem *_item;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GroupNoticeItem *item; // @synthesize item=_item;
@property(nonatomic) _Bool isHistory; // @synthesize isHistory=_isHistory;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) CContact *chatRoomContact; // @synthesize chatRoomContact=_chatRoomContact;

@end

