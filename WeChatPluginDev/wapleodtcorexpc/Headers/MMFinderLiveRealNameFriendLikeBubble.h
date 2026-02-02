//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveRealNameFriendLikeBubble : NSObject
{
    unsigned long long _disappearMsAfterLike;
    unsigned long long _disappearMsWithoutAction;
    unsigned long long _sendReason;
}

+ (id)bubbleWithSvrInfo:(id)arg1;
@property(nonatomic) unsigned long long sendReason; // @synthesize sendReason=_sendReason;
@property(nonatomic) unsigned long long disappearMsWithoutAction; // @synthesize disappearMsWithoutAction=_disappearMsWithoutAction;
@property(nonatomic) unsigned long long disappearMsAfterLike; // @synthesize disappearMsAfterLike=_disappearMsAfterLike;

@end

