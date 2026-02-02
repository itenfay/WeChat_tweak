//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface WCFinderPostAliveTipsActionSheet : NSObject
{
    UIView *_tipsView;
}

@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
- (void)onClickAcceptBtn;
- (id)getTipsActionSheetView;
- (double)getCustomView:(double)arg1;
- (double)heightOfWholeSheet;

@end

