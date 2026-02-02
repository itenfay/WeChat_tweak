//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString;

@interface WCFinderTextDetailListPannel : UIView
{
    NSString *_title;
    NSString *_emptyWording;
    NSArray *_items;
}

+ (id)buildWithTitle:(id)arg1 detail:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *emptyWording; // @synthesize emptyWording=_emptyWording;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)displayOnView:(id)arg1;
- (id)configEmptyWording:(id)arg1;

@end

