//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderMsgChatInfoReporter : NSObject
{
    _Bool _rejectMsgStatus;
    _Bool _needReport;
    unsigned int _myAccountType;
    unsigned int _openChatInfoCount;
    unsigned int _clearMsgHistoryClickCount;
    unsigned int _complianClickCount;
    NSString *_chatSessionId;
    NSString *_chatName;
    NSString *_talkerUsername;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needReport; // @synthesize needReport=_needReport;
@property(nonatomic) unsigned int complianClickCount; // @synthesize complianClickCount=_complianClickCount;
@property(nonatomic) unsigned int clearMsgHistoryClickCount; // @synthesize clearMsgHistoryClickCount=_clearMsgHistoryClickCount;
@property(nonatomic) unsigned int openChatInfoCount; // @synthesize openChatInfoCount=_openChatInfoCount;
@property(nonatomic) _Bool rejectMsgStatus; // @synthesize rejectMsgStatus=_rejectMsgStatus;
@property(retain, nonatomic) NSString *talkerUsername; // @synthesize talkerUsername=_talkerUsername;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) unsigned int myAccountType; // @synthesize myAccountType=_myAccountType;
@property(retain, nonatomic) NSString *chatSessionId; // @synthesize chatSessionId=_chatSessionId;
- (void)quitAndReport;
- (void)enterViewController;

@end

