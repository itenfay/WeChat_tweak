//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QIndoorInfo : NSObject
{
    NSString *_buildUid;
    NSString *_levelName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *levelName; // @synthesize levelName=_levelName;
@property(readonly, copy, nonatomic) NSString *buildUid; // @synthesize buildUid=_buildUid;
- (id)initWithBuildUid:(id)arg1 levelName:(id)arg2;

@end

