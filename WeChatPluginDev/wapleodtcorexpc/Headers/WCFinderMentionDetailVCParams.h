//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, WCFinderContact, WCFinderFeedContentVM, WCFinderJumpInfo;

@interface WCFinderMentionDetailVCParams : NSObject
{
    _Bool _fromFirstLike;
    _Bool _showMoreAction;
    _Bool _forbiddenMinimize;
    _Bool _fromThankMention;
    unsigned int _customTLFollowEnterType;
    WCFinderFeedContentVM *_contentVM;
    unsigned long long _autoShowListType;
    NSArray *_refFriendUsernames;
    WCFinderContact *_currentAuthorContact;
    WCFinderJumpInfo *_enterShowJumpInfo;
}

+ (id)paramsWithContentVM:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderJumpInfo *enterShowJumpInfo; // @synthesize enterShowJumpInfo=_enterShowJumpInfo;
@property(nonatomic) unsigned int customTLFollowEnterType; // @synthesize customTLFollowEnterType=_customTLFollowEnterType;
@property(nonatomic) _Bool fromThankMention; // @synthesize fromThankMention=_fromThankMention;
@property(nonatomic) _Bool forbiddenMinimize; // @synthesize forbiddenMinimize=_forbiddenMinimize;
@property(retain, nonatomic) WCFinderContact *currentAuthorContact; // @synthesize currentAuthorContact=_currentAuthorContact;
@property(copy, nonatomic) NSArray *refFriendUsernames; // @synthesize refFriendUsernames=_refFriendUsernames;
@property(nonatomic) _Bool showMoreAction; // @synthesize showMoreAction=_showMoreAction;
@property(nonatomic) _Bool fromFirstLike; // @synthesize fromFirstLike=_fromFirstLike;
@property(nonatomic) unsigned long long autoShowListType; // @synthesize autoShowListType=_autoShowListType;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;

@end

