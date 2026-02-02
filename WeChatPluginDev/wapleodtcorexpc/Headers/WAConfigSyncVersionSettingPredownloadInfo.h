//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WAConfigSyncVersionSettingPredownloadInfo : NSObject
{
    unsigned int _usedTime;
    NSArray *_appidList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *appidList; // @synthesize appidList=_appidList;
@property(nonatomic) unsigned int usedTime; // @synthesize usedTime=_usedTime;

@end

