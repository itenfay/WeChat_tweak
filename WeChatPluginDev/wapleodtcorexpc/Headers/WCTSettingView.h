//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIImageView;

@interface WCTSettingView : NSObject
{
    MMUILabel *_subTitleLabel;
    UIImageView *_arrowView;
}

@property(readonly, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(readonly, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
- (void)loadUI:(id)arg1;
- (void)setViewDataModel:(id)arg1;

@end

