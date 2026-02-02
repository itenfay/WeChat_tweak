//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportSubscribeMessageItem
{
    _Bool _keepOption;
    unsigned long long _templateType;
    NSString *_templateItems;
    unsigned long long _operationType;
    NSString *_bizUserName;
    NSString *_clickIndexString;
    NSString *_clickCountString;
    unsigned long long _type;
    NSString *_kvUid;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *kvUid; // @synthesize kvUid=_kvUid;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *clickCountString; // @synthesize clickCountString=_clickCountString;
@property(copy, nonatomic) NSString *clickIndexString; // @synthesize clickIndexString=_clickIndexString;
@property(copy, nonatomic) NSString *bizUserName; // @synthesize bizUserName=_bizUserName;
@property(nonatomic) _Bool keepOption; // @synthesize keepOption=_keepOption;
@property(nonatomic) unsigned long long operationType; // @synthesize operationType=_operationType;
@property(copy, nonatomic) NSString *templateItems; // @synthesize templateItems=_templateItems;
@property(nonatomic) unsigned long long templateType; // @synthesize templateType=_templateType;
- (int)reportID;
- (id)reportString;
- (void)makeSafeString;

@end

