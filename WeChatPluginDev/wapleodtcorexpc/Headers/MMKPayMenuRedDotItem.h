//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMKPayMenuRedDotItem : NSObject
{
    NSString *_itemName;
    long long _expireTime;
    NSString *_wording;
}

+ (id)KPayMenuRedDotItemWithItemName:(id)arg1 expireTime:(long long)arg2 wording:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(readonly, nonatomic) long long expireTime; // @synthesize expireTime=_expireTime;
@property(readonly, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
- (id)description;
- (id)initWithItemName:(id)arg1 expireTime:(long long)arg2 wording:(id)arg3;

@end

