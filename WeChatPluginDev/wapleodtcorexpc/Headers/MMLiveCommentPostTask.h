//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId, NSMutableDictionary, NSString;

@interface MMLiveCommentPostTask : NSObject
{
    unsigned int _msgType;
    MMLiveTaskId *_taskId;
    NSString *_content;
    double _localSeq;
    NSString *_clientMsgId;
    NSString *_nickName;
    NSMutableDictionary *_externInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *externInfo; // @synthesize externInfo=_externInfo;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(copy, nonatomic) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
@property(nonatomic) double localSeq; // @synthesize localSeq=_localSeq;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) unsigned long long postTaskID;
- (void)configPostTaskID:(unsigned long long)arg1;
- (void)addExternInfo:(id)arg1;

@end

