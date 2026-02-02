//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString;

@interface RoomHistoryContext : NSObject
{
    _Bool _revokeAndDeletingMemberFlag;
    _Bool _isExpiredForRevoking;
    CMessageWrap *_historyMessage;
    CMessageWrap *_downloadingHistoryRecordMsg;
    NSString *_nsEventIdForRevokeHistoryRecord;
}

+ (void)StatViewHistory:(id)arg1 HistoryMessage:(id)arg2;
+ (void)StatOperRoom:(id)arg1 HistoryMessage:(id)arg2 ClickType:(unsigned int)arg3 RemovedMembers:(id)arg4 CgiResult:(unsigned int)arg5;
- (void).cxx_destruct;
@property(nonatomic) _Bool isExpiredForRevoking; // @synthesize isExpiredForRevoking=_isExpiredForRevoking;
@property(nonatomic) _Bool revokeAndDeletingMemberFlag; // @synthesize revokeAndDeletingMemberFlag=_revokeAndDeletingMemberFlag;
@property(retain, nonatomic) NSString *nsEventIdForRevokeHistoryRecord; // @synthesize nsEventIdForRevokeHistoryRecord=_nsEventIdForRevokeHistoryRecord;
@property(retain, nonatomic) CMessageWrap *downloadingHistoryRecordMsg; // @synthesize downloadingHistoryRecordMsg=_downloadingHistoryRecordMsg;
@property(retain, nonatomic) CMessageWrap *historyMessage; // @synthesize historyMessage=_historyMessage;
- (void)reset;

@end

