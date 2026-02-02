//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class NSDictionary, NSString, UIColor, WAAllTouchRecognizer;

@interface WAScrollView : UIScrollView
{
    unsigned int _viewId;
    NSString *_userData;
    NSDictionary *_style;
    UIColor *_backgroundColor;
    WAAllTouchRecognizer *_allTouchGesgure;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAAllTouchRecognizer *allTouchGesgure; // @synthesize allTouchGesgure=_allTouchGesgure;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSDictionary *style; // @synthesize style=_style;
@property(nonatomic) unsigned int viewId; // @synthesize viewId=_viewId;
@property(retain, nonatomic) NSString *userData; // @synthesize userData=_userData;
- (void)setViewStyle:(id)arg1;
- (void)layoutSubviews;
- (void)setTouchDelegate:(id)arg1;
- (id)init;

@end

