//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol WCTogetherFriendsListViewItemDelegate;

@interface WCTogetherFriendsListViewItem : NSObject
{
    _Bool _showsTogetherFriends;
    _Bool _canClickFriendsInfo;
    id <WCTogetherFriendsListViewItemDelegate> _delegate;
    NSString *_title;
    NSArray *_togetherFriendsContacts;
    NSString *_togetherFriendsNameText;
    NSString *_togetherFriendsCountText;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canClickFriendsInfo; // @synthesize canClickFriendsInfo=_canClickFriendsInfo;
@property(readonly, copy, nonatomic) NSString *togetherFriendsCountText; // @synthesize togetherFriendsCountText=_togetherFriendsCountText;
@property(readonly, copy, nonatomic) NSString *togetherFriendsNameText; // @synthesize togetherFriendsNameText=_togetherFriendsNameText;
@property(copy, nonatomic) NSArray *togetherFriendsContacts; // @synthesize togetherFriendsContacts=_togetherFriendsContacts;
@property(nonatomic) _Bool showsTogetherFriends; // @synthesize showsTogetherFriends=_showsTogetherFriends;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <WCTogetherFriendsListViewItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didClickFriendsInfo;
- (void)clearTogetherFriendsTexts;
- (void)generateTogetherFriendsTextsIfNeeded;
- (id)init;
@property(readonly, nonatomic) Class cellClass;

@end

