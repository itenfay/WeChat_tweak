//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface SystemAuthBizInfo : NSObject
{
    MISSING_TYPE *scene;
}

+ (void)overSeaUserSwitchCheck;
- (id)init;
- (_Bool)entranceEnabled;
- (id)localizedSettingDescriptionFor:(unsigned int)arg1;
- (id)localizedSimpleDescriptionFor:(unsigned int)arg1;
- (unsigned long long)bitStorageFor:(unsigned int)arg1;
- (void)setAuthStateFor:(unsigned int)arg1 isOn:(_Bool)arg2;
- (_Bool)isAuthorizedFor:(unsigned int)arg1;
@property(nonatomic, readonly) NSString *title;
- (id)initWithScene:(unsigned long long)arg1;
@property(nonatomic, readonly) unsigned long long scene; // @synthesize scene;

@end

