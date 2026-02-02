//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdCanvasDynamicInfoModel : NSObject
{
    NSString *_vangoghId;
    NSString *_minVangoghLibVersion;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *minVangoghLibVersion; // @synthesize minVangoghLibVersion=_minVangoghLibVersion;
@property(retain, nonatomic) NSString *vangoghId; // @synthesize vangoghId=_vangoghId;

@end

