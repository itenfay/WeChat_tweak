//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber, WCFinderContact, WCTableViewManager;

@interface WCFinderInteractionLimitMessageVC
{
    CDUnknownBlockType _complectionBlock;
    WCTableViewManager *_tableViewManager;
    NSNumber *_svrSelectValue;
    NSNumber *_currentSelectValue;
    WCFinderContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSNumber *currentSelectValue; // @synthesize currentSelectValue=_currentSelectValue;
@property(retain, nonatomic) NSNumber *svrSelectValue; // @synthesize svrSelectValue=_svrSelectValue;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(copy, nonatomic) CDUnknownBlockType complectionBlock; // @synthesize complectionBlock=_complectionBlock;
- (void)clickCellAction:(id)arg1;
- (void)onReturn;
- (void)onDone;
- (id)createCellWithTitle:(id)arg1 subTitle:(id)arg2 isSelected:(_Bool)arg3;
- (void)reloadData;
- (id)getTitleArray;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;

@end

