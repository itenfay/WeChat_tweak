//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCAdvertiseWaitUpdateItem
{
    unsigned int _uiFromScene;
    int _source;
    int _reportScene;
    NSString *_itemID;
    NSString *_syncBuffer;
    NSData *_remindFriendsInfo;
}

- (void).cxx_destruct;
@property(nonatomic) int reportScene; // @synthesize reportScene=_reportScene;
@property(retain, nonatomic) NSData *remindFriendsInfo; // @synthesize remindFriendsInfo=_remindFriendsInfo;
@property(retain, nonatomic) NSString *syncBuffer; // @synthesize syncBuffer=_syncBuffer;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) unsigned int uiFromScene; // @synthesize uiFromScene=_uiFromScene;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (id)description;

@end

