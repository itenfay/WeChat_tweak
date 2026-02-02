//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAFileStorageUsrSpaceItem : NSObject
{
    unsigned int _lastOpenTime;
    NSString *_appId;
    NSString *_usrDir;
    double _sizeInBytes;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastOpenTime; // @synthesize lastOpenTime=_lastOpenTime;
@property(nonatomic) double sizeInBytes; // @synthesize sizeInBytes=_sizeInBytes;
@property(copy, nonatomic) NSString *usrDir; // @synthesize usrDir=_usrDir;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;

@end

