//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString;

@interface BrandTemplateMsgContentViewController
{
    NSString *_templateSessionId;
    NSString *_templateId;
    MMUILabel *_emptyLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) NSString *templateSessionId; // @synthesize templateSessionId=_templateSessionId;
- (void)updateTitleView:(id)arg1 ignoreAnimation:(_Bool)arg2;
- (void)reloadTabeView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)initEmptyLabel;
- (void)viewDidLoad;

@end

