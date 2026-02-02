//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, UIView;

@interface WCHeaderActionSheet
{
    NSArray *_headerArr;
    UIView *_headerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSArray *headerArr; // @synthesize headerArr=_headerArr;
- (void)onCloseMenu:(id)arg1;
- (id)getFixedHeaderViewInWidth:(double)arg1;
- (void)setAllButtonTitle:(id)arg1;
- (id)initByHeader:(id)arg1;

@end

