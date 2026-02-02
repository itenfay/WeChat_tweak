//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportJSErrorItem
{
    unsigned int _developerMarkedScene;
    NSString *_name;
    NSString *_desc;
    NSString *_stack;
    NSString *_strPublibCustomVersion;
    NSString *_strPublibUpdateTime;
    unsigned long long _launchStage;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long launchStage; // @synthesize launchStage=_launchStage;
@property(copy, nonatomic) NSString *strPublibUpdateTime; // @synthesize strPublibUpdateTime=_strPublibUpdateTime;
@property(copy, nonatomic) NSString *strPublibCustomVersion; // @synthesize strPublibCustomVersion=_strPublibCustomVersion;
@property(nonatomic) unsigned int developerMarkedScene; // @synthesize developerMarkedScene=_developerMarkedScene;
@property(copy, nonatomic) NSString *stack; // @synthesize stack=_stack;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)reportString;
- (void)makeSafeString;

@end

