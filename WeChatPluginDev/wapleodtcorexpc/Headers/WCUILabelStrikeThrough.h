//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UILabel.h>

@class UIColor;

@interface WCUILabelStrikeThrough : UILabel
{
    int xOffset;
    int yOffset;
    int widthOffset;
    int stroke;
    UIColor *strokeColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor;
@property(nonatomic) int stroke; // @synthesize stroke;
@property(nonatomic) int widthOffset; // @synthesize widthOffset;
@property(nonatomic) int yOffset; // @synthesize yOffset;
@property(nonatomic) int xOffset; // @synthesize xOffset;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 xOffset:(int)arg2 yOffset:(int)arg3 widthOffset:(int)arg4 stroke:(int)arg5 strokeColor:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1;

@end

