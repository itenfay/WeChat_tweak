//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WCFinderBulletConfig;

@interface WCFinderBulletLine : NSObject
{
    WCFinderBulletConfig *_config;
    double _width;
    NSMutableDictionary *_items;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *items; // @synthesize items=_items;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) WCFinderBulletConfig *config; // @synthesize config=_config;
- (void)forceInsertItem:(id)arg1;
- (_Bool)insertItemIfPossible:(id)arg1;
- (void)deleteItem:(id)arg1;
- (_Bool)addItem:(id)arg1;
- (_Bool)canInsertItem:(id)arg1 after:(id)arg2;
- (id)init;

@end

