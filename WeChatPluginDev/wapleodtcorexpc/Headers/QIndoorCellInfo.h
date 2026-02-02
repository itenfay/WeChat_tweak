//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, QIndoorCellStyle;

@interface QIndoorCellInfo : NSObject
{
    QIndoorCellStyle *_style;
    NSArray *_regions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *regions; // @synthesize regions=_regions;
@property(retain, nonatomic) QIndoorCellStyle *style; // @synthesize style=_style;

@end

