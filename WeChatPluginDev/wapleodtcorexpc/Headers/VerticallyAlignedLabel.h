//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UILabel.h>

@interface VerticallyAlignedLabel : UILabel
{
    int verticalAlignment_;
}

@property(nonatomic) int verticalAlignment; // @synthesize verticalAlignment=verticalAlignment_;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

