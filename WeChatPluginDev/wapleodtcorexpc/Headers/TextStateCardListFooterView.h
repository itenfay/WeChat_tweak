//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, NSString;

@interface TextStateCardListFooterView : UIView
{
    _Bool _showPublishEntry;
    NSString *_footnote;
    CDUnknownBlockType _tapPublishButtonHandler;
    MMUILabel *_footnoteLabel;
    MMUIButton *_publishButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *publishButton; // @synthesize publishButton=_publishButton;
@property(retain, nonatomic) MMUILabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(copy, nonatomic) CDUnknownBlockType tapPublishButtonHandler; // @synthesize tapPublishButtonHandler=_tapPublishButtonHandler;
@property(nonatomic) _Bool showPublishEntry; // @synthesize showPublishEntry=_showPublishEntry;
@property(retain, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
- (void)onTapPublishButton;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

