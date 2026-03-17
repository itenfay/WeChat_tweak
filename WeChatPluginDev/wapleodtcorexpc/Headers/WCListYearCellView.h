//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel;

@interface WCListYearCellView : NSObject
{
    UILabel *_yearLabel;
}

+ (double)heightOfCellWithYear:(long long)arg1;
@property(retain, nonatomic) UILabel *yearLabel; // @synthesize yearLabel=_yearLabel;
- (void)configureWithYear:(long long)arg1;
- (void)layoutSubviews;
- (id)init;

@end

