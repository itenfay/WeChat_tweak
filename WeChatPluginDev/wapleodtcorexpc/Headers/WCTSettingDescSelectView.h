//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel;

@interface WCTSettingDescSelectView : NSObject
{
    UILabel *_descLabel;
}

+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
- (void)loadUI:(id)arg1;
- (void)setViewDataModel:(id)arg1;

@end

