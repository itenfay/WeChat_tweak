//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveBoxId, FinderLiveContact, FinderWindowProductInfo, MMLiveCommentDataItem, NSArray, NSString;

@interface MMFinderLiveCommentPostInfo : NSObject
{
    unsigned int _floatMsgType;
    NSString *_postContent;
    FinderLiveBoxId *_boxIdObj;
    unsigned long long _postType;
    unsigned long long _forwardType;
    NSString *_floatMsgProductId;
    NSArray *_toUserList;
    MMLiveCommentDataItem *_selectCommentItem;
    FinderWindowProductInfo *_questionProductInfo;
    FinderLiveContact *_fromUser;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveContact *fromUser; // @synthesize fromUser=_fromUser;
@property(retain, nonatomic) FinderWindowProductInfo *questionProductInfo; // @synthesize questionProductInfo=_questionProductInfo;
@property(retain, nonatomic) MMLiveCommentDataItem *selectCommentItem; // @synthesize selectCommentItem=_selectCommentItem;
@property(retain, nonatomic) NSArray *toUserList; // @synthesize toUserList=_toUserList;
@property(retain, nonatomic) NSString *floatMsgProductId; // @synthesize floatMsgProductId=_floatMsgProductId;
@property(nonatomic) unsigned int floatMsgType; // @synthesize floatMsgType=_floatMsgType;
@property(nonatomic) unsigned long long forwardType; // @synthesize forwardType=_forwardType;
@property(nonatomic) unsigned long long postType; // @synthesize postType=_postType;
@property(retain, nonatomic) FinderLiveBoxId *boxIdObj; // @synthesize boxIdObj=_boxIdObj;
@property(retain, nonatomic) NSString *postContent; // @synthesize postContent=_postContent;

@end

