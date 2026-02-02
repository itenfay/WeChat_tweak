//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString;

@interface OpenIMSocialInfomationViewController
{
    CContact *m_contact;
    NSString *_m_customerTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_customerTitle; // @synthesize m_customerTitle=_m_customerTitle;
- (void)setM_contact:(id)arg1;
- (id)m_contact;
- (void)onOpenIMNormalClicked:(id)arg1;
- (void)makeOpenIMNormalCell:(id)arg1 CellInfo:(id)arg2;
- (void)reloadTableView;
- (void)viewDidLoad;

@end

