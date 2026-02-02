//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCDBVacuumInfo : NSObject
{
    int _tag;
    unsigned long long _totalSize;
    unsigned long long _freeSize;
    NSString *_path;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) unsigned long long freeSize; // @synthesize freeSize=_freeSize;
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
- (void)setTag:(int)arg1;
@property(readonly, nonatomic) int tag;
- (_Bool)isChatDB;

@end

