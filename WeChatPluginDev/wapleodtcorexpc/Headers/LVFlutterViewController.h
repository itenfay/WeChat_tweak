//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary;

@interface LVFlutterViewController
{
    NSDictionary *_params;
}

+ (id)commonReportParams;
+ (_Bool)checkDictionaryOnlyHasBasicElement:(id)arg1;
+ (_Bool)checkArrayOnlyHasBasicElement:(id)arg1;
+ (id)routeName;
+ (id)extraPlugins;
+ (id)createWithParam:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
- (void)viewDidLoad;

@end

