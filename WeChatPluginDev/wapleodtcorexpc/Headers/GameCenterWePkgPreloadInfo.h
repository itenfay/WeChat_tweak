//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GameCenterWePkgPreloadInfo : NSObject
{
    unsigned int _alwaysDisplayAfterTime;
    NSString *_pkgId;
    long long _displayTypeWithWePkg;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int alwaysDisplayAfterTime; // @synthesize alwaysDisplayAfterTime=_alwaysDisplayAfterTime;
@property(nonatomic) long long displayTypeWithWePkg; // @synthesize displayTypeWithWePkg=_displayTypeWithWePkg;
@property(retain, nonatomic) NSString *pkgId; // @synthesize pkgId=_pkgId;

@end

