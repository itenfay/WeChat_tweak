//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderContact, WCFinderMessageShareNameCard;

@interface WCFinderLimitedCheckParamsModel : NSObject
{
    _Bool _isChatRoom;
    _Bool _isLive;
    int _commentScene;
    NSString *_feedId;
    unsigned long long _shareScene;
    WCFinderMessageShareNameCard *_nameCard;
    NSString *_userName;
    unsigned long long _entryScene;
    WCFinderContact *_contact;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) _Bool isChatRoom; // @synthesize isChatRoom=_isChatRoom;
@property(retain, nonatomic) WCFinderMessageShareNameCard *nameCard; // @synthesize nameCard=_nameCard;
@property(nonatomic) unsigned long long shareScene; // @synthesize shareScene=_shareScene;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;

@end

