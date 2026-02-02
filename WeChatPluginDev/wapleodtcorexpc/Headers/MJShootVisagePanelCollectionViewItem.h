//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJShootVisagePanelCollectionViewItem : NSObject
{
    NSString *_title;
    NSString *_iconName;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 iconName:(id)arg2 type:(unsigned long long)arg3;

@end

