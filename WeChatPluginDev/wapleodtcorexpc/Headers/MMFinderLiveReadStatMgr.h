//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMFinderLiveReadStatMgr : NSObject
{
    NSMutableDictionary *_records;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *records; // @synthesize records=_records;
- (_Bool)checkReadRecord:(unsigned long long)arg1 commentScenes:(id)arg2;
- (_Bool)checkReadRecord:(unsigned long long)arg1 commentScene:(int)arg2;
- (_Bool)checkReadRecord:(unsigned long long)arg1;
- (void)addReadRecord:(unsigned long long)arg1 commentScene:(int)arg2;
- (id)init;

@end

