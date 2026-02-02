//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface StatusCommentDataItem : NSObject
{
    unsigned int _commentCount;
    NSString *_fromUsername;
    NSString *_textStateId;
    NSString *_content;
    NSString *_commentId;
    NSString *_rootCommentId;
    NSString *_feedOwnerUsername;
    unsigned long long _timeStamp;
    unsigned long long _operation;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) unsigned long long operation; // @synthesize operation=_operation;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *feedOwnerUsername; // @synthesize feedOwnerUsername=_feedOwnerUsername;
@property(copy, nonatomic) NSString *rootCommentId; // @synthesize rootCommentId=_rootCommentId;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *textStateId; // @synthesize textStateId=_textStateId;
@property(copy, nonatomic) NSString *fromUsername; // @synthesize fromUsername=_fromUsername;
@property(readonly, nonatomic) _Bool isDeleted;
- (_Bool)isValid;
- (id)description;

@end

