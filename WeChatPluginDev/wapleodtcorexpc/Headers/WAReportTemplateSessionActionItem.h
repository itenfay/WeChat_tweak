//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportTemplateSessionActionItem
{
    unsigned int _EventID;
    unsigned int _TimeSecond;
    unsigned int _TargetPageType;
    unsigned int _MenuOperateType;
    unsigned int _GlobalNotifySwitch;
    unsigned int _contactType;
    NSString *_templateSessionUserName;
    NSString *_AccountCount;
    NSString *_TemplateID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int contactType; // @synthesize contactType=_contactType;
@property(nonatomic) unsigned int GlobalNotifySwitch; // @synthesize GlobalNotifySwitch=_GlobalNotifySwitch;
@property(nonatomic) unsigned int MenuOperateType; // @synthesize MenuOperateType=_MenuOperateType;
@property(nonatomic) unsigned int TargetPageType; // @synthesize TargetPageType=_TargetPageType;
@property(retain, nonatomic) NSString *TemplateID; // @synthesize TemplateID=_TemplateID;
@property(retain, nonatomic) NSString *AccountCount; // @synthesize AccountCount=_AccountCount;
@property(nonatomic) unsigned int TimeSecond; // @synthesize TimeSecond=_TimeSecond;
@property(retain, nonatomic) NSString *templateSessionUserName; // @synthesize templateSessionUserName=_templateSessionUserName;
@property(nonatomic) unsigned int EventID; // @synthesize EventID=_EventID;
- (id)reportString;
- (int)reportID;

@end

