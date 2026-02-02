//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, WCPayProfession;
@protocol WCPayGetProfessionViewControllerDelegate;

@interface WCPayGetProfessionViewController
{
    WCPayProfession *_selectedProfession;
    NSArray *_professions;
    id <WCPayGetProfessionViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayGetProfessionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *professions; // @synthesize professions=_professions;
@property(retain, nonatomic) WCPayProfession *selectedProfession; // @synthesize selectedProfession=_selectedProfession;
- (void)clickInfoCell:(id)arg1;
- (void)reloadTableView;
- (void)viewDidLoad;
- (id)initWithProfessions:(id)arg1;

@end

