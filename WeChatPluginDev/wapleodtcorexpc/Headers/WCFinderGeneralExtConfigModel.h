//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderExtPostPreCheckModel;

@interface WCFinderGeneralExtConfigModel : NSObject
{
    unsigned long long _extType;
    NSString *_extParams;
    WCFinderExtPostPreCheckModel *_preCheckModel;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderExtPostPreCheckModel *preCheckModel; // @synthesize preCheckModel=_preCheckModel;
@property(copy, nonatomic) NSString *extParams; // @synthesize extParams=_extParams;
@property(nonatomic) unsigned long long extType; // @synthesize extType=_extType;

@end

