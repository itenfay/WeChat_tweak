//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportTemplateMsgActionItem
{
    unsigned int _operateTime;
    unsigned int _templateMsgType;
    unsigned int _appBrandType;
    unsigned long long _eventID;
    NSString *_templateID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int appBrandType; // @synthesize appBrandType=_appBrandType;
@property(nonatomic) unsigned int templateMsgType; // @synthesize templateMsgType=_templateMsgType;
@property(nonatomic) unsigned int operateTime; // @synthesize operateTime=_operateTime;
@property(copy, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
@property(nonatomic) unsigned long long eventID; // @synthesize eventID=_eventID;
- (id)reportString;

@end

