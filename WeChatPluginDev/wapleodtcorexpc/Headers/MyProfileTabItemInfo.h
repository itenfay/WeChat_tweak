//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface MyProfileTabItemInfo : NSObject
{
    NSString *_titleStr;
    UIImage *_normalImage;
    unsigned long long _tabType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(retain, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;

@end

