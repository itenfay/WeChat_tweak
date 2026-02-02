//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCCommentObjectFinderInfo, WCCommentUniCommentInfo;

@interface WCCommentObject : NSObject
{
    _Bool _isSelfLiked;
    unsigned long long _obejctType;
    unsigned long long _commentCount;
    unsigned long long _likeCount;
    unsigned long long _forwardCount;
    WCCommentUniCommentInfo *_uniCommentInfo;
    WCCommentObjectFinderInfo *_finderInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCommentObjectFinderInfo *finderInfo; // @synthesize finderInfo=_finderInfo;
@property(retain, nonatomic) WCCommentUniCommentInfo *uniCommentInfo; // @synthesize uniCommentInfo=_uniCommentInfo;
@property(nonatomic) _Bool isSelfLiked; // @synthesize isSelfLiked=_isSelfLiked;
@property(nonatomic) unsigned long long forwardCount; // @synthesize forwardCount=_forwardCount;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) unsigned long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) unsigned long long obejctType; // @synthesize obejctType=_obejctType;
- (id)commentObjectId;
- (_Bool)isValidMusicInteractionStatistics;
@property(readonly, nonatomic) NSString *musicInteractionidentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

