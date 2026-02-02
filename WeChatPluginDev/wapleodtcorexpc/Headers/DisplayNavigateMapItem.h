//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NavigateMap;

@interface DisplayNavigateMapItem
{
    NavigateMap *_map;
    NSString *_displayName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NavigateMap *map; // @synthesize map=_map;
- (id)initWithMap:(id)arg1 DisplayName:(id)arg2;

@end

