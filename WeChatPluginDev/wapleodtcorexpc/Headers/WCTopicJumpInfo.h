//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class SearchTagJumpRequest, SearchTagJumpResponse, WCTopicReportBaseItem;

@interface WCTopicJumpInfo : NSObject
{
    _Bool _isDuplicateReq;
    _Bool _isReplaced;
    _Bool _isTimeout;
    _Bool _isMsgRecord;
    _Bool _openWeAppWithoutAlert;
    unsigned int _eventId;
    id _object;
    SearchTagJumpRequest *_req;
    SearchTagJumpResponse *_rsp;
    WCTopicReportBaseItem *_reportItem;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int eventId; // @synthesize eventId=_eventId;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) _Bool openWeAppWithoutAlert; // @synthesize openWeAppWithoutAlert=_openWeAppWithoutAlert;
@property(nonatomic) _Bool isMsgRecord; // @synthesize isMsgRecord=_isMsgRecord;
@property(retain, nonatomic) WCTopicReportBaseItem *reportItem; // @synthesize reportItem=_reportItem;
@property(nonatomic) _Bool isTimeout; // @synthesize isTimeout=_isTimeout;
@property(nonatomic) _Bool isReplaced; // @synthesize isReplaced=_isReplaced;
@property(nonatomic) _Bool isDuplicateReq; // @synthesize isDuplicateReq=_isDuplicateReq;
@property(retain, nonatomic) SearchTagJumpResponse *rsp; // @synthesize rsp=_rsp;
@property(retain, nonatomic) SearchTagJumpRequest *req; // @synthesize req=_req;
@property(nonatomic) __weak id object; // @synthesize object=_object;
- (_Bool)isEqualReq:(id)arg1;
- (void)sendResult;
- (int)jumpType;
- (_Bool)isTrash;

@end

