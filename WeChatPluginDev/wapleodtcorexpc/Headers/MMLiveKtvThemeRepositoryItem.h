//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveKtvThemeItem, NSMutableArray;

@interface MMLiveKtvThemeRepositoryItem : NSObject
{
    MMLiveKtvThemeItem *_themeItem;
    NSMutableArray *_callbacks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *callbacks; // @synthesize callbacks=_callbacks;
@property(retain, nonatomic) MMLiveKtvThemeItem *themeItem; // @synthesize themeItem=_themeItem;

@end

