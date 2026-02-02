//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface VideoPreloadReporter
{
    NSMutableDictionary *m_dict;
}

- (void).cxx_destruct;
- (void)doReport:(id)arg1;
- (void)onPreloadTaskComplete:(id)arg1 preloadDuration:(unsigned int)arg2 preloadDataSize:(unsigned int)arg3 preloadVideoSize:(unsigned int)arg4;
- (void)onPreloadTaskCreate:(id)arg1 data:(id)arg2;
- (id)init;
- (void)reset;

@end

