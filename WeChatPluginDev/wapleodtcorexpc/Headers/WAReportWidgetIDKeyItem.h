//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportWidgetIDKeyItem
{
    unsigned int _idkey_id;
    unsigned int _idkey_key;
    unsigned int _idkey_value;
    unsigned int _serviceType;
    NSString *_searchQuery;
    NSString *_extParams;
    NSString *_srcAppid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *srcAppid; // @synthesize srcAppid=_srcAppid;
@property(retain, nonatomic) NSString *extParams; // @synthesize extParams=_extParams;
@property(retain, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(nonatomic) unsigned int serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) unsigned int idkey_value; // @synthesize idkey_value=_idkey_value;
@property(nonatomic) unsigned int idkey_key; // @synthesize idkey_key=_idkey_key;
@property(nonatomic) unsigned int idkey_id; // @synthesize idkey_id=_idkey_id;
- (id)reportString;
- (int)reportID;

@end

