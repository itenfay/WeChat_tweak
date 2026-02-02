//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface SubscribeMsgItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *audioTemplateUrl; // @dynamic audioTemplateUrl;
@property(retain, nonatomic) NSString *bizUserName; // @dynamic bizUserName;
@property(nonatomic) unsigned int businessType; // @dynamic businessType;
@property(nonatomic) unsigned int chooseStatus; // @dynamic chooseStatus;
@property(nonatomic) unsigned int isAcceptWithAudio; // @dynamic isAcceptWithAudio;
@property(nonatomic) unsigned int isAcceptWithForceNotify; // @dynamic isAcceptWithForceNotify;
@property(nonatomic) unsigned int isAudioTemplate; // @dynamic isAudioTemplate;
@property(nonatomic) unsigned int isBan; // @dynamic isBan;
@property(nonatomic) unsigned int isForceNotifyTemplate; // @dynamic isForceNotifyTemplate;
@property(nonatomic) unsigned int isOpen; // @dynamic isOpen;
@property(retain, nonatomic) NSMutableArray *keyWordList; // @dynamic keyWordList;
@property(retain, nonatomic) NSString *sceneDesc; // @dynamic sceneDesc;
@property(nonatomic) unsigned int settingStatus; // @dynamic settingStatus;
@property(retain, nonatomic) NSString *templateId; // @dynamic templateId;
@property(nonatomic) unsigned int templateType; // @dynamic templateType;
@property(nonatomic) unsigned int tid; // @dynamic tid;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *wxaSubscribeStatusString; // @dynamic wxaSubscribeStatusString;

@end

