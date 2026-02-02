//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CContact, UILabel, _TtC6WeChat13DNDReportItem;

@interface VoipRecentStatusUnFoldButton : UIView
{
    _Bool _isDoNotDisturbMode;
    _Bool _isUsingMPUI;
    UILabel *_titleLabel;
    CContact *_contact;
    _TtC6WeChat13DNDReportItem *_dndReportItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC6WeChat13DNDReportItem *dndReportItem; // @synthesize dndReportItem=_dndReportItem;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool isUsingMPUI; // @synthesize isUsingMPUI=_isUsingMPUI;
@property(nonatomic) _Bool isDoNotDisturbMode; // @synthesize isDoNotDisturbMode=_isDoNotDisturbMode;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)exposed;
- (id)initWithContact:(id)arg1;

@end

