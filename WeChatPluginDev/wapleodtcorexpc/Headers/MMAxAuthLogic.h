//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AxAuthSecResp;
@protocol MMAxAuthLogicDelegate;

@interface MMAxAuthLogic : NSObject
{
    AxAuthSecResp *m_axAuthSecResp;
    _Bool m_canRetry;
    unsigned int m_no_response_retry_count;
    unsigned int m_system_error_retry_count;
    unsigned int m_server_busy_retry_count;
    unsigned int _axTicketExpireTimestamp;
    unsigned int _eventId;
    id <MMAxAuthLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property unsigned int eventId; // @synthesize eventId=_eventId;
@property(nonatomic) unsigned int axTicketExpireTimestamp; // @synthesize axTicketExpireTimestamp=_axTicketExpireTimestamp;
@property __weak id <MMAxAuthLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)failWithReason:(id)arg1;
- (_Bool)startRequest;
- (_Bool)isRequesting;
- (id)axAuthDescription;
@property(readonly, nonatomic) unsigned int axAuthCgiId;
- (id)initWithAxAuthSecResp:(id)arg1;

@end

