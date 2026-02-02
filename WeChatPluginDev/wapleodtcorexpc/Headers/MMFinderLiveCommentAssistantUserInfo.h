//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveContact, NSString;

@interface MMFinderLiveCommentAssistantUserInfo : NSObject
{
    _Bool _fromWechatContact;
    NSString *_username;
    FinderLiveContact *_contact;
}

+ (id)fromFinderLiveRoomManager:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool fromWechatContact; // @synthesize fromWechatContact=_fromWechatContact;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (id)toFinderLiveRoomManager;

@end

