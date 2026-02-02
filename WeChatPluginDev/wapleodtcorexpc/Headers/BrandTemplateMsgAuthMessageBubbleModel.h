//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BrandTemplateMsgAuthMessageBubbleModel
{
    unsigned int _templateType;
    unsigned int _jumpType;
    unsigned int _contactType;
    unsigned int _businessType;
    unsigned int _containerType;
    unsigned int _noticeType;
    unsigned int _isRead;
    unsigned int _location;
    unsigned int _templateOpType;
    NSString *_userName;
    NSString *_templateIdStr;
    NSString *_msgTitle;
    NSString *_msgContent;
    NSString *_jumpInfo;
    NSString *_messageId;
    NSString *_liveId;
    NSString *_feedId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned int templateOpType; // @synthesize templateOpType=_templateOpType;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(nonatomic) unsigned int location; // @synthesize location=_location;
@property(nonatomic) unsigned int isRead; // @synthesize isRead=_isRead;
@property(nonatomic) unsigned int noticeType; // @synthesize noticeType=_noticeType;
@property(nonatomic) unsigned int containerType; // @synthesize containerType=_containerType;
@property(nonatomic) unsigned int businessType; // @synthesize businessType=_businessType;
@property(nonatomic) unsigned int contactType; // @synthesize contactType=_contactType;
@property(retain, nonatomic) NSString *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) unsigned int jumpType; // @synthesize jumpType=_jumpType;
@property(retain, nonatomic) NSString *msgContent; // @synthesize msgContent=_msgContent;
@property(retain, nonatomic) NSString *msgTitle; // @synthesize msgTitle=_msgTitle;
@property(nonatomic) unsigned int templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSString *templateIdStr; // @synthesize templateIdStr=_templateIdStr;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end

