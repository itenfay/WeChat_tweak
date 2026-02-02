//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCFinderDataItem, WCFinderJumpInfo;

@interface WCFinderMentionFeedOpenParams : NSObject
{
    _Bool _showCommentList;
    _Bool _showFriendLike;
    _Bool _fromFirstLike;
    _Bool _fromThankMention;
    unsigned int _customTLFollowEnterType;
    WCFinderDataItem *_dataItem;
    unsigned long long _refCommentID;
    NSArray *_friendUsernames;
    NSString *_authorThankTips;
    WCFinderJumpInfo *_enterShowJumpInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int customTLFollowEnterType; // @synthesize customTLFollowEnterType=_customTLFollowEnterType;
@property(retain, nonatomic) WCFinderJumpInfo *enterShowJumpInfo; // @synthesize enterShowJumpInfo=_enterShowJumpInfo;
@property(retain, nonatomic) NSString *authorThankTips; // @synthesize authorThankTips=_authorThankTips;
@property(nonatomic) _Bool fromThankMention; // @synthesize fromThankMention=_fromThankMention;
@property(nonatomic) _Bool fromFirstLike; // @synthesize fromFirstLike=_fromFirstLike;
@property(copy, nonatomic) NSArray *friendUsernames; // @synthesize friendUsernames=_friendUsernames;
@property(nonatomic) _Bool showFriendLike; // @synthesize showFriendLike=_showFriendLike;
@property(nonatomic) unsigned long long refCommentID; // @synthesize refCommentID=_refCommentID;
@property(nonatomic) _Bool showCommentList; // @synthesize showCommentList=_showCommentList;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (id)convertToMentionDetailVCPatamsWithScene:(int)arg1;
- (void)setFriendLikeShowWithFriendUsernames:(id)arg1;
- (void)setCommentListShowWithRefCommentID:(unsigned long long)arg1;
- (id)initWithDataItem:(id)arg1;

@end

