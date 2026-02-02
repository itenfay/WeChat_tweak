//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, UIColor;

@interface QIndoorCellPayload : NSObject
{
    UIColor *_color;
    NSArray *_regionIDS;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *regionIDS; // @synthesize regionIDS=_regionIDS;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;

@end

