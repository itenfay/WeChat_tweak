//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface ChatBackgroundSettings : NSObject
{
    NSMutableArray *items;
    NSMutableDictionary *backgroundPreferences;
    long long currentCID;
    long long lastSyncListDate;
}

- (void).cxx_destruct;
@property(nonatomic) long long lastSyncListDate; // @synthesize lastSyncListDate;
@property(nonatomic) long long currentCID; // @synthesize currentCID;
@property(retain, nonatomic) NSMutableDictionary *backgroundPreferences; // @synthesize backgroundPreferences;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)keyPaths;
- (unsigned long long)countOfItems;
- (id)getDefaultBackgroundItem;
- (id)getBackgroundPreferenceForUsername:(id)arg1;
- (void)setBackgroundPreference:(id)arg1 forUsername:(id)arg2;
- (id)getChatBackgroundItemByCID:(long long)arg1;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)initWithDefault;

@end

