//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableSet, NSString, WCFinderComment;

@interface WCCommentSectionViewModel : NSObject
{
    _Bool _showSubCommentList;
    _Bool _upContinueFlag;
    _Bool _downContinueFlag;
    _Bool _shouldHideMoreCommentCount;
    long long _commentID;
    NSString *_clientID;
    unsigned long long _expandCommentCount;
    NSData *_lastBuffer;
    unsigned long long _sectionViewType;
    NSString *_sectionDescriptionStr;
    WCFinderComment *_rootComment;
    NSMutableSet *_subCommentIDSet;
}

+ (id)commentDescriptionSectionViewModelWithDescription:(id)arg1 type:(unsigned long long)arg2;
+ (id)commentSectionViewModelWithRootComment:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *subCommentIDSet; // @synthesize subCommentIDSet=_subCommentIDSet;
@property(retain, nonatomic) WCFinderComment *rootComment; // @synthesize rootComment=_rootComment;
@property(nonatomic) _Bool shouldHideMoreCommentCount; // @synthesize shouldHideMoreCommentCount=_shouldHideMoreCommentCount;
@property(copy, nonatomic) NSString *sectionDescriptionStr; // @synthesize sectionDescriptionStr=_sectionDescriptionStr;
@property(nonatomic) unsigned long long sectionViewType; // @synthesize sectionViewType=_sectionViewType;
@property(nonatomic) _Bool downContinueFlag; // @synthesize downContinueFlag=_downContinueFlag;
@property(nonatomic) _Bool upContinueFlag; // @synthesize upContinueFlag=_upContinueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long expandCommentCount; // @synthesize expandCommentCount=_expandCommentCount;
@property(nonatomic) _Bool showSubCommentList; // @synthesize showSubCommentList=_showSubCommentList;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(nonatomic) long long commentID; // @synthesize commentID=_commentID;
- (long long)getIndexWithCommentID:(unsigned long long)arg1;
- (void)changeCommentBlackListFlagComment:(id)arg1 isInBlackList:(_Bool)arg2;
- (_Bool)postCommentFailure:(id)arg1;
- (_Bool)postCommentSuccessful:(id)arg1;
- (void)addPostComment:(id)arg1;
- (unsigned long long)getLastSubCommentIndex;
- (void)addSubComments:(id)arg1 addToBottom:(_Bool)arg2;
- (double)extraHeightWithIndex:(unsigned long long)arg1;
- (void)replaceRootCommentByPostSuccessful:(id)arg1;
- (_Bool)removeSubCommentWithCommentID:(long long)arg1;
- (unsigned long long)numberOfComment;
- (unsigned long long)getMoreCommentTypeIndex:(unsigned long long)arg1;
- (unsigned long long)getCommentCellTypeWithIndex:(unsigned long long)arg1;
- (id)getRootComment;
- (id)getFinderCommentWithCommentID:(unsigned long long)arg1;
- (id)getFinderCommentWithIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long subCommentCount;

@end

