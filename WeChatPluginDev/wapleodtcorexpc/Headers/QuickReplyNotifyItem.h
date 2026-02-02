//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, CMessageWrap, NSString, UIImage;

@interface QuickReplyNotifyItem : NSObject
{
    _Bool _hideDetailContent;
    NSString *_title;
    NSString *_desc;
    NSString *_content;
    NSString *_username;
    UIImage *_customIconImage;
    CContact *_contact;
    CMessageWrap *_message;
    NSString *_reportMsgId;
    NSString *_reportMsgType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reportMsgType; // @synthesize reportMsgType=_reportMsgType;
@property(retain, nonatomic) NSString *reportMsgId; // @synthesize reportMsgId=_reportMsgId;
@property(retain, nonatomic) CMessageWrap *message; // @synthesize message=_message;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UIImage *customIconImage; // @synthesize customIconImage=_customIconImage;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) _Bool hideDetailContent; // @synthesize hideDetailContent=_hideDetailContent;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)voiceOver;
- (_Bool)isSupportedMessage:(id)arg1;
- (id)initWithUsername:(id)arg1 messages:(id)arg2;
- (id)initWithUsername:(id)arg1 message:(id)arg2;

@end

