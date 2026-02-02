//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderComment, WCFinderContact;

@interface WCFinderFeedInputViewModel : NSObject
{
    int _postScene;
    NSString *_tid;
    NSString *_nonceID;
    unsigned long long _scene;
    unsigned long long _identitySwitchType;
    WCFinderComment *_replyComment;
    WCFinderContact *_currentFinderContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *currentFinderContact; // @synthesize currentFinderContact=_currentFinderContact;
@property(retain, nonatomic) WCFinderComment *replyComment; // @synthesize replyComment=_replyComment;
@property(nonatomic) int postScene; // @synthesize postScene=_postScene;
@property(nonatomic) unsigned long long identitySwitchType; // @synthesize identitySwitchType=_identitySwitchType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void)feedInputViewPostComment:(id)arg1 withReplyComment:(id)arg2;
- (id)currentUserNickName;
- (id)currentUserHeadURL;
- (id)currentUserName;
- (id)generatePostCommentWithContent:(id)arg1;
- (void)updateCurrentCommentScene;
- (unsigned long long)readIdentifyScene;
- (id)initWithTid:(id)arg1 nonceID:(id)arg2 currentFinderContact:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

