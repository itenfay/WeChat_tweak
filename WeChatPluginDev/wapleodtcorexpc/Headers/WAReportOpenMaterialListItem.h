//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportOpenMaterialListItem
{
    unsigned int _weapp_sum;
    unsigned int _weapp_index;
    NSString *_session;
    NSString *_weapp_id;
    NSString *_weapp_name;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *weapp_name; // @synthesize weapp_name=_weapp_name;
@property(retain, nonatomic) NSString *weapp_id; // @synthesize weapp_id=_weapp_id;
@property(nonatomic) unsigned int weapp_index; // @synthesize weapp_index=_weapp_index;
@property(nonatomic) unsigned int weapp_sum; // @synthesize weapp_sum=_weapp_sum;
@property(retain, nonatomic) NSString *session; // @synthesize session=_session;
- (id)reportString;
- (int)reportID;

@end

