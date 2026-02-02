//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface NavigateMap
{
    int _mapType;
    NSString *_mapName;
    NSString *_viewUrl;
    NSString *_navigateUrl;
    NSString *_installUrl;
    NSString *_queryUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *queryUrl; // @synthesize queryUrl=_queryUrl;
@property(retain, nonatomic) NSString *installUrl; // @synthesize installUrl=_installUrl;
@property(retain, nonatomic) NSString *navigateUrl; // @synthesize navigateUrl=_navigateUrl;
@property(retain, nonatomic) NSString *viewUrl; // @synthesize viewUrl=_viewUrl;
@property(retain, nonatomic) NSString *mapName; // @synthesize mapName=_mapName;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;

@end

