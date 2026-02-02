//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSValue, UIColor;

@interface KindaRichLabelBkgDataItem : NSObject
{
    NSValue *_range;
    UIColor *_bkgColor;
    double _cornerRadius;
}

- (void).cxx_destruct;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *bkgColor; // @synthesize bkgColor=_bkgColor;
@property(retain, nonatomic) NSValue *range; // @synthesize range=_range;

@end

