//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, CMessageWrap, NSString, WXMediaInternalMessage;

@interface OpenApiAppMsgContext : NSObject
{
    _Bool _appBrandWithShareTicket;
    CMessageWrap *_msgWrap;
    CContact *_contact;
    WXMediaInternalMessage *_mediaMessage;
    NSString *_fromAppId;
    CDUnknownBlockType _handleCallback;
    CDUnknownBlockType _genCallback;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool appBrandWithShareTicket; // @synthesize appBrandWithShareTicket=_appBrandWithShareTicket;
@property(copy, nonatomic) CDUnknownBlockType genCallback; // @synthesize genCallback=_genCallback;
@property(copy, nonatomic) CDUnknownBlockType handleCallback; // @synthesize handleCallback=_handleCallback;
@property(retain, nonatomic) NSString *fromAppId; // @synthesize fromAppId=_fromAppId;
@property(retain, nonatomic) WXMediaInternalMessage *mediaMessage; // @synthesize mediaMessage=_mediaMessage;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;

@end

