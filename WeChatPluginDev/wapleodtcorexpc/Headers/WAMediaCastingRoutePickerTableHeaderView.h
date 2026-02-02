//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMProgressViewEx, MMUILabel, NSString;

@interface WAMediaCastingRoutePickerTableHeaderView : UIView
{
    unsigned long long _type;
    MMUILabel *_label;
    NSString *_text;
    MMProgressViewEx *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMProgressViewEx *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) MMUILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)updateRefreshingStatus:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithType:(unsigned long long)arg1 viewModel:(id)arg2;

@end

