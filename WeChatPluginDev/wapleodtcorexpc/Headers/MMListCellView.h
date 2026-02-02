//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMListCellConfig;
@protocol MMListContentUIDelegate;

@interface MMListCellView : UIView
{
    _Bool _isHighlightable;
    MMListCellConfig *_config;
    id <MMListContentUIDelegate> _uiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMListContentUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
@property(retain, nonatomic) MMListCellConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool isHighlightable; // @synthesize isHighlightable=_isHighlightable;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithConfig:(id)arg1 uiDelegate:(id)arg2;
- (id)horizontalStack;
- (id)verticalStack;
- (id)drawCell;

@end

