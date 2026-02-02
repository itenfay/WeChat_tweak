//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;
@protocol WCFinderMentionUserViewModelDelegate;

@interface WCFinderMentionUserViewModel : NSObject
{
    _Bool _hasMoreContact;
    id <WCFinderMentionUserViewModelDelegate> _delegate;
    NSMutableArray *_mentionedContactsArray;
    NSMutableArray *_contactArray;
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool hasMoreContact; // @synthesize hasMoreContact=_hasMoreContact;
@property(retain, nonatomic) NSMutableArray *contactArray; // @synthesize contactArray=_contactArray;
@property(retain, nonatomic) NSMutableArray *mentionedContactsArray; // @synthesize mentionedContactsArray=_mentionedContactsArray;
@property(nonatomic) __weak id <WCFinderMentionUserViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderContactFollowListHasChange:(id)arg1;
- (void)unfollowContact:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fetchMoreData;
- (void)fetchLocalContactList;
- (void)realUpdateViewModelData;
- (void)updateViewModelData;
- (id)getContactArray;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

