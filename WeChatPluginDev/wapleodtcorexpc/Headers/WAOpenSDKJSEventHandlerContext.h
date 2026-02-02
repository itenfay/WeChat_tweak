//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController, WAContact, WAOpenSDKTransferContext;
@protocol MMUIViewControllerDelegate;

@interface WAOpenSDKJSEventHandlerContext : NSObject
{
    unsigned int _sourceDebugMode;
    WAContact *_contact;
    NSString *_sourceUserName;
    NSString *_appId;
    NSString *_sourcePagePath;
    unsigned long long _sourceScene;
    NSString *_sourceSceneNote;
    UIViewController<MMUIViewControllerDelegate> *_sourceViewController;
    NSString *_sourceOpenSDKAppId;
    NSString *_sourceOpenSDKUniversalLink;
    NSString *_sourceInstanceId;
    NSString *_sourceSessionId;
    unsigned long long _sourceVersion;
    NSString *_sourceTitle;
    CDUnknownBlockType _eventCompletionBlock;
    NSString *_qrCodeUuid;
    NSString *_ticket;
    NSString *_jsapiType;
    WAOpenSDKTransferContext *_transferContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAOpenSDKTransferContext *transferContext; // @synthesize transferContext=_transferContext;
@property(copy, nonatomic) NSString *jsapiType; // @synthesize jsapiType=_jsapiType;
@property(copy, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(copy, nonatomic) NSString *qrCodeUuid; // @synthesize qrCodeUuid=_qrCodeUuid;
@property(copy, nonatomic) CDUnknownBlockType eventCompletionBlock; // @synthesize eventCompletionBlock=_eventCompletionBlock;
@property(copy, nonatomic) NSString *sourceTitle; // @synthesize sourceTitle=_sourceTitle;
@property(nonatomic) unsigned int sourceDebugMode; // @synthesize sourceDebugMode=_sourceDebugMode;
@property(nonatomic) unsigned long long sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(copy, nonatomic) NSString *sourceSessionId; // @synthesize sourceSessionId=_sourceSessionId;
@property(copy, nonatomic) NSString *sourceInstanceId; // @synthesize sourceInstanceId=_sourceInstanceId;
@property(copy, nonatomic) NSString *sourceOpenSDKUniversalLink; // @synthesize sourceOpenSDKUniversalLink=_sourceOpenSDKUniversalLink;
@property(copy, nonatomic) NSString *sourceOpenSDKAppId; // @synthesize sourceOpenSDKAppId=_sourceOpenSDKAppId;
@property(nonatomic) __weak UIViewController<MMUIViewControllerDelegate> *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(copy, nonatomic) NSString *sourceSceneNote; // @synthesize sourceSceneNote=_sourceSceneNote;
@property(nonatomic) unsigned long long sourceScene; // @synthesize sourceScene=_sourceScene;
@property(copy, nonatomic) NSString *sourcePagePath; // @synthesize sourcePagePath=_sourcePagePath;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *sourceUserName; // @synthesize sourceUserName=_sourceUserName;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
- (id)init;

@end

