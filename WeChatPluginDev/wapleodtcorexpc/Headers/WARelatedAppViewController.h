//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WARelatedAppViewController
{
    NSString *_teamName;
    NSMutableArray *_relateWeappList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *relateWeappList; // @synthesize relateWeappList=_relateWeappList;
@property(retain, nonatomic) NSString *teamName; // @synthesize teamName=_teamName;
- (void)reloadListUI;
- (void)dealloc;
- (void)onBackButtonClicked:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTeamName:(id)arg1 relatedAppList:(id)arg2;

@end

