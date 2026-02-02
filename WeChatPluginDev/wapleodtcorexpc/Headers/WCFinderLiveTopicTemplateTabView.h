//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UILabel;
@protocol WCFinderTabViewDelegate;

@interface WCFinderLiveTopicTemplateTabView : UIView
{
    _Bool _selected;
    id <WCFinderTabViewDelegate> delegate;
    NSString *_text;
    UILabel *_textLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak id <WCFinderTabViewDelegate> delegate; // @synthesize delegate;
- (void)setBindRedDotPath:(id)arg1;
- (void)updateForState:(unsigned long long)arg1;
- (void)setTitleText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

