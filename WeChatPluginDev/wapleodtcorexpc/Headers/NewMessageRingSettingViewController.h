//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RingToneAvPlayer, WCTableViewSectionManager;

@interface NewMessageRingSettingViewController
{
    unsigned long long _ringType;
    WCTableViewSectionManager *_section;
    RingToneAvPlayer *_ringPlayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RingToneAvPlayer *ringPlayer; // @synthesize ringPlayer=_ringPlayer;
@property(retain, nonatomic) WCTableViewSectionManager *section; // @synthesize section=_section;
@property(nonatomic) unsigned long long ringType; // @synthesize ringType=_ringType;
- (void)setUIForRingType:(unsigned long long)arg1;
- (void)didClickCell:(id)arg1 indexPath:(id)arg2;
- (id)genNewMessageRingCell:(unsigned long long)arg1;
- (void)reloadTableData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

@end

