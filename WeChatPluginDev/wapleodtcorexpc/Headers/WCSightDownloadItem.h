//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCSightDownloadItem
{
    _Bool _isPreload;
    unsigned int _scene;
    unsigned long long _startTime;
}

+ (id)itemWithStartTime:(unsigned long long)arg1 isPreload:(_Bool)arg2 scene:(unsigned int)arg3;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool isPreload; // @synthesize isPreload=_isPreload;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;

@end

