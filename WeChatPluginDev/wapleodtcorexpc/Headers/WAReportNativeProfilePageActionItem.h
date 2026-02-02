//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportNativeProfilePageActionItem
{
    unsigned int _eventTime;
    unsigned int _shareActionType;
    unsigned long long _enterScene;
    unsigned long long _eventID;
    unsigned long long _result;
    NSString *_shareId;
    NSString *_shareTitle;
    NSString *_sharePath;
    NSString *_imageUrl;
    unsigned long long _shopGuarantee;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long shopGuarantee; // @synthesize shopGuarantee=_shopGuarantee;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *sharePath; // @synthesize sharePath=_sharePath;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(nonatomic) unsigned int shareActionType; // @synthesize shareActionType=_shareActionType;
@property(retain, nonatomic) NSString *shareId; // @synthesize shareId=_shareId;
@property(nonatomic) unsigned int eventTime; // @synthesize eventTime=_eventTime;
@property(nonatomic) unsigned long long result; // @synthesize result=_result;
@property(nonatomic) unsigned long long eventID; // @synthesize eventID=_eventID;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
- (id)reportString;

@end

