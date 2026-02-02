//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveBarrageDataItem : NSObject
{
    unsigned int _type;
    unsigned int _createTime;
    unsigned int _deleteFlag;
    unsigned long long _barrageId;
    NSString *_username;
    NSString *_nickname;
    NSString *_msg;
    unsigned long long _relationType;
}

+ (_Bool)isCommentValid:(id)arg1;
+ (id)createBarrageDataItemFromComment:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int deleteFlag; // @synthesize deleteFlag=_deleteFlag;
@property(nonatomic) unsigned long long relationType; // @synthesize relationType=_relationType;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned long long barrageId; // @synthesize barrageId=_barrageId;
- (id)uniqueLogId;
- (id)uniqueId;
@property(readonly, nonatomic) _Bool isFromStranger;

@end

