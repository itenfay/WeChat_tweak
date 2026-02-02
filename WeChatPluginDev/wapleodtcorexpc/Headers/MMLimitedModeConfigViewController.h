//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSArray, NSString, RichTextView, UIImageView, UITableView;

@interface MMLimitedModeConfigViewController
{
    NSString *_ticket;
    long long _bizType;
    long long _scene;
    UIImageView *_iconImageView;
    MMUILabel *_titleLabel;
    RichTextView *_descLabel;
    MMUILabel *_subTitleLabel;
    UITableView *_tableView;
    NSArray *_sectionDatas;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *sectionDatas; // @synthesize sectionDatas=_sectionDatas;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) RichTextView *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
- (id)subTitleText;
- (id)extraDescText;
- (id)descText;
- (void)jumpToBizFollowViewController;
- (void)onChangeLimitedModeFail;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
- (void)onLimitedModeChanged;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setupLayout;
- (void)initUI;
- (void)reloadContent;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (id)initWithBizType:(long long)arg1 scene:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

