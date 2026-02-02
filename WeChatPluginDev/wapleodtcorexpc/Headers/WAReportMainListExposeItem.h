//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportMainListExposeItem
{
    unsigned int _enterListTimeStamp;
    unsigned int _leaveListTimeStamp;
    unsigned int _leaveListType;
    unsigned int _clickAppidIndex;
    unsigned int _clickAppidIsStar;
    NSString *_clickAppid;
    NSString *_clickAppidName;
    NSString *_appidFrom1And5;
    NSString *_appidFrom6And10;
    NSString *_appidFrom11And15;
    NSString *_appidFrom16And20;
    NSString *_openSession;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *openSession; // @synthesize openSession=_openSession;
@property(copy, nonatomic) NSString *appidFrom16And20; // @synthesize appidFrom16And20=_appidFrom16And20;
@property(copy, nonatomic) NSString *appidFrom11And15; // @synthesize appidFrom11And15=_appidFrom11And15;
@property(copy, nonatomic) NSString *appidFrom6And10; // @synthesize appidFrom6And10=_appidFrom6And10;
@property(copy, nonatomic) NSString *appidFrom1And5; // @synthesize appidFrom1And5=_appidFrom1And5;
@property(nonatomic) unsigned int clickAppidIsStar; // @synthesize clickAppidIsStar=_clickAppidIsStar;
@property(copy, nonatomic) NSString *clickAppidName; // @synthesize clickAppidName=_clickAppidName;
@property(copy, nonatomic) NSString *clickAppid; // @synthesize clickAppid=_clickAppid;
@property(nonatomic) unsigned int clickAppidIndex; // @synthesize clickAppidIndex=_clickAppidIndex;
@property(nonatomic) unsigned int leaveListType; // @synthesize leaveListType=_leaveListType;
@property(nonatomic) unsigned int leaveListTimeStamp; // @synthesize leaveListTimeStamp=_leaveListTimeStamp;
@property(nonatomic) unsigned int enterListTimeStamp; // @synthesize enterListTimeStamp=_enterListTimeStamp;
- (id)reportString;
- (int)reportID;

@end

