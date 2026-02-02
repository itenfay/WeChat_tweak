//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WSTemplateVersionReporter17040
{
    unsigned long long _type;
    unsigned long long _templateVersion;
    unsigned long long _useType;
}

+ (void)ReportAllType;
+ (unsigned long long)GetReportTypeByBiz:(unsigned long long)arg1;
+ (id)genVersionMMKVKey:(unsigned long long)arg1;
+ (id)genLastReportMMKVKey:(unsigned long long)arg1;
@property(nonatomic) unsigned long long useType; // @synthesize useType=_useType;
@property(nonatomic) unsigned long long templateVersion; // @synthesize templateVersion=_templateVersion;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)doReport;
- (void)tryReportOneDayOneTime;
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (id)initWithType:(unsigned long long)arg1 version:(unsigned int)arg2;

@end

