//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WXKBMessageActionContext, WXKBMessageActionReportObject;

@interface WXKBMessageAction : NSObject
{
    unsigned int _messageType;
    unsigned int _actionType;
    NSString *_sessionId;
    WXKBMessageActionContext *_context;
    CDUnknownBlockType _completion;
    WXKBMessageActionReportObject *_reportObject;
}

+ (id)messageActionWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WXKBMessageActionReportObject *reportObject; // @synthesize reportObject=_reportObject;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) WXKBMessageActionContext *context; // @synthesize context=_context;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) unsigned int messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)performWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)initReportObject;
- (id)initWithDictionary:(id)arg1;
- (id)getErrorString;
- (id)getLoadingString;
- (void)privatePerform;
- (_Bool)precheck;

@end

