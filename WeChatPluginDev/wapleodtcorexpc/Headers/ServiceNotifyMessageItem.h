//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCFinderJumpInfo;

@interface ServiceNotifyMessageItem : NSObject
{
    NSString *_previewTitle;
    NSString *_avatarUrl;
    NSString *_nick;
    NSString *_iconUrl;
    NSString *_templateId;
    NSString *_header;
    NSString *_tail;
    NSString *_xml;
    NSArray *_displayList;
    WCFinderJumpInfo *_jumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) NSArray *displayList; // @synthesize displayList=_displayList;
@property(retain, nonatomic) NSString *xml; // @synthesize xml=_xml;
@property(retain, nonatomic) NSString *tail; // @synthesize tail=_tail;
@property(retain, nonatomic) NSString *header; // @synthesize header=_header;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSString *previewTitle; // @synthesize previewTitle=_previewTitle;
- (void)parseWithXmlReader:(struct XmlReaderNode_t *)arg1 content:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

