//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, ScheduleOPWrap;

@interface AppMMScheduleItem
{
    NSString *_displayName;
    NSString *_iconUrl;
    ScheduleOPWrap *_scheduleOpWrap;
    NSMutableArray *_opItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *opItems; // @synthesize opItems=_opItems;
@property(retain, nonatomic) ScheduleOPWrap *scheduleOpWrap; // @synthesize scheduleOpWrap=_scheduleOpWrap;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

