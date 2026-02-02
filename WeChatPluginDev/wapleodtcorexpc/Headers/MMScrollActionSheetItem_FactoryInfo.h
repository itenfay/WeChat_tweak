//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface MMScrollActionSheetItem_FactoryInfo : NSObject
{
    int _itemType;
    int _position;
    NSString *_title;
    UIImage *_iconImg;
}

- (void).cxx_destruct;
@property(nonatomic) int position; // @synthesize position=_position;
@property(retain, nonatomic) UIImage *iconImg; // @synthesize iconImg=_iconImg;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int itemType; // @synthesize itemType=_itemType;

@end

