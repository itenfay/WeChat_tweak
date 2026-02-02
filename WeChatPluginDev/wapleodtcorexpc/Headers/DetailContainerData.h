//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class DetailSubIcon, RedDot, TableCellViewData, UIImage;

@interface DetailContainerData : NSObject
{
    TableCellViewData *_cellData;
    RedDot *_redDot;
    DetailSubIcon *_subIcon;
    UIImage *_rightIcon;
}

- (void).cxx_destruct;
@property(retain) UIImage *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(retain) DetailSubIcon *subIcon; // @synthesize subIcon=_subIcon;
@property(retain) RedDot *redDot; // @synthesize redDot=_redDot;
@property(retain) TableCellViewData *cellData; // @synthesize cellData=_cellData;

@end

