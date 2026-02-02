//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WAProfileRelatedViewModel
{
    unsigned long long _type;
    NSString *_registerTitle;
    NSArray *_infoList;
    NSString *_mainTitle;
    NSArray *_relateWeappList;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *relateWeappList; // @synthesize relateWeappList=_relateWeappList;
@property(copy, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(retain, nonatomic) NSArray *infoList; // @synthesize infoList=_infoList;
@property(copy, nonatomic) NSString *registerTitle; // @synthesize registerTitle=_registerTitle;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)generateMainTitle:(unsigned long long)arg1;
- (id)initWithWeAppList:(id)arg1;
- (id)initWithBrandList:(id)arg1;

@end

