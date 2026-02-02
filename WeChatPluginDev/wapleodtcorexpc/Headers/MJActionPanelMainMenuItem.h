//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJActionPanelMainMenuItem : NSObject
{
    _Bool _enabled;
    unsigned long long _type;
    NSString *_disabledTipText;
}

+ (id)imageNameWithItem:(id)arg1;
+ (id)titleWithItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *disabledTipText; // @synthesize disabledTipText=_disabledTipText;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 enabled:(_Bool)arg2 disabledTipText:(id)arg3;
- (id)initWithType:(unsigned long long)arg1;

@end

